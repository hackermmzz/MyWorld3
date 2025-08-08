#include "Config.h"
#include "Logger/logger.h"

void ConfigInit()
{
    return;
    QFile file("asset/Config/config.txt");
    if(!file.open(QIODevice::ReadOnly| QIODevice::Text)){
        cout<<"读取配置文件失败!"<<endl;
        exit(0);
    }
    //
    QJsonParseError *err=0;
    QJsonDocument doc=QJsonDocument::fromJson(file.readAll(),err);
    if(err){
        cout<<"读取配置文件异常!"<<endl;
        exit(0);
    }
    //
    using TP=decltype(Configure);
    auto dfs=[&](auto&&dfs,const QJsonObject&root,TP&mp)->void{
        for(auto&key:root.keys()){
            auto value=root[key];
            if(value.isObject()){
                auto obj=value.toObject();
                mp[key]=new TP();
                TP&nxt=*(TP*)mp[key];
                dfs(dfs,obj,nxt);
            }else{
                mp[key]=new decltype(value)(value);
            }
        }
    };
    //
    QJsonObject root=doc.object();
    dfs(dfs,root,Configure);
}


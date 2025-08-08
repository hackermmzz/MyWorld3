#include "Config.h"
#include "Logger/logger.h"
#include "Exception/Exception.h"
void ConfigInit()
{
    try{
        Configure=ParseJson("asset/Config/config.txt");
    }catch(Exception e){
        Error<<e.what()<<endl;
    }
    //


}

ConfigureTp ParseJson(const char * filePath)
{
    ConfigureTp ret;
    QFile file(filePath);
    if(!file.open(QIODevice::ReadOnly| QIODevice::Text)){
        throw Exception("读取配置文件失败!");
        return ret;
    }
    //
    QJsonParseError *err=0;
    QJsonDocument doc=QJsonDocument::fromJson(file.readAll(),err);
    if(err){
        throw Exception("读取配置文件异常!");
        return ret;
    }
    //
    auto dfs=[&](auto&&dfs,const QJsonObject&root,ConfigureTp&mp)->void{
        for(auto&key:root.keys()){
            auto value=root[key];
            if(value.isObject()){
                auto obj=value.toObject();
                mp[key]=new ConfigureTp();
                ConfigureTp&nxt=*(ConfigureTp*)mp[key];
                dfs(dfs,obj,nxt);
            }else{
                mp[key]=new decltype(value)(value);
            }
        }
    };
    //dfs
    QJsonObject root=doc.object();
    dfs(dfs,root,ret);
    //
    return ret;
}



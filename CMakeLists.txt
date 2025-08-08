cmake_minimum_required(VERSION 3.5) # CMake install : https://cmake.org/download/
project(MyWorld3 LANGUAGES CXX)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_PREFIX_PATH "C:/Qt/Qt5.9.2//5.9.2/mingw53_32") # Qt Kit Dir
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/src)

find_package(Qt5 COMPONENTS Widgets REQUIRED) # Qt COMPONENTS
qt5_wrap_ui(UI_HEADERS src/OpenGL.ui)


aux_source_directory(./src srcs)
aux_source_directory(./src/Logger logger)
aux_source_directory(./src/Exception exception)
# Specify MSVC UTF-8 encoding   
add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")

add_executable(${PROJECT_NAME}
    WIN32 # If you need a terminal for debug, please comment this statement 
    ${srcs} 
    ${logger}
    ${exception}
    ${UI_HEADERS}
) 

target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Widgets) # Qt5 Shared Library
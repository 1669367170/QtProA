cmake_minimum_required(VERSION 3.15)
set(PROJECT_NAME "QtProA")
project(${PROJECT_NAME})

option(PRINT_CMAKE_INFO "Print Cmake Info" ON)

if (PRINT_CMAKE_INFO)
    message("===================================================")
    message(${PROJECT_NAME}, " Build-Type: " ${CMAKE_BUILD_TYPE})
endif (PRINT_CMAKE_INFO)


# 激活自动生成moc文件(通过qmake编译)选项
# 激活自动处理rcc文件(即资源文件，通过qmake编译)选项
# 激活自动处理ui文件(通过qmake编译)选项
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# 查找Cmake模块中Qt相关库文件路径，REQUIRED指示Cmake如果没有找到则终止程序
find_package(Qt5 REQUIRED
        COMPONENTS
        Widgets
        Core
        Gui)

set(QRC_SOURCE_FILES main.qrc)
list(APPEND ${QRC_SOURCE_FILES} qss.qrc)
# 添加*.qrc资源文件
qt5_add_resources(QRC_FILES ${QRC_SOURCE_FILES})

#if (Qt5_FOUND)
#    message(${PROJECT_NAME}, " Qt5_FOUND!")
#else (Qt5_FOUND)
#    message(${PROJECT_NAME}, " Qt5_NOT_FOUND!")
#endif (Qt5_FOUND)

add_subdirectory("./src/GUI")

aux_source_directory(. SRC_LIST)
list(APPEND SRC_LIST main.cpp)
add_executable(${PROJECT_NAME} ${SRC_LIST} ${QRC_FILES})

## 将对应Qt模块的库链接进程序（添加的模块即Qt"*.pro"文件中的Qt+=Module）
#target_link_libraries(${PROJECT_NAME}
#        Qt5::Widgets
#        Qt5::Core
#        Qt5::Gui)
target_link_libraries(${PROJECT_NAME} GUI_Lib)
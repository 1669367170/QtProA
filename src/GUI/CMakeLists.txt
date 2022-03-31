cmake_minimum_required(VERSION 3.15)

set(PROJECT_NAME "GUI_Lib")
message(${PROJECT_NAME})

# 递归搜索
file(GLOB_RECURSE H_SRCS "*.h")
file(GLOB_RECURSE CXX_SRCS "*.cpp")

list(APPEND SRCS ${H_SRCS} ${CXX_SRCS})

find_package(Qt5 REQUIRED
        COMPONENTS
        Widgets
        Core
        Gui)

if (Qt5_FOUND)
    message(${PROJECT_NAME}, " Qt5_FOUND!")
else (Qt5_FOUND)
    message(${PROJECT_NAME}, " Qt5_NOT_FOUND!")
endif (Qt5_FOUND)

link_libraries(
        Qt5::Widgets
        Qt5::Core
        Qt5::Gui)
# 生成链接库
add_library(${PROJECT_NAME} STATIC ${SRCS})

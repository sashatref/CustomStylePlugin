set(PROJECT_NAME CustomStylePlugin)

project(${PROJECT_NAME} VERSION 1.0.0)

set(SOURCES
    customstyleplugin.cpp 
    customstyle.cpp
    project_pch.h
    customstyleplugin.h 
    customstyle.h
    CustomStylePlugin.qrc
    customstyle.json
)

add_library(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME}
    PRIVATE
    Qt5::Widgets
    HelperLibrary
)

target_compile_definitions(${PROJECT_NAME} PRIVATE "QT_STATICPLUGIN")
target_precompile_headers(${PROJECT_NAME} PRIVATE project_pch.h)

aviaNames()

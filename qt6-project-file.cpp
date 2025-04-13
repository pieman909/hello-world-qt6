cmake_minimum_required(VERSION 3.17)
project(MyQt6App VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 21)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

add_executable(MyQt6App main.cpp)

target_link_libraries(MyQt6App PRIVATE
    Qt6::Core
    Qt6::Gui
    Qt6::Widgets
)

# For Windows: to add application icon and metadata
if(WIN32)
    set_target_properties(MyQt6App PROPERTIES
        WIN32_EXECUTABLE TRUE
    )
endif()

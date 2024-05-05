# CMakeList.txt: 顶层 CMake 项目文件，在此处执行全局配置
# 并包含子项目。
#
cmake_minimum_required (VERSION 3.8)

project ("ApexClient")
add_subdirectory (glfw)
add_library(imgui STATIC
  imgui/imgui.cpp
  imgui/imgui_demo.cpp
  imgui/imgui_widgets.cpp
  imgui/backends/imgui_impl_opengl3.cpp
  imgui/backends/imgui_impl_glfw.cpp
  imgui/imgui_draw.cpp
  imgui/imgui_tables.cpp
)
add_library(glad STATIC
	glad/src/glad.c
)

target_link_libraries(imgui PUBLIC glfw)
target_include_directories(imgui PUBLIC ${CMAKE_SOURCE_DIR}/glfw/include ${CMAKE_SOURCE_DIR}/imgui ${CMAKE_SOURCE_DIR}/imgui/backends)
target_include_directories(glad PUBLIC ${CMAKE_SOURCE_DIR}/glad/include)
# 包含子项目。
add_subdirectory (ApexClient)




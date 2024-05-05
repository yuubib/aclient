# CMakeList.txt: ApexClient 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

# 将源代码添加到此项目的可执行文件。
add_executable (ApexClient "ApexClient.cpp" "ApexClient.h" "editor/render.cpp"  "editor/render.h")
target_link_libraries(ApexClient imgui glfw opengl32 glad)
target_include_directories(ApexClient PUBLIC 
${CMAKE_SOURCE_DIR}/imgui ${CMAKE_SOURCE_DIR}/imgui/backends 
${CMAKE_SOURCE_DIR}/glfw/include ${CMAKE_SOURCE_DIR}/glad/include)
add_dependencies(ApexClient imgui glad)
if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET ApexClient PROPERTY CXX_STANDARD 20)
endif()

# TODO: 如有需要，请添加测试并安装目标。

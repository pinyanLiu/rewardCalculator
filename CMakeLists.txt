# 设置CMake的最低版本
cmake_minimum_required(VERSION 3.5)

# 设置项目名称
project(ExampleProject)

# 添加可执行文件，并指定源文件
add_executable(calculator util/main.cpp)
target_include_directories(calculator PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/lib/)

# 指定头文件路径，这可以帮助CMake在构建时找到头文件
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# 如果你有多个源文件，可以像这样添加它们：
# add_executable(example example.cpp another_file.cpp)

# 如果你有多个头文件，可以像这样添加它们：
# include_directories(${CMAKE_CURRENT_SOURCE_DIR} include_folder)

# 如果你有其他的依赖库，可以使用 find_package 命令来查找它们
# 并使用 target_link_libraries 来链接这些库
# 例如，如果你要链接一个名为 Boost 的库：
# find_package(Boost REQUIRED)
# target_link_libraries(example Boost::boost)

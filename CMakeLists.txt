cmake_minimum_required(VERSION 3.0.0)
project(MyProject VERSION 0.1.0)

# Set the project name and version as variables
set(PROJECT_NAME RisuFramework)
set(PROJECT_VERSION 0.1.0)

# Set the source files for the project
set(SOURCES
    src/Main.cpp
    src/core/graphics/Window.cpp
    src/core/graphics/Graphics.cpp
    src/core/logic/RisuProject.cpp
    src/game/Game.cpp
    # Add more source files here
)

# Add an executable target
add_executable(${PROJECT_NAME} ${SOURCES})

# Set any additional compiler flags or options
target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra)

# Set any additional include directories
target_include_directories(${PROJECT_NAME} PRIVATE
    include
    external/include
    # Add more include directories here
)

# Link against the necessary libraries
if(WIN32)
    set(SDL2_LIBRARY_PATH ${CMAKE_SOURCE_DIR}/third-party/lib/windows)
elseif(UNIX AND NOT APPLE)
    set(SDL2_LIBRARY_PATH ${CMAKE_SOURCE_DIR}/third-party/lib/linux)
endif()

target_link_directories(${PROJECT_NAME} PRIVATE ${SDL2_LIBRARY_PATH})
target_link_libraries(${PROJECT_NAME} PRIVATE SDL2)
# Add more libraries here if needed

# Optionally, include testing support
#include(CTest)
#enable_testing()
#add_test(NAME my_test COMMAND my_test)

# Set the CPack configurations for packaging
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
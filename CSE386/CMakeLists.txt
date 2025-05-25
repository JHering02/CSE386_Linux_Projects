
cmake_minimum_required(VERSION 3.10)



# IMPORTANT: Set the main file here

# set(MAIN_FILE exercisebasicgraphics.cpp)
# set(MAIN_FILE test)
# set(MAIN_FILE exerciseIntersectionTests.cpp)
# set(MAIN_FILE exerciseRaytrace.cpp)
# set(MAIN_FILE exerciseColorTests.cpp)
# set(MAIN_FILE exercisetriangles.cpp)
# set(MAIN_FILE fullraytrace.cpp)
# set(MAIN_FILE exercisespotlightcone.cpp)
# set(MAIN_FILE exercisetextures.cpp)
# set(MAIN_FILE exercisematrixoperationsGLM.cpp)
# set(MAIN_FILE exercise2Dtransformations.cpp)
# set(MAIN_FILE exercise3Dtransformations.cpp)
# set(MAIN_FILE exercisepipeline.cpp)
# set(MAIN_FILE exercisepipelineshadinghiddensurfaces.cpp)
set(MAIN_FILE exercisecolordepthbuffer.cpp)



# Project name
project(CSE386 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Compiler flags
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3")


# Include directories (add more as needed)
include_directories(${CMAKE_SOURCE_DIR})

# Add source files
set(SOURCES
    camera.cpp
    colorandmaterials.cpp
    defs.cpp
    eshape.cpp
    fragmentops.cpp
    framebuffer.cpp
    image.cpp
    io.cpp
    iscene.cpp
    ishape.cpp
    light.cpp
    rasterization.cpp
    raytracer.cpp
    utilities.cpp
    vertexops.cpp
    vertextdata.cpp
    ${MAIN_FILE}
)

# Add header files (optional, depending on the organization of your project)
set(HEADERS
    camera.h
    colorandmaterials.h
    defs.h
    framebuffer.h
    eshape.h
    fragmentops.h
    hitrecord.h
    image.h
    io.h
    iscene.h
    ishape.h
    light.h
    rasterization.h
    raytracer.h
    utilities.h
    vertexdata.h
    vertexops.h
)

# Create executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Find OpenGL and GLUT
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

# Link libraries
target_link_libraries(${PROJECT_NAME} OpenGL::GL GLUT::GLUT)

# Set output directories
set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
)

# Add debugging flags if needed
if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_definitions(${PROJECT_NAME} PRIVATE _DEBUG)
else()
    target_compile_definitions(${PROJECT_NAME} PRIVATE NDEBUG)
endif()

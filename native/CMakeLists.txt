cmake_minimum_required(VERSION 3.25)

project(ck2_naval LANGUAGES C CXX)

if(NOT WIN32 OR NOT MSVC)
    message(FATAL_ERROR "CK2 Naval currently supports 64-bit MSVC on Windows only")
endif()

if(NOT CMAKE_SIZEOF_VOID_P EQUAL 8)
    message(FATAL_ERROR "CK2 Naval must be built as x64")
endif()

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
foreach(config Debug Release RelWithDebInfo MinSizeRel)
    string(TOUPPER "${config}" config_upper)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_${config_upper} "${CMAKE_BINARY_DIR}/bin")
endforeach()

file(MAKE_DIRECTORY "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")
configure_file("${CMAKE_CURRENT_SOURCE_DIR}/ck2_naval.ini"
               "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/ck2_naval.ini" COPYONLY)

set(BUILD_SHARED_LIBS OFF CACHE BOOL "Build static dependencies" FORCE)
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/../third_party/minhook"
                 "${CMAKE_BINARY_DIR}/third_party/minhook")

add_library(ck2_naval SHARED
    src/core.cpp
    src/hash.cpp
    src/hooks.cpp
    src/log.cpp
    src/probe.cpp
    src/version_guard.cpp
)

target_include_directories(ck2_naval PRIVATE include)
target_compile_definitions(ck2_naval PRIVATE
    WIN32_LEAN_AND_MEAN
    NOMINMAX
    UNICODE
    _UNICODE
)
target_compile_options(ck2_naval PRIVATE /W4 /WX /permissive- /EHsc /utf-8)
target_link_libraries(ck2_naval PRIVATE minhook bcrypt)
set_target_properties(ck2_naval PROPERTIES PREFIX "" OUTPUT_NAME "ck2_naval")

add_library(d3d9_proxy SHARED
    src/proxy.cpp
    src/proxy.def
)
target_compile_definitions(d3d9_proxy PRIVATE
    WIN32_LEAN_AND_MEAN
    NOMINMAX
    UNICODE
    _UNICODE
)
target_compile_options(d3d9_proxy PRIVATE /W4 /WX /permissive- /EHsc /utf-8)
set_target_properties(d3d9_proxy PROPERTIES PREFIX "" OUTPUT_NAME "d3d9")

add_executable(ck2_naval_verify
    tests/verify_main.cpp
    src/hash.cpp
    src/version_guard.cpp
)
target_include_directories(ck2_naval_verify PRIVATE include)
target_compile_definitions(ck2_naval_verify PRIVATE
    WIN32_LEAN_AND_MEAN
    NOMINMAX
    UNICODE
    _UNICODE
)
target_compile_options(ck2_naval_verify PRIVATE /W4 /WX /permissive- /EHsc /utf-8)
target_link_libraries(ck2_naval_verify PRIVATE bcrypt)



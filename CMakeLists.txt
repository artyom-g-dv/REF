cmake_minimum_required(VERSION 3.23)
project(REF)

set(CMAKE_CXX_STANDARD 20)

include_directories(cpp)
include_directories(cpp/utils)

add_executable(REF
        cpp/utils/CommonDefines.h
        cpp/utils/EyePatterns.h
        cpp/utils/FileParser.h
        cpp/utils/FunctionTracer.h
        cpp/utils/Image.cpp
        cpp/utils/Image.h
        cpp/utils/SolutionEvaluator.h
        cpp/main.cpp
        cpp/Solution.h)

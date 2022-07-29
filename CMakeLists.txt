CMAKE_MINIMUM_REQUIRED(VERSION 3.11)
PROJECT(training)
SET(CMAKE_CXX_STANDARD 20)

# project
ADD_LIBRARY(training
    ${PROJECT_SOURCE_DIR}/src/Variable.cpp
)

TARGET_INCLUDE_DIRECTORIES(training
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

# test
ADD_EXECUTABLE(test_training ${PROJECT_SOURCE_DIR}/test/test_training.cpp)

TARGET_INCLUDE_DIRECTORIES(test_training
    PRIVATE
        ${PROJECT_SOURCE_DIR}/third_party/googletest
)
LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/third_party/googletest)
# /usr/lib/x86_64-linux-gnu/
TARGET_LINK_LIBRARIES(test_training libgtest.a libgtest_main.a pthread training)

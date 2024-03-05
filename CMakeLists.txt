cmake_minimum_required(VERSION 3.0.0)
project(integer_to_roman VERSION 1.0.0 LANGUAGES C)

set(SRCS
    src/main.c
    src/converter.c
    )

set(HEADERS
    src/converter.h
    )

add_executable(integer_to_roman ${SRCS} ${HEADERS})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

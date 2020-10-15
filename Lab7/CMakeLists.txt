cmake_minimum_required(VERSION 3.13)
project(Lab7 C)

set(CMAKE_C_STANDARD 11)

include_directories(pipes)
include_directories(process)
include_directories(tokenize)
include_directories(utils)

add_executable(Lab7
        pipes/pipes.c
        pipes/pipes.h
        process/process.c
        process/process.h
        tokenize/makeArgs.c
        tokenize/makeArgs.h
        utils/myUtils.c
        utils/myUtils.h
        cscd340Lab7.c
        fileUtils/fileUtils.h
        fileUtils/fileUtils.c
        linkedlist/linkedList.h
        linkedlist/linkedList.c
        linkedlist/listUtils.h
        linkedlist/listUtils.c myCommand/myCommand.h myCommand/myCommand.c myAlias/myAlias.h myAlias/myAlias.c)

cmake_minimum_required(VERSION 3.6)
project(hackathon_processor)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Language/Identifiers/ClassIdentifier.cpp Language/Identifiers/ClassIdentifier.h Language/Language.cpp Language/Language.h Language/Identifiers/FunctionIdentifier.cpp Language/Identifiers/FunctionIdentifier.h Language/Identifiers/ControlStructureIdentifiers.cpp Language/Identifiers/ControlStructureIdentifiers.h Language/Parts/Symbol.cpp Language/Parts/Symbol.h Language/Identifiers/SymbolIdentifier.cpp Language/Identifiers/SymbolIdentifier.h Language/Parts/Function.cpp Language/Parts/Function.h Language/Parts/Parameter.cpp Language/Parts/Parameter.h Language/Program.cpp Language/Program.h Language/Parts/File.cpp Language/Parts/File.h Parsing/Parser.cpp Parsing/Parser.h Parsing/ParsedFile.cpp Parsing/ParsedFile.h)
add_executable(hackathon_processor ${SOURCE_FILES})
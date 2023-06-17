cmake_minimum_required(VERSION 3.20)

set(HEADER_FILES
    src/Menu.h
    src/BankClient.h
    src/BankAccount.h
)

set(SOURCE_FILES
    src/main.cpp
    
    src/Menu.cpp
    src/BankClient.cpp
    src/BankAccount.cpp
)

include_directories(
    "${CMAKE_SOURCE_DIR}/app/src"
)

add_executable(${PROJECT_NAME} ${HEADER_FILES} ${SOURCE_FILES} )

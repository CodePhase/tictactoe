cmake_minimum_required(VERSION 2.6)
project(tictactoe)
find_package(Qt4 REQUIRED)

include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})

set(CMAKE_AUTOUIC ON)
set(tictactoe_SRCS tictactoe.cpp main.cpp)

qt4_automoc(${tictactoe_SRCS})
add_executable(tictactoe ${tictactoe_SRCS})
target_link_libraries(tictactoe ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY})

install(TARGETS tictactoe RUNTIME DESTINATION bin)

configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake_uninstall.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake"
    IMMEDIATE @ONLY)

add_custom_target(uninstall
    COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake)

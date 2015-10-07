cmake_minimum_required(VERSION 2.6)
project(tictactoe)
find_package(Qt4 REQUIRED)

include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})

set(tictactoe_SRCS tictactoe.cpp main.cpp)

qt4_automoc(${tictactoe_SRCS})
add_executable(tictactoe ${tictactoe_SRCS})
target_link_libraries(tictactoe ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY})

install(TARGETS tictactoe RUNTIME DESTINATION bin)

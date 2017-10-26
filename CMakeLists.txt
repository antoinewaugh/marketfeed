cmake_minimum_required(VERSION 3.7)
project(MarketFeed)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)

add_executable(MarketFeed ${SOURCE_FILES})

include_directories(OrderBook)

add_subdirectory(OrderBook)
add_subdirectory(OrderBookTests)

target_link_libraries(MarketFeed OrderBook)
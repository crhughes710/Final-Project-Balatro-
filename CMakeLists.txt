cmake_minimum_required(VERSION 4.3)
project(Balatro)

set(CMAKE_CXX_STANDARD 20)

add_executable(Balatro main.cpp
        Player.cpp
        Player.h
        GreenDeckPlayer.cpp
        GreenDeckPlayer.h
        RedDeckPlayer.cpp
        RedDeckPlayer.h
        BlueDeckPlayer.cpp
        BlueDeckPlayer.h
        BalatroGame.cpp
        BalatroGame.h)

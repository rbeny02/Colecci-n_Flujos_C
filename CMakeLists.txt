cmake_minimum_required(VERSION 3.29)
project(Colecci_n_Flujos_C)

set(CMAKE_CXX_STANDARD 14)

add_executable(Colecci_n_Flujos_C
    main.cpp
        Matematicas/matematicas.h
        Matematicas/matematicas.cpp
        Geometria/circulo.cpp
        Geometria/cuadrado.cpp
        Geometria/triangulo.cpp)

//
// Created by rania on 17/12/2024.
//
#include "Matematicas/matematicas.h"
#include <iostream>




int main()
{
    matematicas::Matematicas mat;
    std::cout << "Suma: " << mat.sumar(2, 3) << std::endl;
    std::cout << "Resta: " << mat.restar(2, 3) << std::endl;
}
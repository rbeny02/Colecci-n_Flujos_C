//
// Created by rania on 17/12/2024.
//
#include "Matematicas/matematicas.h"
#include "Geometria/geometria.h"
#include "Ciencia/ciencia.h"
#include <iostream>
#include <fstream>




int main()
{
    matematicas::Matematicas mat;
    std::cout << "Suma: " << mat.sumar(2, 3) << std::endl;
    std::cout << "Resta: " << mat.restar(2, 3) << std::endl;

    std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(2, 3) << std::endl;
    std::cout  << "Perimetro del triangulo: " << Geometria::calcularPerimetroTriangulo(2, 6, 3) << std::endl;
    std::cout  << "Area del circulo: " << Geometria::calcularAreaCirculo(3) << std::endl;
    std::cout  << "Perimetro del circulo: " << Geometria::calcularPerimetroCirculo(3) << std::endl;
    std::cout  << "Area del cuadrado: " << Geometria::calcularAreaCuadrado(3) << std::endl;
    std::cout  << "Perimetro del cuadrado: " << Geometria::calcularPerimetroCuadrado(3) << std::endl;



    double masa = 10.0; // kg
    std::cout << "Energia: " << Ciencia::Fisica::calcularEnergia(masa) << std::endl;


}
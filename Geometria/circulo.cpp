//
// Created by rania on 17/12/2024.
//
#include "geometria.h"
#include <cmath>

namespace Geometria {
    double calcularAreaCirculo(double radio) {
        return M_PI * radio * radio;
    }

    double calcularPerimetroCirculo(double radio) {
        return 2 * M_PI * radio;
    }

    Circulo::Circulo(double r) : radio(r) {}

    double Circulo::calcularArea() {
        return M_PI * radio * radio;
    }

    double Circulo::calcularPerimetro() {
        return 2 * M_PI * radio;
    }
}
//
// Created by rania on 17/12/2024.
//

#include "STL_contenedores.h"
#include <iostream>

void vectorOperations() {
    std::vector<int> numeros {1, 2, 3, 4, 5};
    numeros.push_back(6);
    std::cout << "Vector contents: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void mapOperations() {
    std::map<std::string, int> edad;
    edad["Alverto"] = 18;
    edad["Sofia"] = 27;
    edad.erase("Alverto");
    std::cout << "Map contents: ";
    for (const auto& pair : edad) {
        std::cout << pair.first << ": " << pair.second << " ";
    }
    std::cout << std::endl;
}

void setOperations() {
    std::set<int> conjunto {1, 2, 3, 4, 5};
    conjunto.insert(6);
    conjunto.erase(1);
    std::cout << "Set contents: ";
    for (int num : conjunto) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
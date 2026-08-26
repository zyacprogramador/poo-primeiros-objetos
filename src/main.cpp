#include <iostream>

#include "sensor_nivel.hpp"

int main() {
    const SensorNivel nivel{"LT-101", 42.5, "%"};
    const SensorNivel pressao{"PT-201", 2.7, "bar"};

    std::cout << nivel.resumo() << '\n';
    std::cout << pressao.resumo() << '\n';

    return 0;
}
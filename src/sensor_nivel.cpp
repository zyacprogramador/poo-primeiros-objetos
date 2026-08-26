#include "sensor_nivel.hpp"

#include <sstream>

namespace {
std::string formatarValor(double valor) {
    std::ostringstream saida;
    saida << valor;
    return saida.str();
}
}  // namespace

SensorNivel::SensorNivel(std::string tagInicial, double valorInicial)
    : tag(tagInicial), valor(valorInicial) {
}

std::string SensorNivel::resumo() const {
    return tag + ": " + formatarValor(valor);
}

#include "sensor_nivel.hpp"

#include <sstream>

namespace {
std::string formatarValor(double valor) {
    std::ostringstream saida;
    saida << valor;
    return saida.str();
}
}  // namespace

SensorNivel::SensorNivel(
    std::string tagInicial,
    double valorInicial,
    std::string unidadeInicial
)
    : tag(tagInicial),
      valor(valorInicial),
      unidade(unidadeInicial) {
}

std::string SensorNivel::resumo() const {
    std::string resultado = tag + ": " + formatarValor(valor);

    if (!unidade.empty()) {
        resultado += " " + unidade;
    }

    return resultado;
}

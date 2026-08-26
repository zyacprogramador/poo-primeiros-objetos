class SensorNivel:
    def __init__(
        self,
        tag: str,
        valor: float,
        unidade: str = ""
    ):
        self.tag = tag
        self.valor = valor
        self.unidade = unidade

    def resumo(self) -> str:
        resultado = f"{self.tag}: {self.valor:g}"

        if self.unidade:
            resultado += f" {self.unidade}"

        return resultado
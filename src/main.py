from sensor_nivel import SensorNivel


def main() -> None:
    nivel = SensorNivel("LT-101", 42.5, "%")
    pressao = SensorNivel("PT-201", 2.7, "bar")

    print(nivel.resumo())
    print(pressao.resumo())


if __name__ == "__main__":
    main()

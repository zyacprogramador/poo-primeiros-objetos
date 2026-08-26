# Evidência — capítulo 03

- Data: 2026-08-26T15:25:42-03:00
- Branch: `pratica/02-extensao-unidade`
- Commit-base antes da geração: `2219fbe`
- Validação local: `make test ETAPA=02` — aprovada

## Medições com time

| Execução | C++ (real, s) | Python (real, s) |
|---|---:|---:|
| 1 | 0.00 | 0.03 |
| 2 | 0.00 | 0.06 |
| 3 | 0.00 | 0.03 |

## Respostas da prática

### 1. Estado, comportamento e responsabilidade

O estado do SensorNivel é formado pela tag, pelo valor e pela unidade. O comportamento é o método resumo(), e sua responsabilidade é representar uma leitura de nível com essas informações.

### 2. Papel dos arquivos C++

O sensor_nivel.hpp declara a classe e seus atributos e métodos. O sensor_nivel.cpp implementa o construtor e o método resumo(). O main.cpp cria os objetos e executa o programa, exibindo os resultados.

### 3. Construtor e valor padrão

O construtor inicializa o objeto com a tag, o valor e a unidade recebidos. O valor padrão da unidade como string vazia permite criar o objeto usando apenas dois argumentos, mantendo o comportamento da etapa 01.

### 4. Correspondência entre C++ e Python

Nos dois casos, podemos definir um valor padrão para um parâmetro, permitindo chamar o construtor sem informar esse argumento. A diferença está apenas na sintaxe de cada linguagem.

### 5. Prevenção de regressões

Porque a etapa 02 é uma extensão da etapa 01 e precisa preservar o comportamento que já funcionava. Assim, os testes da etapa anterior garantem que a nova alteração não quebrou o que já estava correto.

### 6. Execução e limites da medição

No C++, o programa precisa ser compilado antes de ser executado, enquanto no Python usamos o interpretador para executar o arquivo diretamente. O time permite comparar o tempo dessas execuções, mas não prova que uma linguagem é sempre mais rápida que outra.

### 7. Estado inválido ainda permitido

O modelo aceita -30% porque o atributo valor ainda é público e não existe uma validação que impeça valores inválidos. O conceito de encapsulamento pode ser usado para controlar o acesso ao atributo e garantir que somente valores válidos sejam armazenados.

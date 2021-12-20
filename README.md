# UFP_IAPG

# Operações básicas e estatísticas em coleções de números

### Requisitos

Requisitos funcionais

Em concreto a aplicação deverá cumprir os seguintes requisitos funcionais a seguir enumerados:

1. Existir um sistema de menus para aceder às várias funcionalidades do programa
2. Permitir a leitura dos dados a partir um ficheiro de texto em formato csv
3. Permitir a visualização dos dados em formato tabela. a. Permitir visualizar toda a tabela b. Permitir visualizar
   apenas as primeiras k linhas do ficheiro
4. Calcular as estatísticas de sumário e de ordem duma dada coluna i.e. a. soma b. média, desvio padrão c. Valor mínimo
   e máximo d. A mediana, primeiro e terceiro quartil
5. Guardar resultados das análises numa estrutura a. Permitir guardar a data/hora i.e. timestamp, b. nome do ficheiro c.
   índice da coluna de cada cálculo
6. Leitura e apresentação do histórico de cálculos efectuados
7. Permitir a escrita das análises num ficheiro de texto
8. Permitir procuras no histórico de análises
9. Permitir ler ficheiros com n número de colunas ou detectar automaticamente o número de colunas.
10. Permitir que o programa suporte variáveis categóricas e calcule tabelas de frequências, i.e., permita calcular os
    totais de cada categoria. Exemplo da variável notas e respectiva tabela de frequência:

| #NOTAS | #TAB.FREQ |
| :---: | :---: |
| MB | B  4 |
| B |  B- 1|
| B+ | B+ 2 |
| S | MB 2  |
| B | S 3 |
| B |  |
| B+ |  |
| B- |  |
| S |  |
| MB |  |
| B |  |
| S |  |

- Main menu:
  Choose file:
- Preview File:
    - All table
    - Choose a specific lines
    - History file
- Statistics menu:
    - sum
    - absolute sum
    - relative sum
    - average
    - standard deviation
    - MAX
    - MIN
    - Median
    - Quarter
    - others...
- Files
    - Open file
    - Create new file
        - timestamp
        - name
        - indexCol
    - Save file CVS
        - Save statistics
    - Delete file CVS;
    - Save file BIN
    - Delete File BIN;
- Search history
    - By name
    - By value
- ## Ao executar a primeira chamada do programa tem que ler os ficheiros de texto.
- Tem que ler que ficheiros existe na pasta e armazenar numa tabela.
- Tem que existir a possibilidade de escolher o ficheiro
- A escolher o ficheiro deve de apresentar um menu a dizer pre-visualizar dados e estatisticas, abrir ou voltar.
## Ao abrir o ficheiro tem que :
- Ler o numero de linhas
- Depois ver quantos elementos tem por linha;
  O programa deverá calcular as estatísticas de sumário e.g. soma, média,mediana, desvio padrão e outras operações básicas
## Editar ficheiro
- Tem que guardar historico de todos os valores que foram acrescentados, alterados ou apagados.
    - Exemplo na visualizacao dos dados :Add: xxx | Line 1 | Col 2 | Value 123 | Delete: xxx | Line 1 | Col 2 | Value 123 | edit: xxx | Line 1 | Col 2 | Value 123 |
    - Gravacao: 1;1;2;123 - Primeiro numero funciona como flag para saber o foi feito.
        - 1 - add
        - 2 - delete
        - 3 - edit

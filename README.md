<p align="center">
  <img src="./assets/logo.png" />
</p>

<br>

<h2 align="center">Anotações e soluções dos exercícios do curso "Programação Básica para Competições de Programação (em C++) - CodCad"</h2>

<h3 align="center">Todas as videoaulas e exercícios podem ser acessados na plataforma <a href="https://neps.academy/course/6" target="_blank" style="color:#32cd32;">Neps Academy</a></h3>

<br>
<h3 align="center">
<a href="#introducao" style="color:#32cd32;">Introdução</a>
 | <a href="#controle" style="color:#32cd32;">Controlando o Código</a>
 | <a href="#vetoresematrizes" style="color:#32cd32;">Vetores e Matrizes</a> | <a href="#cadeiadecaracteres" style="color:#32cd32;">Cadeia de Caracteres</a>
</h3>

<br>
<h1 id="introducao">:green_book: Introdução</h1>

Usaremos a linguagem de programação C++ e a IDE Code::Blocks.

Uma linguagem de programação é um método padronizado, formado por um conjunto de regras sintáticas e semânticas, de implementação de um código fonte - que pode ser compilado e transformado em um programa de computador, ou usado como script interpretado - que informará instruções de processamento ao computador.

Uma IDE é um programa que facilita a criação de programas. Podemos compilar e executar o código diretamente no ambiente da IDE e também detectar erros de escrita com ferramentas de debug.

Arquivos em C++ possuem a extensão **.cpp**.

_**Nota**_: **F9: compila + executa, Ctrl + F9: compila, Ctrl + F10: executa**

<br>
<h2>Introdução</h2>

A função `main()` é a primeira coisa que o computador vai procurar ao executar o programa.

Podemos imprimir mensagens na tela com a função `cout` da biblioteca `iostream`.

Os caracteres impressos devem estar entre aspas duplas `""` e, caso deseje imprimir mais de uma mensagem, elas ficarão separadas por dois sinais de menor `<<`.

_Comentários de código são feitos com barras duplas_ `//` _(uma linha), ou então_ `/* */` _(em bloco)._

_Comentários não são lidos pelo compilador e ajudam no entendimento do leitor._

```cpp
#include <iostream> // declarando as bibliotecas usadas

using namespace std;

int main() { // declarando a função main, o "corpo" do programa

  cout << "mensagem 1" << "mensagem 2" << "..." << "\n";

  return 0; // informando ao sistema operacional que o programa terminou
}

```

A maioria dos comandos precisam terminar com um ponto e vírgula `;`.

`"\n"` ou `endl` é um caractere de escape usado para fazer a quebra de linha, igual quando apertamos a tecla enter.

Símbolos:

- Atribuição: `=`
- Adição: `+`
- Subtração: `-`
- Multiplicação: `*`
- Divisão: `/`
- Resto: `%`

<br>
<h2>Entrada e Saída</h2>

Um programa pode ser dividido em três etapas: entrada, processamento e saída.

Variáveis são endereços de memória utilizados para armazenar e manipular valores. No programa, uma variável é acessada por meio de um nome especificado na sua declaração.

Em C++ existem três tipos básicos de variável:

- _int_: inteiro
- _float/double_: real
- _char_: caractere

Para armazenarmos um input em uma variável, podemos usar `cin`. As variáveis são separadas por sinais de maior `>>`.

`cout.precision()` delimita quantas casas decimais serão impressas (_float/double_).

```cpp
#include <iostream>

using namespace std;

int main() {
  double raio; // declarando a variável raio

  cin >> raio; // lendo o valor na tela e salvando em "raio"

  double pi = 3.14159; // declarando a variável pi e seu valor simultaneamente

  cout.precision(2); // indicando a precisão do número que vai ser impresso
  cout.setf(ios::fixed);

  cout << "A area eh " << raio * raio * pi << "\n"; // imprimindo a frase "A area eh " seguida do valor da área com 2 casas e quebra de linha

  return 0;
}
```

Cada tipo de variável possui um <a href="http://www.cplusplus.com/reference/climits/" target="_blank" style="color:#32cd32;">limite de armazenamento</a> específico.

Por exemplo, _int_: -32767 a 32767 e _long int_: -2147483647 a 2147483647.

<br>
<h2>Principais erros</h2>

- Ponto e Vírgula: `expected ';' before 'return'`

- Variável não declarada: `'X' was not declared in this scope`

- Erros sintaxe/lógicos: `A+B/2` ao invés de `(A+B)/2`

É importante ler a mensagem do erro e tentar descobrir o que o ocasionou.

Uma técnica simples e muito útil para encontrar a origem dos erros é imprimir as váriaveis múltiplas vezes ao longo do código. Caso elas apresentem valores corretos, o erro provavelmente está em outra parte do programa.

<br>
<h1 id="controle">:green_book: Controlando o Código</h1>

<h2>Seleção - Parte 1</h2>

O _if_ é uma estrutura de controle que permite executar uma sequência de comandos se uma dada condição for verdadeira.

`if (condição) { comandos }`

Operadores para montarmos condições:

- `x == y`: x é igual a y
- `x != y`: x é diferente de y
- `x >= y`: x é maior ou igual a y
- `x <= y`: x é menor ou igual a y
- `x > y`: x é maior que y
- `x < y`: x é menor que y

_Note que usamos **2** símbolos de igualdade para **comparar** valores, **1** igual é símbolo de **atribuição**._

É possível combinar condições com os operadores lógicos **and** (**&&**) e **or** (**||**):

- condição 1 _**and**_ condição 2 **&&** condição 3: todas as condições precisam ser verdadeiras
- condição 1 _**or**_ condição 2 **||** condição 3: basta uma condição ser verdadeira

O `else` é usado quando a condição anterior em `if` não é satisfeita.

_se (if) a condição for verdade, faça isso; se não (else), faça isso_

<br>
<h2>Seleção - Parte 2</h2>

Podemos incluir uma condição no else, resultando em estruturas de if e else _aninhadas_.

`else if (condição) { comandos }`

```cpp
#include <iostream>

using namespace std;

int main() {
  double altura; // declarando a variável altura

  cin >> altura; // lendo o valor na tela e salvando em "altura"

  if (altura > 1.80) {
    cout << "Alta\n"; // A pessoa é considerada Alta
  }
  else if (altura > 1.5) {
    cout << "Media\n"; // A pessoa é considerada Media
  }
  else {
    cout << "Baixa\n"; // A pessoa é considerada Baixa
  }

  return 0;
}
```

<br>
<h2>Organização de Código</h2>

O compilador (programa que transforma seu código em linguagem de máquina) não interpreta linhas em branco, indentações ou espaços em branco em geral.

```cpp
#include <iostream>
using namespace std;
int main(){int x;cin>>x;if(x>0 and x%2==0){cout<<"x positivo e par\n";}
else{if(x<=0){cout<<"x nao positivo\n";}if(x%2!=0){cout<<"x nao par\n";}}return 0;}
```

O código acima não está errado, porém é muito difícil de ler e identificar eventuais erros.

_Indentação_ é o processo de adicionar tabulações (tecla _tab_) nos blocos de código de funções, ifs, for, while, etc. Tornando o código mais limpo, legível e bem estruturado.

Também são boas práticas pular uma linha após a declaração das biliotecas e `using namespace std`, deixar um espaço em branco entre os valores e operadores, entre os parênteses e chaves, etc.

```cpp
#include <iostream>

using namespace std;

int main() {
    int x; // primeiro nível de indentação
    cin >> x;
    if (x > 0 and x % 2 == 0) {
        cout << "x positivo e par\n"; // segundo nível de indentação
    } else {
        if (x <= 0) {
            cout << "x nao positivo\n"; // terceiro nível de indentação
        }
        if (x % 2 != 0) {
            cout << "x nao par\n";
        }
    }
    return 0;
}
```

<br>
<h2>Repetição (While)</h2>

Enquanto uma dada condição for verdadeira, o `while` executará os comandos dados.

Esse tipo de estrutura de repetição é muito útil quando não se conhece quantas repetições serão necessárias para obter-se o resultado desejado.

`while (condição) { comandos }`

_É importante tomar muito cuidado ao usar while, pois se o estado da condição nunca se tornar **falso**, o programa ficará em um **loop infinito**!_

```cpp
#include <iostream>

using namespace std;

int main() {
  int A; // declarando as variáveis A e B
  int B;

  cin >> A >> B; // lendo e armazenando os valores de A e B

  int i = A; // criando uma variável contadora i que começa de A

  while (i <= B) { // enquanto i for menor ou igual a B

    if (i % 2 == 0) { // se i é par
      cout << i << " "; // imprime i na tela
    }

    i = i + 1; // incrementando i
  }
  cout << "\n";
  return 0;
}
```

<br>
<h2>Repetição (For)</h2>

O `for` é muito usado para tarefas com um número de repetições definido, como por exemplo, percorrer os elementos de um vetor.

`for (inicialização; condição de parada; incremento) { comandos }`

Existem alguns operadores muito usados nesse tipo de estrutura:

- `x += y` equivale a `x = x + y`
- `x -= y` equivale a `x = x - y`
- `x++` equivale a `x = x + 1`
- `x--` equivale a `x = x - 1`

Algumas vezes, queremos parar a execução do for antes do seu critério de parada original, ou seja, o for terá seu critério de parada original, mas se outra condição dentro do for for verdadeira queremos que ele acabe. Para isso, usamos o comando `break`.

_`break` serve para parar qualquer loop, portanto ele funciona exatamente da mesma maneira no `while`._

```cpp
#include <iostream>

using namespace std;

int main() {
    int var;
    for (int i = 1; i <= 10; i++) { // repetindo uma sequência de comandos 10 vezes
        cin >> var; // lendo um valor e armazenando-o em var

        if (var == 0) { // se o valor for igual a 0
            break; // encerre o for
        }
        cout << 2 * var << "\n";
    }
    return 0;
}
```

`continue` ignora todos os comandos que o loop ainda deveria fazer na iteração atual e passar para a próxima iteração.

_`continue` **não** para o loop. Também funciona no `while`._

```cpp
#include <iostream>

using namespace std;

int main() {
    for (int i = 1;i <= 100; i++) { // repetindo uma sequência de comandos 100 vezes
        if (i % 7 == 0) { // se o resto da divisão de i por 7 for igual a 0
            continue; // siga para a próxima iteração
        }
        // todos os outros comandos que seriam executados após o continue são ignorados
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}
```

Na prática, `break` e `continue` quase sempre estarão dentro de estruturas condicionais (_if, else_).

<br>
<h2>Matemática</h2>

Outra biblioteca muito útil na resolução de problemas é a `cmath`. Ela possui diversas funções e estruturas matemáticas prontas, facilitando o desenvolvimento.

Operações básicas:

- `pow(x, y)`: x elevado à y (_podemos obter a y-ésima raiz de x com `pow(x, 1.0 / y)`_)
- `sqrt(x)`: raiz quadrada de x
- `abs(x)`: valor absoluto de x
- `floor(x)`: arredonda x para baixo
- `ceil(x)`: arredonda x para cima

Trigonometria:

- `sin(x)`: seno de x
- `cos(x)`: cosseno de x
- `tan(x)`: tangente de x
- `asin(x)`: arco seno de x
- `acos(x)`: arco cosseno de x
- `atan(x)`: arco tangente de x

Logaritmo:

- `log(x)`: log na base _**e**_ de x
- `log10(x)`: log na base _**10**_ de x
- `exp(x)`: _**e**_ elevado à x

<br>
<h1 id="vetoresematrizes">:green_book: Vetores e Matrizes</h1>

<h2>Vetores</h2>

Um vetor em C++ pode ser entendido como um conjunto ordenado de variáveis _de um mesmo tipo_.

Podemos inicializar um vetor vazio ou preenchido de valores:

- `tipo_das_variaveis nome[n];`
- `tipo_das_variaveis nome[n] = {valor 1, valor 2, ..., valor n};`

É comum precisarmos inicializar um vetor completamente preenchido por zeros:

- `int nome[n] = {0};`

Todos os valores de um vetor se encontram em _índices_, o primeiro elemento está no _índice 0_, o segundo no _índice 1_ e assim por diante.

Para atribuir/modificar o valor no _índice n_ dentro de um vetor previamente declarado:

- `nome[n] = valor;`

Frequentemente precisamos percorrer todas as posições de um vetor por meio do `for`.

```cpp
#include <iostream>

using namespace std;

int main() {
  int n; // declarando a variável n (1 <= n <= 10^6)

  int sequencia[1000000]; // declarando um vetor de inteiros de 1000000 posições

  cin >> n; // lendo o valor na tela e atribuindo-o à n

  for (int i = 0; i < n; i++) {
    cin >> sequencia[i]; // salvando cada número em uma posição do vetor, de 0 até n - 1
  }

  for (int i = n - 1; i >= 0; i--) {
    cout << sequencia[i] << " "; // percorrendo o vetor de trás para frente, imprimindo seus elementos
  }
  cout << "\n"; // imprimindo a quebra de linha no fim do código
  return 0;
}
```

<br>
<h2>Matrizes</h2>

Basicamente, matrizes são vetores de duas dimensões. Portanto, o processo de inicializar uma matriz de _n linhas_ e _m colunas_ é bem semelhante ao dos vetores:

- `tipo_das_variaveis nome[n][m];`

Para atribuir/modificar um valor na linha _i_ e coluna _j_:

- `nome[i][j] = valor;`

É intuitivo pensar em preencher a matriz com alguma estrutura de repetição, e, nesse caso, usaremos dois laços `for` aninhados.

```cpp
#include <iostream>

using namespace std;

int main() {
    int n, m;
    int A[110][110], B[110][110]; // declarando duas matrizes 110x110
    cin >> n >> m;

    for (int i = 0; i < n; i++) { // para cada linha
        for (int j = 0; j < m; j++) { // para cada coluna
            cin >> A[i][j]; // leia um elemento e armazene-o na matriz A
        }
    }
    for (int i = 0; i < n; i++) { // para cada linha
        for (int j = 0; j < m; j++) { // para cada coluna
            cin >> B[i][j]; // leia um elemento e armazene-o na matriz B
        }
    }
    for (int i = 0; i < n; i++) { // para cada linha
        for (int j = 0; j < m; j++) { // para cada coluna
            cout << A[i][j] + B[i][j] << " "; // imprima a soma de  aij + bij
        }
        cout << "\n";
    }
    return 0;
}
```

<br>
<h1 id="cadeiadecaracteres">:green_book: Cadeia de Caracteres</h1>

<br>
<h2>Caracteres</h2>

Os caracteres que digitamos estão associados a _códigos_ da tabela <a href="https://pt.wikipedia.org/wiki/ASCII" target="_blank" style="color:#32cd32;">ASCII</a>.

Em C++, podemos armazenar um caractere em uma variável do tipo `char` _(o inteiro da tabela ASCII é armazenado)_.

É importante sempre usar _**aspas simples!**_

Para mostrar o código de um caractere, mudamos o tipo da variável de `char` para `int` com uma operação chamada _cast_:

```cpp
cout << (int)variavel_do_tipo_char << endl;
```

Verificando se a letra é maiúscula/minúscula:

```cpp
if (letra >= 'a' and letra <= 'z') { /* minúscula */ }
if (letra >= 'A' and letra <= 'Z') { /* maiúscula */ }
```

<br>
<h2>Strings</h2>

`string` é um tipo de dado assim como `int` e `double`, mas que armazena uma cadeia de caracteres. Grande parte dos operadores comuns aos outros tipos também funciona com `string`:

- `string A;` - Declarando uma string
- `A = "frase para a variável";` - Atribuindo uma frase à string
- `cin >> A;` - Lendo uma palavra
- `getline(cin, A);` - Lendo uma linha completa
- `A += "outra frase";` - Adicionando uma frase ao final de uma string
- `A.size();` - Tamanho de uma string
- `A[i] == 'j'` - Compara o caractere que está no índice _i_ com o caractere _j_

```cpp
#include <iostream>

using namespace std;

int main() {
    string nome; // inicializando a string nome

    int a = 0, i = 0, e = 0, o = 0, u = 0;

    getline(cin, nome); // lendo o nome digitado pelo usuário

    for (int j = 0; j < nome.size(); j++) { // percorrendo cada caractere de "nome"
        if (nome[j] == 'a') { // sempre aspas simples para char
            a++;
        } else if (nome[j] == 'e') {
            e++;
        } else if (nome[j] == 'i') {
            i++;
        } else if (nome[j] == 'o') {
            o++;
        } else if (nome[j] == 'u') {
            u++;
        }
    }
    cout << "a = " << a << endl;
    cout << "e = " << e << endl;
    cout << "i = " << i << endl;
    cout << "o = " << o << endl;
    cout << "u = " << u << endl;

    return 0;
}
```

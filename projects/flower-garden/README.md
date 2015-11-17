# Flower Garden

Foi implementado neste trabalho uma variação do jogo “Flower Garden”, com pequenas mudanças em relação a sua jogabilidade, a fim de torná-lo mais simples e rápido de finalizar.

Inicialmente, se consiste em 4 fundações inicialmente vazias - onde as cartas são armazenadas em ordem crescente, e com naipes iguais -; seis pilhas - contendo quatro cartas aleatórias - e finalmente, um buquê com as 28 cartas restantes.

O objetivo do jogo é colocar as cartas, uma a uma, nas fundações, e uma vez que isso acontece, não é possível retirá-la. Entretanto, simplesmente mover as cartas não é suficiente para alcançar esse objetivo. Para conseguir isso, é necessário combinar as cartas que estão no buquê e nas pilhas a fim de liberar as que estão abaixo das do topo dessa mesma. As pilhas possuem propriedades únicas: só as cartas no topo podem ser movidas, além de só poderem ser colocadas sobre uma carta de número especificamente superior (n +1), sendo o naipe irrelevante. Já o buquê, tem todas suas cartas sempre disponíveis, e uma vez movidas para outra estrutura, não podem retornar. Caso haja uma pilha vazia, é possível colocar qualquer carta nela.

## Estrategia de Implementacao

O jogo foi implementado na linguagem C++. No inicio, Java foi cogitado, por apresentar facilidades em relação à interface gráfica. Entretanto, pela pouca experiência dos membros do grupo com o mesmo, optamos pelo C++, que foi ministrado no semestre anterior na matéria de Programação de Computadores. A interface gráfica foi desenvolvida utilizando a biblioteca gráfica SDL, e cada componente do grupo utilizou a IDE que mais lhe agradava - Visual Studio e Code::Blocks. Os arquivos que eram compartilhados sempre foram os suportados pelas IDEs citadas (`main.cpp`, `Pilha.h`, `Carta.cpp`, etc), não implicando, assim, em nenhuma incompatibilidade.

A estrutura de pilha foi implementada utilizando template, visando a reusabilidade do código.

O embaralhamento é realizado no inicio do jogo, onde todas as cartas estão no vetor, primeiramente, separadas por naipe, e em seguida, em ordem crescente. Acessando todas as posições do vetor, trocamos a carta na posição atual com a referenciada por um indexador pseudo-aleatório gerado pela função rand() % 52 (considerando que o vetor vai da posição zero até a 51, a operação modular por 52 é indispensável).

A movimentação das cartas é dada pela entrada e saída nas pilhas através de seus métodos básicos (empilha e desempilha).

O buquê foi dividido em duas partes de 14 cartas para não extrapolar o tamanho da tela.

## Consideracoes Finais

O jogo, apesar de possuir regras mais simples, em relação ao FreeCell, ofereceu certas
barreiras durante sua implementação, devido à utilização de recursos como o polimorfismo
paramétrico (template) e interface gráfica. Entretanto, percebemos a importância de tal
implementação: as facilidades em se alocar diferentes tipos de dados às pilhas: possibilitará que
este mesmo código seja reutilizado em projetos futuros na matéria de Estrutura de Dados ou suas
subsequentes. A interface gráfica, por sua vez, oferece ao jogo um ambiente muito mais atraente,
convidativo e intuitivo aos usuários, essencial para tornar o jogo divertido; a biblioteca SDL
atendeu bem às nossas expectativas iniciais, porporcionando gráficos bem feitos e sendo de fácil
manuseio. No início, o método de embaralhamento era mais complexo, demandando mais
desempenho do computador - cada carta, aleatóriamente, era enviada para um dos seis vetores
existentes. Ao final, todos eram reunidos novamente, e o processo era repetido, para promover
uma melhor mistura de naipes e números. O desenvolvimento de métodos básicos da pilha
tornou o desenvolvimento do jogo mais fácil, uma vez que, após concluído, pudemos nos
concentrar em desenvolver as regras do jogo, além de abrir a possibilidade de também ser
utilizado em implementações futuras. Por fim, observamos a dificuldade de implementação que a
linguagem C++ impõe, em relação ao JAVA e ao C#.

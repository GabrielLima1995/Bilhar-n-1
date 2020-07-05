# Bilhar-n-1

<b>Bilhar N+1 - 1554</b>

Existem muitas variantes de jogos de bilhar. A UFFS (União Federal dos Fãs de Sinuca) resolveu desenvolver uma nova variante, denominada N + 1.

Essa variante consiste em, numa mesa de bilhar padrão, tacar a bola branca para acertá-la na bola mais próxima dela, dentre as N possíveis. O jogo é vencido pelo jogador que completar mais acertos após 50 jogadas.

Como a dificuldade do jogo está em descobrir qual das N bolas é a mais próxima da branca, sua tarefa é escrever um programa que ajude os juízes da partida.

<b>Entrada</b>

Existem vários casos de teste. A primeira linha contém um inteiro C que determina a quantidade de casos de teste que vem a seguir. Para cada caso de teste, a entrada começa com um inteiro N (1 ≤ N ≤ 50), que define o número de bolas disponíveis, além da branca. As próximas N + 1 linhas possuem dois inteiros, x e y, separados por um espaço em branco, indicando a posição (x, y) das bolas no plano da mesa, uma bola por linha (0 < x < 1420 mm e 0 < y < 2840 mm). A primeira linha indica a posição da bola branca. As demais linhas indicam a posição das bolas 1, 2, 3, . . . , N-1, N nesta ordem.

<b>Saída</b>
Para cada caso de teste deve ser mostrada uma linha contendo apenas o número da bola que está mais próxima da branca. A margem de erro aceitável é de 0,01 mm. Havendo empate, deve-se mostrar aquela de menor número. Sempre finalize uma linha com o caractere nova linha (\n).

<b>Exemplo de Entrada</b>

<p>3</p>
<p>1</p>
<p>30 60</p>
<p>900 1800</p>
<p>2</p>
<p>710 30</p>
<p>710 2100</p>
<p>710 1000</p>
<p>3</p>
<p>710 30</p>
<p>710 2100</p>
<p>510 1000</p>
<p>910 1000</p>

<b>Exemplo de Saída</b>

<p>1</p>
<p>2</p>
<p>2</p>

<b>A resolução desse problema se da com o propósito de compartilhar conhecimento.</b>

<b>Fonte do problema : URI - Universidade Regional Integrada</b>

<a href = https://www.urionlinejudge.com.br/judge/pt/problems/view/1554> Clique aqui para ir ao site</a>
<p><b>Gabriel Lima</b></p>
### Trabalhos de Cálculo Numérico e Programação Matemática

---

Esse repositório refere-se aos trabalhos desenvolvidos para a matéria de Cálculo Numérico e Programação Matemática, de forma a englobar métodos que proveem uma solução aproximada com seu respectivo erro, utilizados quando não há uma solução analítica ou que não se faz viável.

<details><summary><b>Trabalho 1 - método de Newton e Secantes</b></summary>
  
  Ao buscar a raiz de uma equação, por exemplo, nota-se bastante dificuldade em alguns casos, como quando não é exato (a exemplo quando a fórmula de Bhaskara pode ser aplicada). Porém, é possível apoiar-se em tais métodos para que se tenha uma aproximação;

  Quanto ao método de Newton:
  - Método iterativo - portanto, que se baseia em repetições -, e tem como fórmula: x <sub>k+1</sub> = x <sub>k</sub> - f(x<sub>k</sub>) / f'(x<sub>k</sub>), onde f(x<sub>k</sub>) refere-se a função em questão e f'(x<sub>k</sub>) sua derivada;
  - Como ponto de partida, é necessário determinar um valor inicial (por meio do método gráfico, p.e) que seja próximo a uma das raízes, para que, ao realizar as iterações, seja possível buscar o valor em questão.

  Quanto ao método das Secantes:
- Tem funcionamento similar ao do método de Newton, mas faz-se útil quando a derivada a ser calculada tem alto nível de complexidade;
- Essa vantagem baseia no fato de que, ao invés de passar apenas um valor inicial, é necessário passar dois valores;
- Fórmula do método: x <sub>k+2</sub> = x <sub>k+1</sub> - [(x <sub>k+1</sub> - x <sub>k</sub>) / f(x<sub>k+1</sub>) - f(x<sub>k</sub>)] f(x<sub>k+1</sub>).

  É importante notar que a precisão do valor deve ser mensurada para que seja possível conhecer o momento de parada dos cálculos. Esse erro é calculado pela fórmula: e = |x <sub>k+1</sub> - x <sub>k</sub>| / |x <sub>k+1</sub>|.
  
</details>

<details><summary><b>Trabalho 2 - interpolação de Lagrange</b></summary>

  Técnica que tem como objetivo, a partir de coordenadas já conhecidas, procurar uma função que possa passar por todos esses pontos. A partir disso, é possível estimar valores e realizar previsões, como buscar o valor de y para x=25 no exemplo abaixo:
  
  | x | 5 | 10 | 20 | 25 | 30 |
  | - | - | - | - | - | - |
  | y | 160 | 1160 | 8710 | ? | 27660 |
  
</details>

<details><summary><b>Trabalho 3 - algoritmo de ajustamento: regressão linear</b></summary>

</details>

<details><summary><b>Trabalho 4 - algoritmos de integração numérica: RTC e RSC</b></summary>

</details>

<details><summary><b>Trabalho 5 - resolução de equações diferenciais ordinárias</b></summary>

</details>

# DCA1202-Projeto-Tratamento-de-classes-abstratas
Projeto capaz de tratar classes abstratas para manipulação de figuras geométricas simples, realizando operações de desenho em uma matriz de pontos.

## Classes
### Classe concreta Screen
A classe Screen deverá prover suporte para desenhar pontos em uma tela virtual. Essa tela deverá ser implementada em uma matriz alocada dinamicamente conforme tamanho a ser determinado pelo usuário.

### Classe abstrata FiguraGeometrica
Classe para representar objetos primitivos genéricos, com um função virtual pura *draw(Screen &t)* que instrói o objeto a se desenhar em um objeto do tipo *Screen*.

### Classe concreta Reta
Classe derivada de *FiguraGeometrica*. Uma reta deverá ser especificada conforme a posição de dois pontos fornecidos.

### Classe concreta Retangulo
Classe derivada de *FiguraGeometrica*. Um retângulo deverá ser especificado conforme a posição do canto superior esquerdo, bem como largura e altura em pixels.

### Classe concreta Circulo
Classe derivada de FiguraGeometrica. Um círculo deverá ser especificado conforme a posição do centro, seu raio e se este deverá ser preenchido ou apenas o contorno será desenhado.


* O método *draw(Screen &t)* está implementado em todas as subclasses de *FiguraGeometrica*

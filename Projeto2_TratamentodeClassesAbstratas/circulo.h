#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"
#include "screen.h"

/**
 * @brief A classe Circulo é utilizada para representar os círculos que poderão ser desenhados na tela
 */


class Circulo: public FiguraGeometrica{
private:
    int raio, x, y, oct;
    bool preenchido;
public:

    /**
     * @brief Construtor Circulo
     * @details Um círculo é especificado conforme a posição do centro,
     * seu raio e se este deverá ser preenchido ou apenas o contorno será desenhado
     * @param _x é a posição x do centro do circulo
     * @param _y é a posição y do centro do circulo
     * @param _r é o raio do circulo
     * @param _preenchido determina se o circulo será preenchido ou não
     */
    Circulo(int _x, int _y, int _r, bool _preenchido);
    /**
     * @brief Método para desenhar o circulo
     * @details Para o desenho do círculo, é verificado se cada coordenada atende à equação do círculo.
     * O algoritmo de Bresenham é utilizado para o desenho do círculo não preenchido.
     */
    void draw(Screen &t);
    /**
     * @brief Método para determinar os pontos da circunferência
     * @details Determina os demais pontos da circunferência, a partir dos pontos do primeiro octante.
     */
    void pontosDaCircunferencia(int x1, int y1, Screen &t);

};

#endif // CIRCULO_H

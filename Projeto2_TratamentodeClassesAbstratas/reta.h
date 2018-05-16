#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"
#include "screen.h"

/**
 * @brief A classe Reta é utilizada para representar as retas que poderão ser desenhadas na tela
 */

class Reta: public FiguraGeometrica{

private:
    int xi,yi,xf,yf;
public:
    /**
     * @brief Reta::Reta
     * @details Uma reta é especificada conforme a posição de dois pontos fornecidos.
     * @param _xi coordenada x do ponto inicial da reta
     * @param _yi coordenada y do ponto inicial da reta
     * @param _xf coordenada x do ponto final da reta
     * @param _yf coordenada y do ponto final da reta
     */
    Reta(int _xi=0, int _yi=0, int _xf=0, int _yf=0);
    /**
     * @brief Método para desenhar a reta
     * @details O algoritmo de Bresenham é utilizado para aproximar o desenho da reta real.
     */
    void draw(Screen &t);


};
#endif // RETA_H

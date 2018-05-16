#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"
#include "screen.h"

/**
 * @brief A classe Retangulo é utilizada para representar os retângulos que poderão ser desenhados na tela
 */


class Retangulo:public FiguraGeometrica
{
private:
    int x, y,l, a;
    bool preenchido;
public:
    /**
     * @brief Construtor Retangulo
     * @details Um retângulo é especificado conforme a posição do canto superior esquerdo,
     * bem como largura e altura em pixels.
     * @param _x é a coordenada x da posição superior esquerda do retângulo
     * @param _y é a coordenada y da posição superior esquerda do retângulo
     * @param _l é a largura do retângulo
     * @param _a é a altura do retãngulo
     * @param _preenchido é o parâmetro para determinar se o retângulo será preenchido ou não
     */
    Retangulo(int _x=0, int _y=0, int _l=0, int _a=0, bool _preenchido=false);
    /**
     * @brief Método para desenhar o retângulo
     * @details Caso o retângulo seja preenchido, o algoritmo varre todas as coordenadas desenhando os pixels,
     * caso contrário, são desenhadas as retas que formam o contorno.
     */
    void draw(Screen &t);
};

#endif // RETANGULO_H

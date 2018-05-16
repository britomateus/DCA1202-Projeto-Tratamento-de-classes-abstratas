#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "screen.h"

/**
 * @brief A classe FiguraGeometrica é utilizada para representar as figuras que serão desenhadas
 */

class FiguraGeometrica {

public:
    FiguraGeometrica();
    /**
     * @brief Método draw que cria uma tela do tipo Screen para permitir o desenho das figuras
     * @param t é o parâmetro utilizado para receber a tela virtual.
     */
    virtual void draw (Screen &t)=0;
    //função virtual para ser implementada nas classes derivadas
};

#endif // FIGURAGEOMETRICA_H

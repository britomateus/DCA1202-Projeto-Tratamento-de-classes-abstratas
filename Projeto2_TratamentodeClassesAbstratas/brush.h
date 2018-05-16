#ifndef BRUSH_H
#define BRUSH_H
#include "figurageometrica.h"
#include "screen.h"

/**
 * @brief A classe Brush é responsável por caracterizar o brush que será utilizado para o desenho
 */

class Brush : public FiguraGeometrica{
private:
    char br;
public:
    /**
     * @brief Construtor Brush
     */
    Brush(char _br = ' ');
    /**
     * @brief Método para desenhar figuras com o brush escolhido pelo usuário
     */
    void draw(Screen &t);
};

#endif // BRUSH_H

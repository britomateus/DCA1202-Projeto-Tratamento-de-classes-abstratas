#ifndef SCREEN_H
#define SCREEN_H
#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief A classe Screen é utilizada para representar a tela de desenho
 */

class Screen {
private:

    int nlin, ncol; // numeros de linhas e colunas para dimensionar a tela

    char brush = '0'; //caracter para desenhar a matriz na tela
    vector< vector<char>> mat; // para armazenar a matriz na tela


public:

    /**
     * @brief Construtor Screen
     * @details Tela virtual para desenhar pontos. Essa tela é uma matriz alocada dinamicamente
     * conforme tamanho a ser determinado pelo usuário.
     * @param nl é o número de linhas ou altura da tela
     * @param nc é o número de colunas ou largura da tela
     */
    Screen(int nl=10, int nc=10);
    /**
     * @brief Método para desenhar o pixel na tela
     * @param x é a coordenada x da posição do pixel que vai ser desenhado
     * @param y é a coordenada y da posição do pixel que vai ser desenhado
     */
    void setPixel (int x, int y);
    /**
     * @brief Método para limpar a tela
     * @details Substitui os pixels desenhados pelo caractere de espaço
     */
    void clear(); //limpar a tela
    /**
     * @brief Método para definir qual o brush será utilizado no desenho dos pixels
     */
    void setBrush (char _brush); //brush variavel privada
    /**
     * @brief Sobrecarga do operador <<
     * @details Função amiga da classe Screen, permite que a tela de desenho seja exibida no terminal ou em um
     * arquivo de texto.
     * @param os é o fluxo de entrada
     * @param t é o parâmetro que recebe a tela
     */
    friend ostream& operator <<(ostream &os, Screen &t);
};

#endif // SCREEN_H

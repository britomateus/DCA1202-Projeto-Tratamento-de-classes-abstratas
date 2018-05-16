#include "reta.h"
#include "screen.h"
#include <iostream>
#include<cmath>

using namespace std;


Reta::Reta(int _xi, int _yi, int _xf, int _yf){
    xi = _xi; //alocando nas variáveis privadas
    yi = _yi;
    xf = _xf;
    yf = _yf;

}
void Reta::draw(Screen &t){

float Tamanho;
    float Delta_x;
    float Delta_y;
    float x = xi;
    float y = yi;


    if( abs(xf-xi) > abs(yf-yi)){
        Tamanho = abs(xf-xi);
    }
    else {
        Tamanho = abs(yf-yi);
    }

    Delta_x = (xf-xi)/Tamanho;
    Delta_y = (yf-yi)/Tamanho;
    int i = 1;
    while(i < Tamanho){

        t.setPixel(round(x), round(y));
        x = x + Delta_x;
        y = y + Delta_y;
        i++;
    }

}

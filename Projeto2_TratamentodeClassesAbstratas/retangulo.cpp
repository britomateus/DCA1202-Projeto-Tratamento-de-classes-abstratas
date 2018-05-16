#include "retangulo.h"
#include "screen.h"
#include "reta.h"
#include<iostream>
using namespace std;

Retangulo::Retangulo(int _x, int _y, int _l, int _a, bool _preenchido){

    x = _x; //coordenadas do ponto inicial
    y = _y;
    l = _l;
    a = _a;
    preenchido = _preenchido;

}

void Retangulo::draw(Screen &t){

    if(preenchido){
        for(int i=x; i<(x+l);i++){
            for(int j=y;j<(y+a);j++){
                t.setPixel(i,j);
            }
        }
    } else {
        Reta contorno1(x,y,(x+l),y);
        contorno1.draw(t);
        Reta contorno2((x+l),y,(x+l),(y+a));
        contorno2.draw(t);
        Reta contorno3(x,(y+a),(x+l),(y+a));
        contorno3.draw(t);
        Reta contorno4(x,y,x,(y+a));
        contorno4.draw(t);
        t.setPixel((x+l),(y+a));
    }
}

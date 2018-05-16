#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

#include "screen.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"
#include "figurageometrica.h"
#include "brush.h"

using namespace std;

int main() {


    ifstream in;
    ofstream out;
    string code;
    Screen scr;
    char br;
    int x,x0,y,y0,largura,altura,raio;
    bool mode;

    vector <FiguraGeometrica*> figuras;
    vector <FiguraGeometrica*>::iterator it;

    in.open("C:/Users/mateu/Documents/Projeto2_TratamentodeClassesAbstratas/teste.txt");

    if(in.is_open()){
            cout << "Arquivo aberto!\n";
        }
        else{
            cout << "Erro na abertura do arquivo\n";
        }

        while(in.good()){

            getline(in, code);
            stringstream interpr(code);
            interpr >> code;

            if(code == "dim"){
                interpr >> largura >> altura;
                scr = Screen(largura,altura);
            }
            else if(code == "brush"){
                interpr >> br;
                if(interpr.good())
                    figuras.push_back(new Brush(br));
                else
                    figuras.push_back(new Brush(' '));
            }
            else if(code == "line"){
                interpr >> x0 >> y0 >> x >> y;
                figuras.push_back(new Reta(x0,y0,x,y));
            }
            else if(code == "rectangle"){
                interpr >> x >> y >> largura >> altura >> mode;
                figuras.push_back(new Retangulo(x,y,largura,altura,mode));
            }
            else if(code == "circle"){
                interpr >> x0 >> y0 >> raio >> mode;
                figuras.push_back(new Circulo(x0,y0,raio,mode));
            }
        }

        for(it=figuras.begin(); it!=figuras.end(); it++){
            (*it)->draw(scr);
        }
        cout << scr;
        in.close();


        out.open("C:/Users/mateu/Documents/Projeto2_TratamentodeClassesAbstratas/out.txt");


        out << scr;
        out.close();

    return 0;
}

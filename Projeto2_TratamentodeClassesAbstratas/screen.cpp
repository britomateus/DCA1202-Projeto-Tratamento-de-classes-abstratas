#include "screen.h"
#include<vector>
#include<iostream>


using namespace std;


Screen::Screen(int nl, int nc){

    nlin = nl;
    ncol = nc;
    mat = vector<vector<char>>(nlin, vector<char>(ncol,' ')); //preenchimento de vetor com espacos

}

void Screen::setPixel(int x, int y)
{
    if((x<nlin) & (y<ncol) && (x>=0) & (y>=0)){
        mat[x][y] = brush;
    }
}

void Screen::clear()
{
    for(int i=0; i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            mat[i][j] = ' ';
        }
    }
}

void Screen::setBrush(char _brush)
{
    brush = _brush;
}

ostream& operator<<(ostream &os, Screen &t)
{
    for(int i=0; i<t.nlin; i++){
        for(int j=0; j<t.ncol; j++){
            os << t.mat[i][j];
        }
        os <<endl;
    }
    return(os);
}



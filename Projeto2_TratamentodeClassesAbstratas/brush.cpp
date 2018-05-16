#include<iostream>
#include "brush.h"
#include "screen.h"

using namespace std;

Brush::Brush(char _br){
    br = _br;
}

void Brush::draw(Screen &t){
    t.setBrush(br);
}

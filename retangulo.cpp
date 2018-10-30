#include "retangulo.h"

Retangulo::Retangulo(int _x, int _y, int _h, int _l){
    x= _x;
    y= _y;
    h= _h;
    l= _l;
}

void Retangulo::draw(Screen &t){
    for(int i=x; i<(x+l);i++){
           for(int j=y;j<(y+h);j++){
               t.setPixel(i,j);
           }
    }
}

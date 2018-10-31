#include "retangulo.h"
#include "reta.h"

Retangulo::Retangulo(int _x, int _y, int _l, int _h, int _fillmode, char _brush){
    x= _x;
    y= _y;
    l= _l;
    h= _h;
    fillmode=_fillmode;
    brush=_brush;
}

void Retangulo::draw(Screen &t){
    t.setBrush(brush);

    if(fillmode>0){
        for(int i=x; i<(x+l);i++){
            for(int j=y;j<(y+h);j++){
                t.setPixel(i,j);
            }
        }
    }
    else{
        for(int i=x; i<(x+l);i++){
            for(int j=y;j<(y+h);j++){
                if(((i == x || i==x+l-1) || (j ==y || j==y+h-1))){
                t.setPixel(i,j);
                }
            }
        }
    }
}

#include "reta.h"
#include <cmath>
#include <iostream>
#include "screen.h"

Reta::Reta(int _pxi, int _pyi,int _pxf,int _pyf)
{
  pxi= _pxi;
  pyi= _pyi;
  pxf= _pxf;
  pyf= _pyf;
}

void Reta::draw(Screen &t){
    float dx= pxf - pxi;
    float dy= pyf - pyi;
    float tamanho;
    float x=pxi;
    float y= pyi;

    if( abs(pxf - pxi) > abs(pyf - pyi)){
        tamanho = abs(pxf - pxi);
    }else{
        tamanho = abs(pyf - pyi);
    }

    dx= dx/tamanho;
    dy= dy/tamanho;

    int i=1;

    while(i < tamanho){
        t.setPixel(round(x), round(y));
        x = x + dx;
        y = y + dy;
        i = i + 1;
    }
}

#include "reta.h"
#include "screen.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

Reta::Reta(int _pxi, int _pyi, int _pxf, int _pyf, char _brush)
{
    pxi = _pxi;
    pyi = _pyi;
    pxf = _pxf;
    pyf = _pyf;
    brush = _brush;
}

void Reta::draw(Screen &t)
{
    //Altera o caracter de desenho
    t.setBrush(brush);
    int x = pxi;
    int y = pyi;
    int Troca;
    int Delta_x = abs(pxf - pxi);
    int Delta_y = abs(pyf - pyi);
    int s1 = Sinal(pxf - pxi);
    int s2 = Sinal(pyf - pyi);

    if(Delta_y > Delta_x){
        int Temp = Delta_x;
        Delta_x = Delta_y;
        Delta_y = Temp;
        Troca = 1;
    } else{
        Troca = 0;
    }

    int new_e = 2*Delta_y - Delta_x;
    for(int i = 1; i <= Delta_x; i++){
        t.setPixel(x,y);
        while (new_e >= 0){
            if(Troca == 1){
                //Muda para a proxima linha de rasterização
                x = x + s1;
            } else{
                y = y + s2;
            }
            new_e = new_e - 2*Delta_x;
        }

        //Permanece nesta linha de rasterização
        if(Troca == 1){
            y = y + s2;
        } else{
            x = x + s1;
        }
        new_e = new_e + 2*Delta_y;
    }
}

int Reta::Sinal(int x)
{
    if(x < 0){ return -1; }
    if(x == 0){ return 0; }
    return 1;
}

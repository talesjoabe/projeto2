#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "screen.h"

class FiguraGeometrica
{
public:
    FiguraGeometrica();
    /**
     * @brief draw é um método do tipo virtual; e, se todos os métodos
     * da classe forem virtual, então pode-se dizer que a classe é
     * abstrata pura.
     * @param t
     */
    virtual void draw(Screen &t) =0;
};

#endif // FIGURAGEOMETRICA_H

#ifndef CIRCULO_H
#define CIRCULO_H
#include <iostream>
#include "figurageometrica.h"

class Circulo: public FiguraGeometrica
{
private:
    float x0, y0, raio, fillmode;
    char brush;
public:
    /**
     * @brief circulo é um contrutor para Circulo em que têm-se como parâmeto, o ponto no centro do circulo, raio, a opção de
     *  preencher ou não o circulo e brush.
     * @param _x0, x do ponto que centraliza o circulo
     * @param _y0, y do ponto que centraliza o circulo
     * @param _raio é o raio do circulo
     * @param _fillmode é a variavel que define se será ou não preenchido o circulo
     * @param brush é o pincel
     */
    Circulo(int _x0=0, int _y0=0, int _raio=1, int _fillmode=1, char _brush='*');

    /**
     * @brief draw é a função advinda da Classe FiguraGeometrica e é implementada no intuito de desenhar sobre a tela um círculo
     * , neste caso.
     * @param t
     */
    void draw(Screen &t);
};

#endif // CIRCULO_H

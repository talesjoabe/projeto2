#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"

class Retangulo : public FiguraGeometrica
{
private:
    int x,y, h, l;
public:
    /**
     * @brief Construtor do retângulo, onde recebe
     * as coordenadas do ponto superior esquerdo e inicializa
     * as variaveis privadas com os valores armazenados
     * @param _x é a coordenada x do ponto superior esquerdo
     * @param _y é a coordenada y do ponto superior esquerdo
     * @param _h é a altura do retangulo
     * @param _l é a largura do retangulo
     */
    Retangulo(int _x=0, int _y=0, int _h=0, int _l=0);
    void draw(Screen &t);
};

#endif // RETANGULO_H

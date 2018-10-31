#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"

class Reta : public FiguraGeometrica
{
   int pxi, pyi, pxf, pyf;
   char brush;
public:
   /**
     * @brief Reta é um construtor - onde inicializa o ponto inicial
     * e o final da reta.
     * @param _pxi é a coordenada x do ponto inicial
     * @param _pyi é a coordenada y do ponto inicial
     * @param _pxf é a coordenada x do ponto final
     * @param _pyf é a coordenada y do ponto final
     */
    Reta(int _pxi, int _pyi,int _pxf,int _pyf, char _brush);
    /**
     * @brief draw é uma função que aproxima uma reta por meio
     * do algoritmo de Bresenham.
     * @param t é uma variável do tipo Screen que recebe
     * o desenho da reta.
     */
    void draw(Screen &t);

    /**
     * @brief Sinal é uma função auxiliar para alternar entre linhas de rasterização
     * @param x é o parâmetro utilizado para determinar se o retorno da função será entre -1, 0 e 1
     * @return
     */
    int Sinal(int x);
};

#endif // RETA_H

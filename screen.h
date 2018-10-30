#ifndef SCREEN_H
#define SCREEN_H

#include <vector>
#include <ostream>

using namespace std;

class Screen{
private:
  // armazenam o tamanho da tela de desenho
  // no de linhas e de colunas
  int nlin, ncol;

  // guarda o caractere usado para desenhar
  char brush;

  // armazena a matriz da tela
  vector< vector<char> > mat;
public:
  /**
   * @brief Screen é o construtor da classe - onde inicializa
   * o número de linhas e de colunas da tela
   * @param _nlin é o número de linhas
   * @param _ncol é o número de colunas
   */
  Screen(int _nlin, int _ncol);

  // desenha um pixel da matriz usando o caratere
  // guardado em 'brush'
  /**
   * @brief setPixel desenha um pixel da matriz usando o
   * caractere guardado em brush
   * @param x
   * @param y
   */
  void setPixel(int x, int y);

  /**
   * @brief clear é um método da classe Screen que serve
   * para limpar a tela.
   */
  void clear();

  /**
   * @brief setBrush é um método da classe o qual muda o caractere
   * a ser impresso na tela
   * @param _brush inicializa o novo caractere
   */
  void setBrush(char _brush);

  /**
   * @brief operator <<
   * @param os
   * @param t
   * @return
   */
  friend ostream& operator<<(ostream &os, Screen &t);
};

#endif // SCREEN_H

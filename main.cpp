#include <iostream>
#include <fstream>
#include "figurageometrica.h"
#include "screen.h"
#include "retangulo.h"
#include "reta.h"
#include "circulo.h"
#include <string>
#include <sstream>
#include <list>

using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    Screen t(50,50);
    string s;
    fin.open("/home/mneto/Documentos/Facul/Programação Avançada/Unidade II/projeto2/instrucoes.txt");
    if(!fin.is_open()){
        cout << "nao abriu arquivo\n";
    }
    fout.open("/home/mneto/Documentos/Facul/Programação Avançada/Unidade II/projeto2/figura.txt");
    list <FiguraGeometrica*>::iterator fg;
    list <FiguraGeometrica*> figuras;
    while(fin.good()){
        getline(fin, s);
        if(fin.good()){
            string cmd;
            stringstream sstream(s);
            sstream >> cmd;
            if(cmd.compare("dim")==0){
                int x, y;
                sstream >> x >> y;
                t.setScreen(x,y);
            }
            if(cmd.compare("Reta")==0){
                int pxi, pyi, pxf,pyf;
                char brush;
                sstream >> pxi >>pyi >> pxf >> pyf >> brush;
                figuras.push_back(new Reta(pxi,pyi,pxf,pyf,brush));
            }
            if(cmd.compare("Retangulo")==0){
                int x,y,h,l;
                int fillmode;
                char brush;
                sstream >> x >> y >> l >> h >>fillmode >> brush;
                figuras.push_back(new Retangulo(x,y,l,h,fillmode,brush));
            }
            if(cmd.compare("Circulo")==0){
                int x0, y0, raio;
                int fillmode;
                char brush;
                sstream >> x0 >>y0 >> raio >> fillmode >> brush;
                figuras.push_back(new Circulo(x0,y0,raio,fillmode,brush));
            }
        }
    }
    for(fg = figuras.begin(); fg!=figuras.end(); fg++){
        (*fg)->draw(t);
      }
    fout <<t;
    return 0;
}

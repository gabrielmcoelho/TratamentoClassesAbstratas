#ifndef RETA_H
#define RETA_H
#include <figurageometrica.h>
#include <ponto.h>


class Reta:public FiguraGeometrica
{
private:
    Ponto p0, p1;
public:
    Reta(int x0, int x1, int y0, int y1);
    void draw(Screen &t);
    void operator()(int x0, int x1, int y0, int y1);
};

#endif // RETA_H

#include "ponto.h"
#include <iostream>
#include <cmath>

using namespace std;

Ponto::Ponto()
{

}

ostream& operator<<(ostream &os, Ponto &p)
{
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}

int Ponto::getX(void)
{
    return x;
}

void Ponto::setX(int x1)
{
    x=x1;
}

int Ponto::getY(void)
{
    return y;
}

void Ponto::setY(int y1)
{
    y=y1;
}

void Ponto::setXY(int x1, int y1)
{
    x=x1;
    y=y1;
}

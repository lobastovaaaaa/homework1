#ifndef __tetrah__
#define __tetrah__
// tetrah.h - содержит описание тетраэдра

#include <fstream>
using namespace std;

# include "rnd.h"

// тетраэдр
struct tetrah {
    int edge; // сторона
};

// Ввод параметров тетраэдра из файла
void In(tetrah &t, ifstream &ifst);

// Случайный ввод параметров тетраэдра
void InRnd(tetrah &е);

// Вывод параметров тетраэдра в форматируемый поток
void Out(tetrah &t, ofstream &ofst);

// Вычисление площади поверхности тетраэдра
double SurfaceArea(tetrah &t);

#endif //__tetrah__

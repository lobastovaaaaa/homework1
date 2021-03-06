#ifndef __sphere__
#define __sphere__

// sphere.h - содержит описание сферы

#include <fstream>
using namespace std;

# include "rnd.h"

// сфера
struct sphere {
    int radius; // радиус
};

// Ввод параметров сферы из файла
void In(sphere &s, ifstream &ifst);

// Случайный ввод параметров сферы
void InRnd(sphere &s);

// Вывод параметров сферы в форматируемый поток
void Out(sphere &s, ofstream &ofst);

// Вычисление площади поверхности сферы
double SurfaceArea(sphere &s);

#endif //__sphere__

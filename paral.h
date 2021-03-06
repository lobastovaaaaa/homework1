#ifndef __paral__
#define __paral__

// paral.h - содержит описание параллелепипеда

#include <fstream>
using namespace std;

# include "rnd.h"

// параллелепипед
struct paral {
    int length, width, heigth; // длина, ширина, высота
};

// Ввод параметров параллелепипеда из файла
void In(paral &p, ifstream &ifst);

// Случайный ввод параметров параллелепипеда
void InRnd(paral &p);

// Вывод параметров параллелепипеда в форматируемый поток
void Out(paral &p, ofstream &ofst);

// Вычисление площади поверхности параллелепипеда
double SurfaceArea(paral &p);

#endif //__paral__

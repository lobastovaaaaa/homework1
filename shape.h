#ifndef __shape__
#define __shape__

// shape.h - содержит описание геометрической фигуры

#include "paral.h"
#include "sphere.h"
#include "tetrah.h"

// структура, обобщающая все имеющиеся фигуры
struct shape {
    // значения ключей для каждой из фигур
    enum key {SPHERE, TETRAH, PARAL};
    key k; // ключ
    // используемые альтернативы
    union { // используем простейшую реализацию
        sphere s;
        tetrah t;
        paral p;
    };
};

// Ввод обобщенной фигуры
shape *In(ifstream &ifdt);

// Случайный ввод обобщенной фигуры
shape *InRnd();

// Вывод обобщенной фигуры
void Out(shape &sp, ofstream &ofst);

// Вычисление площади поверхности обобщенной фигуры
double SurfaceArea(shape &sp);

#endif

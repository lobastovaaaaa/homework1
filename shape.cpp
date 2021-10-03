// shape.cpp - содержит процедуры связанные с обработкой обобщенной фигуры
// и создания произвольной фигуры

#include "shape.h"

// Ввод параметров обобщенной фигуры из файла
shape* In(ifstream &ifst) {
    shape *sp;
    int k;
    ifst >> k;
    switch(k) {
        case 1:
            sp = new shape;
            sp->k = shape::SPHERE;
            In(sp->s, ifst);
            return sp;
        case 2:
            sp = new shape;
            sp->k = shape::TETRAH;
            In(sp->t, ifst);
            return sp;
        case 3:
            sp = new shape;
            sp->k = shape::PARAL;
            In(sp->p, ifst);
            return sp;
        default:
            return 0;
    }
}

// Случайный ввод обобщенной фигуры
shape *InRnd() {
    shape *sp;
    auto k = rand() % 3 + 1;
    switch(k) {
        case 1:
            sp = new shape;
            sp->k = shape::SPHERE;
            InRnd(sp->s);
            return sp;
        case 2:
            sp = new shape;
            sp->k = shape::TETRAH;
            InRnd(sp->t);
            return sp;
        case 3:
            sp = new shape;
            sp->k = shape::PARAL;
            InRnd(sp->p);
            return sp;
        default:
            return 0;
    }
}

// Вывод параметров текущей фигуры в поток
void Out(shape &sp, ofstream &ofst) {
    switch(sp.k) {
        case shape::SPHERE:
            Out(sp.s, ofst);
            break;
        case shape::TETRAH:
            Out(sp.t, ofst);
            break;
        case shape::PARAL:
            Out(sp.p, ofst);
            break;
        default:
            ofst << "Incorrect figure!" << endl;
            break;
    }
}

// Вычисление площади поверхности фигуры
double SurfaceArea(shape &sp) {
    switch(sp.k) {
        case shape::SPHERE:
            return SurfaceArea(sp.s);
            break;
        case shape::TETRAH:
            return SurfaceArea(sp.t);
            break;
        case shape::PARAL:
            return SurfaceArea(sp.p);
            break;
        default:
            return 0.0;
    }
}

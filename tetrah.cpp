// tetrah.cpp - содержит функции обработки тетраэдра

#include "tetrah.h"

void In(tetrah &t, ifstream &ifst) {
    ifst >> t.edge;
}

// Случайный ввод параметров тетраэдра
void InRnd(tetrah &t) {
    t.edge = Random();
}

// Вывод параметров тетраэдра в поток
void Out(tetrah &t, ofstream &ofst) {
    ofst << "It is Tetrahedron: edge = " << t.edge << ". SurfaceArea = "
    		<< SurfaceArea(t) << "\n";
}

// Вычисление площади поверхности тетраэдра
double SurfaceArea(tetrah &t){
    return double(t.edge * t.edge * 1.732);
}

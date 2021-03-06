// sphere.cpp - содержит функции обработки тетраэдра

#include "sphere.h"

// Ввод параметров тетраэдра из потока
void In(sphere &s, ifstream &ifst) {
    ifst >> s.radius;
}

// Случайный ввод параметров тетраэдра
void InRnd(sphere &s) {
	s.radius = Random();
}

// Вывод параметров тетраэдра в поток
void Out(sphere &s, ofstream &ofst) {
    ofst << "It is Sphere: radius = "
         << s.radius << ". SurfaceArea = " << SurfaceArea(s) << "\n";
}

// Вычисление площади поверхности тетраэдра
double SurfaceArea(sphere &s){
    return double(4 * 3.14159 * s.radius * s.radius);
}

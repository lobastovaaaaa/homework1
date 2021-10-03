// paral.h - содержит описание прямоугольного параллелепипеда

#include "paral.h"

// Ввод параметров параллелепипеда из файла
void In(paral &p, ifstream &ifst) {
    ifst >> p.length >> p.width >> p.heigth;
}

// Случайный ввод параметров параллелепипеда
void InRnd(paral &p) {
    p.length = Random();
    p.width = Random();
    p.heigth = Random();
}

// Вывод параметров параллелепипеда в форматируемый поток
void Out(paral &p, ofstream &ofst) {
    ofst << "It is Parallelepiped: length = " << p.length << ", width  = " <<
    		p.width << ", heigth  = " << p.heigth
    		<< ". SurfaceArea = " << SurfaceArea(p) << "\n";
}

// Вычисление площади поверхности параллелепипеда
double SurfaceArea(paral &p){
    return double(p.length * p.width * p.heigth);
}


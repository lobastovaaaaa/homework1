#ifndef __container__
#define __container__

// container.h - содержит тип данных, представляющий простейший контейнер

#include "shape.h"

// Простейший контейнер на основе одномерного массива
struct container {
    int len; // текущая длина
    shape *cont[10000];
};

// Инициализация контейнера
void Init(container &c);

// Очистка контейнера от элементов (освобождение памяти)
void Clear(container &c);

// Ввод содержимого контейнера из указанного потока
void In(container &c, ifstream &ifst);

// Случайный ввод содержимого контейнера
void InRnd(container &c, int size);

// Вывод содержимого контейнера в указанный поток
void Out(container &c, ofstream &ofst);

// Вычисление суммы площадей поверхностей всех фигур в контейнере
double SurfaceAreaSum(container &c);

// Сортировка пузырьком
void BubbleSort(container &c);

#endif

// container_Constr.cpp - содержит функции обработки контейнера

#include "container.h"

// Инициализация контейнера
void Init(container &c) {
    c.len = 0;
}

// Очистка контейнера от элементов (освобождение памяти)
void Clear(container &c) {
    for(int i = 0; i < c.len; i++) {
        delete c.cont[i];
    }
    c.len = 0;
}

// Ввод содержимого контейнера из указанного потока
void In(container &c, ifstream &ifst) {
    while(!ifst.eof()) {
        if((c.cont[c.len] = In(ifst)) != 0) {
            c.len++;
        }
    }
}

// Случайный ввод содержимого контейнера
void InRnd(container &c, int size) {
    while(c.len < size) {
        if((c.cont[c.len] = InRnd()) != NULL) {
            c.len++;
        }
    }
}

// Вывод содержимого контейнера в указанный поток
void Out(container &c, ofstream &ofst) {
    ofst << "Container contains " << c.len << " elements." << endl;
    for(int i = 0; i < c.len; i++) {
        ofst << i << ": ";
        Out(*(c.cont[i]), ofst);
    }
}

// Вычисление суммы площадей поверхностей всех фигур в контейнере
double SurfaceAreaSum(container &c) {
    double sum = 0.0;
    for(int i = 0; i < c.len; i++) {
        sum += SurfaceArea(*(c.cont[i]));
    }
    return sum;
}

// Сортировка контейнера пузырьком относительно площади поверхности фигур
void BubbleSort(container &c) {
	shape tmp;
    for (int i = 0; i < c.len; ++i) {
    	for (int j = i; j < c.len; ++j) {
    		if (c.cont[i] < c.cont[j]) {
                c.cont[j], c.cont[i] = c.cont[i], c.cont[j];
    		}
    	}
    }
}

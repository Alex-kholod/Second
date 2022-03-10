#ifndef GENERAL_H
#define GENERAL_H

#include <iostream>
#include <ctime>
using namespace std;

void print(int*, unsigned);
void reverse(int* a, unsigned size);
void sort_increase(int* a, unsigned size);
void sort_decrease(int* a, unsigned size);
void (*func2(int* f))(int* a, unsigned size);

#endif

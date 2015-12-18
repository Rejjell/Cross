#ifndef VECTOR_H
#define VECTOR_H
#include "matrix.h"

class Vector
{
public:
    Vector(int _length);
    ~Vector();
    int getLength();
    int& operator[](const int index);
    Vector multiply(Matrix mat);
public:
    int* data;
    int length;
};

#endif // VECTOR_H

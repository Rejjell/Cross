#include "vector.h"

Vector::Vector(int _length)
{
    this->length = _length;
    this->data = new int[this->length];
    for (int i=0; i<_length;i++)
        this->data[i] = 0;
}

Vector::~Vector() {
    delete[] this->data;
}

int Vector::getLength() {
    return this->length;
}

int& Vector::operator[](int index){
    return (this->data[index]);
}

Vector Vector::multiply(Matrix mat){
    int length = this->getLength();
    Vector result(length);
    for (int j = 0; j < length; j++) {
        result[j] = 0;
        for (int i = 0; i < mat.getRows(); i++)
            result[j] += this->data[i] * mat[i][j];
    }
    return result;
}

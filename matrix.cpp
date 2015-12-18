#include "matrix.h"

Matrix::Matrix(int _rows, int _cols) {
    this->rows = _rows;
    this->cols = _cols;
    this->data = new int*[_rows];
    for (int i = 0; i<_rows;i++) {
        this->data[i] = new int[_cols];
        for (int j = 0; j < _cols; j++)
            this->data[i][j] = 0;
    }
}

Matrix::~Matrix() {
    for (int i = 0; i<this->rows;i++)
        delete[] this->data[i];
    delete [] this->data;
}

int Matrix::getRows(){
    return this->rows;
}

int Matrix::getCols(){
    return this->cols;
}

int*& Matrix::operator[](const int index){
    return this->data[index];
}

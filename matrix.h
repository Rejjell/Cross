#ifndef MATRIX_H
#define MATRIX_H


class Matrix
{
public:
    Matrix(int rows, int cols);
    ~Matrix();
    int getRows();
    int getCols();
    int*& operator[](const int index);
private:
    int** data;
    int rows, cols;
};

#endif // MATRIX_H

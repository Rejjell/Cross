#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "vector.h"
#include "iostream"
#include "matrix.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Vector vec(3);
    vec[0] = 2;
    vec[1] = 10;
    vec[2] = 1;
    for (int i = 0; i < vec.getLength(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout<< std::endl;
    Matrix mat(3,3);

    mat[0][0] = 1;
    mat[1][1] = 1;
    mat[2][2] = 1;
    mat[2][0] = 3;

    for (int i = 0; i < mat.getRows(); i++) {
        for (int j = 0; j < mat.getCols(); j++) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }

    Vector res = vec.multiply(mat);
    for (int i = 0; i < res.getLength(); i++) {
        std::cout << res[i] << " ";
    }
   std::cout<< std::endl;
}

MainWindow::~MainWindow()
{
    delete ui;
}

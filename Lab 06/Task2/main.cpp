#include "Matrix3D"
#include "Matrix3D.cpp"

#include <iostream>

using namespace std;

int main(){
    double val[3][3]=
        {
            {1, 3, -2},
            {2, 5, -3},
            {-3, 2, -4}
        };
    Matrix3D a(val);
    a.getMatrix();

    cout<<"Det: "<<a.det()<<endl;

    Matrix3D inverse=a.inverse();
    inverse.getMatrix();

    double another [3][3]=
        {
            {14, -8, -1},
            {-17, 10, 1},
            {-19, 11, 1}
        };
    Matrix3D b(another);

    Matrix3D c=a*b;
    c.getMatrix();
}
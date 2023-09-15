#include "Matrix3D"

#include <iostream>

Matrix3D::Matrix3D(double mtrx[3][3]){
    for(int i=0; i<9;i++){
        matrix[i/3][i%3]=mtrx[i/3][i%3];
    }
}
Matrix3D::~ Matrix3D(){

}
void Matrix3D::swap(double& a, double& b){
    double tmp;
    tmp=a;
    a=b;
    b=tmp;
}

// fn
double Matrix3D::det() const{
    double dtr;

    dtr=matrix[0][0]*matrix[1][1]*matrix[2][2];
    dtr+=matrix[0][1]*matrix[1][2]*matrix[2][0];
    dtr+=matrix[0][2]*matrix[1][0]*matrix[2][1];
    dtr-=matrix[2][0]*matrix[1][1]*matrix[0][2];
    dtr-=matrix[2][1]*matrix[1][2]*matrix[0][0];
    dtr-=matrix[2][2]*matrix[1][0]*matrix[0][1];
    
    return dtr;
}

const Matrix3D Matrix3D::inverse() {
    double dtr=det();

    double invrs[3][3];

    //adjoint
    invrs[0][0]=matrix[1][1]*matrix[2][2]-matrix[2][1]*matrix[1][2];
    invrs[0][1]=-1*(matrix[1][0]*matrix[2][2]-matrix[2][0]*matrix[1][2]);
    invrs[0][2]=matrix[1][0]*matrix[2][1]-matrix[2][0]*matrix[1][1];

    invrs[1][0]=-1*(matrix[0][1]*matrix[2][2]-matrix[2][1]*matrix[0][2]);
    invrs[1][1]=matrix[0][0]*matrix[2][2]-matrix[2][0]*matrix[0][2];
    invrs[1][2]=-1*(matrix[0][0]*matrix[2][1]-matrix[2][0]*matrix[0][1]);

    invrs[2][0]=matrix[0][1]*matrix[1][2]-matrix[1][1]*matrix[0][2];
    invrs[2][1]=-1*(matrix[0][0]*matrix[1][2]-matrix[1][0]*matrix[0][2]);
    invrs[2][2]=matrix[0][0]*matrix[1][1]-matrix[1][0]*matrix[0][1];


    //transpose
    swap(invrs[1][0], invrs[0][1]);
    swap(invrs[2][0], invrs[0][2]);
    swap(invrs[1][2], invrs[2][1]);
    

    for(int i=0;i<9;i++){
        //devide by val
        invrs[i/3][i%3]/=dtr;
    }

    return Matrix3D(invrs);
}
void Matrix3D::getMatrix()const{
    std::cout<<"====================="<<std::endl;
    for(int i=0; i<9;i++){
        std::cout<<matrix[i/3][i%3]<<"\t";

        if(!((i+1)%3))
            std::cout<<std::endl;
    }
    std::cout<<"====================="<<std::endl;

}


//overloading
Matrix3D Matrix3D::operator+ (const Matrix3D& operand) const{
    double res[3][3];

    for(int i=0; i<9; i++){
        res[i/3][i%3]=matrix[i/3][i%3]+operand.matrix[i/3][i%3];
    }
    return Matrix3D(res);
}
Matrix3D Matrix3D::operator- (const Matrix3D& operand) const{
    double res[3][3];

    for(int i=0; i<9; i++){
        res[i/3][i%3]=matrix[i/3][i%3]-operand.matrix[i/3][i%3];
    }
    return Matrix3D(res);
}
Matrix3D Matrix3D::operator* (const Matrix3D& operand) const{
    double res[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                res[i][j] += matrix[i][k] * operand.matrix[k][j];
            }
        }
    }

    return Matrix3D(res);
}
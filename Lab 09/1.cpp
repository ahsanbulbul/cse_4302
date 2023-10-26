#include <iostream>
using namespace std;

class TwoDimensionalShape{
    private:
        int side_no;

    public:
        TwoDimensionalShape(int sides): side_no(sides){}
        int getside_no() const {return side_no;}
    
};

class Triangle: public TwoDimensionalShape {
    private:
        int side_a;
        int side_b;
        int side_c;
    public:
        Triangle(int sa, int sb, int sc): TwoDimensionalShape(3), side_a(sa), side_b(sb), side_c(sc){}
};
class Rectangle: public TwoDimensionalShape {
    private:
        int length;
        int width;
    public:
        Rectangle(int ln, int wd): TwoDimensionalShape(4), length(ln), width(wd){}
};
class Square: public TwoDimensionalShape {
    private:
        int side;
    public:
        Square(int length): TwoDimensionalShape(4), side(length){}
};
class Hexagon: public TwoDimensionalShape {
    private:
        int side;
    public:
        Hexagon(int _side): TwoDimensionalShape(6), side(_side){}
};

int main(){

    TwoDimensionalShape* shapes[10];
    shapes[0]= new Triangle(5,6,7);
    shapes[1]= new Rectangle(13, 7);
    shapes[2]= new Square(10);
    shapes[3]= new Hexagon(6);
    shapes[4]= new Triangle(18,19,20);
    shapes[5]= new Rectangle(15, 5);
    shapes[6]= new Square(7);
    shapes[7]= new Hexagon(9);

}
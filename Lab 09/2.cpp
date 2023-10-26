#include <iostream>
#include <math.h>
using namespace std;

class TwoDimensionalShape{
    private:
        int side_no;

    public:
        TwoDimensionalShape(int sides): side_no(sides){}
        int getside_no() const {return side_no;}

        virtual int getsideNo(){return 0;}
        virtual double getArea(){return 0;}
        virtual double getPerimeter(){return 0;}
        virtual string getShape(){return "";}

        void shapeDetails(){
            // cout<<"Number of sides: "<<getsideNo()<<endl;
            cout<<"Number of sides: "<<side_no<<endl;
            cout<<"Type: "<<getShape()<<endl;
            cout<<"Area: "<<getArea()<<endl;
            cout<<"Perimeter: "<<getPerimeter()<<endl;
        }
};


class Triangle: public TwoDimensionalShape {
    private:
        int side_a;
        int side_b;
        int side_c;
        
    public:
        Triangle(int sa, int sb, int sc): TwoDimensionalShape(3), side_a(sa), side_b(sb), side_c(sc){}

        double getPerimeter(){
            return ((side_a+side_b+side_c)/2.0);
        }

        double getArea(){
            double s=getPerimeter();
            return  sqrt(s*(s-side_a)*(s-side_b)*(s-side_c));
        }
        string getShape(){return "Triangle";}
        int getsideNo(){return 3;}
};
class Rectangle: public TwoDimensionalShape {
    private:
        int length;
        int width;
    public:
        Rectangle(int ln, int wd): TwoDimensionalShape(4), length(ln), width(wd){}

        double getPerimeter(){
            return 2*(length+width);
        }

        double getArea(){
            return length*width;
        }
        string getShape(){return "Rectangle";}
        int getsideNo(){return 4;}
};

class Square: public TwoDimensionalShape {
    private:
        int side;
    public:
        Square(int length): TwoDimensionalShape(4), side(length){}
    
        double getPerimeter(){
            return side*side;
        }

        double getArea(){
            return 4*side;
        }
        
        string getShape(){return "Square";}
        int getsideNo(){return 4;}
};

class Hexagon: public TwoDimensionalShape {
    private:
        int side;
    public:
        Hexagon(int _side): TwoDimensionalShape(6), side(_side){}

        double getPerimeter(){
            return 6*side;
        }

        double getArea(){
            return (3*sqrt(3)/2)*side*side;
        }

        string getShape(){return "Hexagon";}
        int getsideNo(){return 6;}
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


    for(int i=0; i<8; i++){
        cout<<"-------------------------------"<<endl;
        shapes[i]->shapeDetails();
        // cout<<"-------------------------------"<<endl;
    }

}
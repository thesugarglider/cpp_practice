// creating pointer object inside heap memory

#include<iostream>
using namespace std;

class Rectangle{
    public:
        unsigned short int length;
        unsigned short int breadth;

        int area(){
            return length*breadth;
        }

        int perimeter(){
            return 2*(length+breadth);
        }
};

int main(){
    Rectangle *ptr = new Rectangle();

    ptr -> length=10;
    ptr -> breadth=5;

    printf("Area of rectangle is %d\n",ptr -> area());
    printf("Perimeter of rectangle is %d\n", ptr -> perimeter());

    delete ptr;
    return 0;
}
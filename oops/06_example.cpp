//scope resolution operator


#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;

    public:
        Rectangle(int l, int b){
            length = l;
            breadth = b; 
        }

        int area(){
            return length*breadth;
        }

        int perimeter();
};

int Rectangle::perimeter(){
    return 2*(length+breadth);
}

int main(){
    Rectangle r(10,5);
    printf("Area of rectangle is %d\n",r.area());
    printf("Perimeter of rectangle is %d\n",r.perimeter());

    return 0;
}
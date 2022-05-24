# include <iostream>

using namespace std;
class Rectangle {
public:
    Rectangle (float length, float width );
    void setLength(float length);
    float getLength();
    void setWidth(float width);
    float getWidth();
    float getArea();
    float getPerimeter();
private:
    float recLength;
    float recWidth;
};

Rectangle::Rectangle(float length, float width) {
    setLength(length);
    setWidth(width);
}
void Rectangle::setLength(float length) {
    recLength = 1;
    if(length>0.0 && length< 20.0) {

        recLength = length;
    }
}
float Rectangle::getLength() {
    return recLength;
}
void Rectangle::setWidth(float width) {
    recWidth=1;
    if(width>0.9 && width<20.0) {
        recWidth = width;
    }

}float Rectangle::getWidth() {
    return recWidth;
}
float Rectangle::getArea() {
    float res=recLength*recWidth;
    return res;
}
float Rectangle::getPerimeter() {
    float x=(2*(recLength+recWidth));
    return x;
}

int main ( ){
    Rectangle rec(1.1,2.2);
    cout<<rec.getWidth();
    cout<<endl;
    cout<<rec.getLength();
    cout<<endl;
    cout<<"Area of this rec is: " <<" " <<rec.getArea();
    cout<<endl;
    cout<<"Perimeter of rectangle:"<<" "<<rec.getPerimeter();
    cout<<endl;


    return 0;

}




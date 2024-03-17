#include <iostream>

using namespace std;

class Box{
private:
    double width;
    double height;
    double depth;
public:
    Box();
    Box(double w, double h, double d);
    void setWidth(double w);
    void setHeight(double h);
    void setDepth(double d);
    double getWidth();
    double getHeight();
    double getDepth();
    double getVolume();
    void print();
};

Box::Box(){
    width = 1;
    height = 1;
    depth = 1;
}

Box::Box(double w, double h, double d){
    width = w;
    height = h;
    depth = d;
}

void Box::setWidth(double w){
    width = w;
}

void Box::setHeight(double h){
    height = h;
}

void Box::setDepth(double d){
    depth = d;
}

double Box::getWidth(){
    return width;
}

double Box::getHeight(){
    return height;
}

double Box::getDepth(){
    return depth;
}

double Box::getVolume(){
    return width * height * depth;
}

void Box::print(){
    cout << "Width: " << width << endl << "Height: " << height << endl << "Depth: " << depth << endl << "Volume: " << getVolume() << endl;
}

int main()
{
    cout << "Box-1 Information: " << endl;
    Box box1(3, 4, 5);
    box1.print();

    cout << endl << "Box-2 Information: " << endl;
    Box box2;
    box2.print();

    cout << endl << "Box-2 Properties Updating:" << endl;
    double newWidth, newHeight, newDepth;

    cout << "Enter width: ";
    cin >> newWidth;

    cout << "Enter height: ";
    cin >> newHeight;

    cout << "Enter depth: ";
    cin >> newDepth;

    box2.setWidth(newWidth);
    box2.setHeight(newHeight);
    box2.setDepth(newDepth);

    cout << endl << "Box-2 New Information:" << endl;
    box2.print();

    return 0;
}

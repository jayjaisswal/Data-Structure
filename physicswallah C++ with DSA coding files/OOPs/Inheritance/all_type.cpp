#include <iostream>

using namespace std;

// Base class
class Shape {
public:
    virtual void draw() const {
        cout << "Drawing a shape" << endl;
    }
};

// Single Inheritance
class Circle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a circle" << endl;
    }
};

// Multiple Inheritance
class Rectangle {
public:
    void draw() const {
        cout << "Drawing a rectangle" << endl;
    }
};

class Square : public Shape, public Rectangle {
public:
    void draw() const override {
        Shape::draw();      // Specify the draw() method from the Shape base class
        Rectangle::draw();  // Specify the draw() method from the Rectangle base class
    }
};

// Multilevel Inheritance
class Triangle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a triangle" << endl;
    }
};

class EquilateralTriangle : public Triangle {
public:
    void draw() const override {
        cout << "Drawing an equilateral triangle" << endl;
    }
};

// Hierarchy Inheritance
class Polygon : public Shape {
public:
    void draw() const override {
        cout << "Drawing a polygon" << endl;
    }
};

class Pentagon : public Polygon {
public:
    void draw() const override {
        cout << "Drawing a pentagon" << endl;
    }
};

class Hexagon : public Polygon {
public:
    void draw() const override {
        cout << "Drawing a hexagon" << endl;
    }
};

// Hybrid Inheritance (combination of multiple, multilevel, and/or hierarchy)
class CustomShape : public Circle, public Square {
public:
    void draw() const override {
        Circle::draw();  // Specify the draw() method from the Circle base class
        Square::draw();  // Specify the draw() method from the Square base class
    }
};

int main() {
    // Single Inheritance
    Circle circle;
    circle.draw();

    // Multiple Inheritance
    Square square;
    square.draw();

    // Multilevel Inheritance
    EquilateralTriangle triangle;
    triangle.draw();

    // Hierarchy Inheritance
    Pentagon pentagon;
    pentagon.draw();

    Hexagon hexagon;
    hexagon.draw();

    // Hybrid Inheritance
    CustomShape customShape;
    customShape.draw();

    return 0;
}

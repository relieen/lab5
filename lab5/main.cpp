#include <iostream>
#include <cmath>
#include <windows.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

class Shape {
public:
    virtual double Volume() const = 0;
};

class Parallelepiped : public Shape {
private:
    double a, b, c;

public:
    Parallelepiped(double a, double b, double c) : a(a), b(b), c(c) {}

    double Volume() const override {
        return a * b * c;
    }
};

class Pyramid : public Shape {
private:
    double a, b, h;

public:
    Pyramid(double a, double b, double h) : a(a), b(b), h(h) {}

    double Volume() const override {
        return a * b * h;
    }
};

class Sphere : public Shape {
private:
    double r;  

public:
    Sphere(double r) : r(r) {}

    double Volume() const override {
        return (4.0 / 3.0) * M_PI * pow(r, 3);
    }
};

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Shape* parallelepiped = new Parallelepiped(3, 4, 5);
    Shape* pyramid = new Pyramid(3, 4, 6);
    Shape* sphere = new Sphere(5);

    Pyramid pyramiid(2, 1, 4);

    cout << "ќб'Їм паралелеп≥педа: " << parallelepiped->Volume() << endl;
    cout << "ќб'Їм п≥рам≥ди: " << pyramid->Volume() << endl;
    cout << "ќб'Їм кул≥: " << sphere->Volume() << endl;
    cout << "ќб'Їм п≥рам≥ди: " << pyramid->Volume()<<endl;
    return 0;
}


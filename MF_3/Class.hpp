//
//  Class.hpp
//  MF_3
//
//  Created by Liza Stepanova on 06.03.2023.
//

#ifndef Class_hpp
#define Class_hpp

#include <stdio.h>

#include <iostream>
#include <string>

class Figure
{
protected:
    std::string nameOfFigure_;
    bool haveFourSides_ = false; //признак что четыре стороны
    int sideLengthA_ = 0;
    int sideLengthB_ = 0;
    int sideLengthC_ = 0;
    int sideLengthD_ = 0;
    int angleA_ = 0;
    int angleB_ = 0;
    int angleC_ = 0;
    int angleD_ = 0;

public:
    std::string getNameOfFigure() { return nameOfFigure_; }
    int getHaveFourSides() { return haveFourSides_; }

    int getSideLengthA() { return sideLengthA_; }
    int getSideLengthB() { return sideLengthB_; }
    int getSideLengthC() { return sideLengthC_; }
    int getSideLengthD() { return sideLengthD_; }

    int getAngleA() { return angleA_; }
    int getAngleB() { return angleB_; }
    int getAngleC() { return angleC_; }
    int getAngleD() { return angleD_; }
};


class Triangle : public Figure
{
public:
    //Конструктор треугольника
    Triangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB, int angleC);
};

class rightTriangle : public Triangle
{
public:
    rightTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB);
};

class isoscelesTriangle : public Triangle
{
public:
    isoscelesTriangle(int sideLengthA, int sideLengthB, int angleA, int angleB);
};

class equilateralTriangle : public Triangle
{
public:
    equilateralTriangle(int sideLengthA);
};

class Quadrilateral : public Figure
{

public:
    Quadrilateral(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD, int angleA, int angleB, int angleC, int angleD);
};

class Rectangle : public Quadrilateral
{
public: //int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD, int angleA, int angleB, int angleC, int angleD
    Rectangle(int sideLengthA, int sideLengthB);
    
};

class Square : public Quadrilateral
{
public:
    Square(int sideLengthA);
};

class Parallelogram : public Quadrilateral
{
public:
    Parallelogram(int sideLengthA, int sideLengthB, int angleA, int angleB);
};

class Rhomb : public Quadrilateral
{
public:
    Rhomb(int sideLengthA, int angleA, int angleB);
    
};

void printFigure(Figure &figure);



#endif /* Class_hpp */

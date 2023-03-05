//
//  Class.cpp
//  MF_3
//
//  Created by Liza Stepanova on 06.03.2023.
//

#include <iostream>
#include <string>
#include "Class.hpp"


Triangle::Triangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB, int angleC)
{
    nameOfFigure_ = "Треугольник";
    sideLengthA_ = sideLengthA;
    sideLengthB_ = sideLengthB;
    sideLengthC_ = sideLengthC;
    angleA_ = angleA;
    angleB_ = angleB;
    angleC_ = angleC;
};

rightTriangle::rightTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB)
    : Triangle(sideLengthA, sideLengthB, sideLengthC, angleA, angleB, 90)
{
    Triangle::nameOfFigure_ = "Прямоугольный треугольник";
};

isoscelesTriangle::isoscelesTriangle(int sideLengthA, int sideLengthB, int angleA, int angleB)
    : Triangle(sideLengthA, sideLengthB, sideLengthA, angleA, angleB, angleA)
{
    Triangle::nameOfFigure_ = "Равнобедренный треугольник";
};

equilateralTriangle::equilateralTriangle(int sideLengthA)
    : Triangle(sideLengthA, sideLengthA, sideLengthA, 60, 60, 60)
{
    Triangle::nameOfFigure_ = "Равносторонний треугольник";
};

Quadrilateral::Quadrilateral(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD, int angleA, int angleB, int angleC, int angleD)
{
    nameOfFigure_ = "Четырехугольник";
    
    haveFourSides_ = true;

    sideLengthA_ = sideLengthA;
    sideLengthB_ = sideLengthB;
    sideLengthC_ = sideLengthC;
    sideLengthD_ = sideLengthD;

    angleA_ = angleA;
    angleB_ = angleB;
    angleC_ = angleC;
    angleD_ = angleD;
};

Rectangle::Rectangle(int sideLengthA, int sideLengthB)
    : Quadrilateral(sideLengthA, sideLengthB, sideLengthA, sideLengthB, 90, 90, 90, 90)
{ Quadrilateral::nameOfFigure_ = "Прямоугольник"; };

Square::Square(int sideLengthA)
    : Quadrilateral(sideLengthA, sideLengthA, sideLengthA, sideLengthA, 90, 90, 90, 90)
{
    Quadrilateral::nameOfFigure_ = "Квадрат";
};

Parallelogram::Parallelogram(int sideLengthA, int sideLengthB, int angleA, int angleB)
    : Quadrilateral(sideLengthA, sideLengthB, sideLengthA, sideLengthB, angleA, angleB, angleA, angleB)
{
    Quadrilateral::nameOfFigure_ = "Параллелограмм";
};

Rhomb::Rhomb(int sideLengthA, int angleA, int angleB)
    : Quadrilateral(sideLengthA, sideLengthA, sideLengthA, sideLengthA, angleA, angleB, angleA, angleB)
{
    Quadrilateral::nameOfFigure_ = "Ромб";
};


void printFigure(Figure &figure)
{
    std::cout << std::endl;
    std::cout << figure.getNameOfFigure() << ":" << std::endl;

    std::cout << "Стороны:";
    std::cout << " a = " << figure.getSideLengthA() << ", b = " << figure.getSideLengthB() << ", с = " << figure.getSideLengthC();
    if (figure.getHaveFourSides())
    {
        std::cout << ", d = " << figure.getSideLengthD() << std::endl;
    }
    else { std::cout << std::endl; }

    std::cout << "Углы:";
    std::cout << " А = " << figure.getAngleA() << ", В = " << figure.getAngleB() << ", С = " << figure.getAngleC();
    if (figure.getHaveFourSides()) { std::cout << ", D = " << figure.getAngleD() << std::endl; }
    else { std::cout << std::endl; }
}

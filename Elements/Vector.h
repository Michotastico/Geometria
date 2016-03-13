//
// Created by Michel Llorens A. [@Michotastico] on 3/10/16.
//

#ifndef GEOMETRIA_VECTOR_H
#define GEOMETRIA_VECTOR_H

#include "Point.h"
#include <math.h>

template <class T>
class Vector {
public:
    Vector(T x, T y);
    Vector(T x, T y,T z);
    ~Vector();
    Vector<T> * operator+(Vector<T> p);
    Vector<T> * operator*(Vector<T> p);
    Vector<T> * operator^(Vector<T> p);
    T norm();
    Point<T> * getPoint();
    void setPoint(Point<T> * p);
private:
    Point<T> * point;

};


#endif //GEOMETRIA_VECTOR_H

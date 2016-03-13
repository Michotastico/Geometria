//
// Created by Michel Llorens A. [@Michotastico] on 3/10/16.
//

#include "Vector.h"
template <class T>
Vector<T>::Vector(T x, T y) {
    Point<T> * p = new Point<T>(x, y);
    this->point = p;

}
template <class T>
Vector<T>::Vector(T x, T y, T z) {
    Point<T> * p = new Point<T>(x, y, z);
    this->point = p;

}
template <class T>
Vector<T>::~Vector() {
    delete this->point;
}

template <class T>
Vector<T> *Vector<T>::operator+(Vector<T> p) {
    Point<T> * other = p.getPoint();
    T x = this->point->getX() + other->getX();
    T y = this->point->getY() + other->getY();
    T z = this->point->getZ() + other->getZ();
    Vector<T> * add = new Vector(x, y, z);
    return add;
}
template <class T>
Vector<T> *Vector<T>::operator*(Vector<T> p) {
    Point<T> * other = p.getPoint();
    T x = this->point->getX() * other->getX();
    T y = this->point->getY() * other->getY();
    T z = this->point->getZ() * other->getZ();
    Vector<T> * dot = new Vector(x, y, z);
    return dot;
}
template <class T>
Vector<T> *Vector<T>::operator^(Vector<T> p) {
    Point<T> * other = p.getPoint();
    T x = (this->point->getY() * other->getZ()) - (this->point->getZ() * other->getY());
    T y = (this->point->getZ() * other->getX()) - (this->point->getX() * other->getZ());
    T z = (this->point->getX() * other->getY()) - (this->point->getY() * other->getX());
    Vector<T> * cross = new Vector(x, y, z);
    return cross;
}
template <class T>
T Vector<T>::norm() {
    T x = this->point->getX() * this->point->getX();
    T y = this->point->getY() * this->point->getY();
    T z = this->point->getZ() * this->point->getZ();
    T ans = sqrt(x + y + z);
    return ans;
}
template <class T>
Point<T> * Vector<T>::getPoint() {
    T x = this->point->getX();
    T y = this->point->getY();
    T z = this->point->getZ();
    Point<T> * p = new Point<T>(x, y, z);
    return p;
}
template <class T>
void Vector<T>::setPoint(Point<T> * p) {
    delete this->point;
    this->point = p;
}

template class Vector<int>;
template class Vector<double>;
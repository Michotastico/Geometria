//
// Created by mllorens on 3/9/16.
//

#include "Point.h"

template <class T>
Point<T>::Point(T x, T y) {
    this->x = x;
    this->y = y;
}
template <class T>
Point<T>::Point(T x, T y, T z) {
    this->x = x;
    this->y = y;
    this->z = z;

}
template <class T>
Point<T>::~Point() {

}
template <class T>
T Point<T>::getX() {
    return this->x;
}
template <class T>
T Point<T>::getY() {
    return this->y;
}
template <class T>
T Point<T>::getZ() {
    return this->z;
}
template <class T>
void Point<T>::setX(T x) {
    this->x = x;

}
template <class T>
void Point<T>::setY(T y) {
    this->y = y;

}
template <class T>
void Point<T>::setZ(T z) {
    this->z = z;

}

template <class T>
Point<T> *Point<T>::operator+(Point<T> p) {
    T x = this->getX() + p.getX();
    T y = this->getY() + p.getY();
    T z = this->getZ() + p.getZ();
    Point<T> * point = new Point(x, y, z);
    return point;
}

template class Point<int>;
template class Point<double>;
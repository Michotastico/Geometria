//
// Created by Michel Llorens A. [@Michotastico] on 3/13/16.
//

#include "Segment.h"
#include <math.h>
template <class T>
Segment<T>::Segment(Point<T> * a, Point<T> * b) {
    this->a = a;
    this->b = b;
}
template <class T>
T Segment<T>::length() {
    T x = a->getX() - b->getX();
    x *= x;
    T y = a->getY() - b->getY();
    y *= y;
    T z = a->getZ() - b->getZ();
    z *= z;
    T d = x + y + z;
    T ans = sqrt(d);
    return ans;
}

template class Segment<int>;
template class Segment<double>;

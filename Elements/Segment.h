//
// Created by Michel Llorens A. [@Michotastico] on 3/13/16.
//

#ifndef GEOMETRIA_SEGMENT_H
#define GEOMETRIA_SEGMENT_H

#include "Point.h"

template <class T>
class Segment {
public:
    Segment(Point<T> * a, Point<T> * b);
    T length();
private:
    Point<T> * a;
    Point<T> * b;

};


#endif //GEOMETRIA_SEGMENT_H

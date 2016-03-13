//
// Created by mllorens on 3/9/16.
//

#ifndef GEOMETRIA_POINT_H
#define GEOMETRIA_POINT_H

template <class T>
class Point {
private:
    T x = 0;
    T y = 0;
    T z = 0;
public:
    Point(T x, T y);
    Point(T x, T y, T z);
    Point<T> * operator+(Point<T> p);
    ~Point();
    T getX();
    T getY();
    T getZ();
    void setX(T x);
    void setY(T y);
    void setZ(T z);


};


#endif //GEOMETRIA_POINT_H

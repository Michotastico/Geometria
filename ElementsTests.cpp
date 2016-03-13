//
// Created by Michel Llorens A. [@Michotastico] on 3/13/16.
//

#include <assert.h>
#include "ElementsTests.h"
#include "Elements/Point.h"
#include "Elements/Vector.h"
#include <iostream>

using namespace std;

void ElementsTests::PointTest() {
    Point<int> p1 {1, 1};
    Point<int> p2 {2, 2, 2};
    Point<double> p3 {2,2,2.01};
    cout << "Point 1: X: " << p1.getX() << "; Y: " << p1.getY() << endl;
    cout << "Point 2: X: " << p2.getX() << "; Y: " << p2.getY() << "; Z: " << p2.getZ() << endl;
    cout << "Point 3: X: " << p3.getX() << "; Y: " << p3.getY() << "; Z: " << p3.getZ() << endl;

    Point<int> * p4 = p1 + p2;
    cout << "Point 4: X: " << p4->getX() << "; Y: " << p4->getY() << "; Z: " << p4->getZ() << endl;
    assert(p4->getX() == (p1.getX() + p2.getX()));
}

void ElementsTests::VectorTest() {
    Vector<int> v1 {1, 1};
    Vector<int> v2 {-1, -1, 1};
    Vector<int> * v3 = v1 + v2;
    Vector<int> * v4 = v1 * v2;
    Vector<int> * v5 = v1 ^ v2;
    cout << "V1: " << v1.getPoint()->getX() << " " << v1.getPoint()->getY() << " " << v1.getPoint()->getZ() <<" ; NORM: " << v1.norm() << endl;
    cout << "V2: " << v2.getPoint()->getX() << " " << v2.getPoint()->getY() << " " << v2.getPoint()->getZ() <<" ; NORM: " << v2.norm() << endl;
    cout << "V3: " << v3->getPoint()->getX() << " " << v3->getPoint()->getY() << " " << v3->getPoint()->getZ() <<" ; NORM: " << v3->norm() << endl;
    cout << "V4: " << v4->getPoint()->getX() << " " << v4->getPoint()->getY() << " " << v4->getPoint()->getZ() <<" ; NORM: " << v4->norm() << endl;
    cout << "V5: " << v5->getPoint()->getX() << " " << v5->getPoint()->getY() << " " << v5->getPoint()->getZ() <<" ; NORM: " << v5->norm() << endl;

}

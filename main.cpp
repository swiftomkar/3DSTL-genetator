#include <iostream>
#include "CAD.h"


using namespace std;
//https://www.stratasysdirect.com/resources/how-to-prepare-stl-files/
//https://www.viewstl.com/
int main() {
    SCAD c;
    c.add(new Cube(10,10,0,15));
    c.add(new Cylinder(100,0,0,    3, 10, 10));
    c.CubeGen("test.stl");
}
//
// Created by Omkar Desai on 11/12/2017.
//
/* functions:
 * 1) makes a cube: cube(x,y,z,side);
 * 2) makes a cylinder: cylinder(x,y,z,r,h,facets);
 * 3) writes the output from cube and cylinder constructors to a STL file
*/
#include "CAD.h"
#include "vector.h"
Shape::Shape(double x, double y, double z):x(x),y(y),z(z){}
Cylinder::Cylinder(double x, double y, double z, double r, double h, int facets):Shape(x,y,z),r(r),h(h),facets(facets) {
    //write algo to make a cylinder
}
void Cylinder::vir(){}
Cube::Cube(double x, double y, double z, double size) : Shape(x,y,z),size(size) {
    //write algo to make a cube
}
void Cube::vir(){}
CAD::CAD(){}
void CAD::add(Shape* a){
    shapes.push_back(a);
}


void CAD::write(std::string a){
    std::ofstream stl(a);
    stl<<"solid OpenSCAD_Model\n";
        stl << "\tfacet normal\n";
        stl << "\t\touter loop\n";
        stl << "\t\t\tvertex\n";
        stl << "\t\t\tvertex\n";
        stl << "\t\t\tvertex\n";
        stl << "\t\tendloop\n";
        stl << "\tendfacet\n";
    stl.close();
}

CAD::~CAD(){
    for(int i=0;i<shapes.size();i++)
        delete shapes[i];
}
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

    points.push_back({x,y,z});
    points.push_back({x+size,y,z});

    points.push_back({x,y+size,z});
    points.push_back({x+size,y+size,z});

    points.push_back({x,y,z+size});
    points.push_back({x+size,y,z+size});

    points.push_back({x,y+size,z+size});
    points.push_back({x+size,y+size,z+size});

}
void Cube::vir(){}
CAD::CAD(){}
void CAD::add(Shape* a){
    shapes.push_back(a);
}


void Cube::write(std::string a,double first, double second, double third){
    std::ofstream stl(a);
    stl<<"solid OpenSCAD_Model\n";
    stl<<"outer loop\n";
    stl<<"vertex"<<" "<< points[first][0]<<" "<<points[first][1]<<" "<<points[first][2]<<'\n';
    stl<<"vertex"<<" "<< points[second][0]<<" "<<points[second][1]<<" "<<points[second][2]<<'\n';
    stl<<"vertex"<<" "<< points[third][0]<<" "<<points[third][1]<<" "<<points[third][2]<<'\n';
    stl<<"endloop"<<'\n';
    stl.close();

}
void Cube::triGen(std::string a){

    write(a,0,1,2);
    write(a,1,2,3);
    write(a,4,5,6);
    write(a,5,6,7);
    write(a,0,2,4);
    write(a,2,4,6);
    write(a,2,3,6);
    write(a,3,6,7);
    write(a,1,3,5);
    write(a,3,5,7);
    write(a,0,1,4);
    write(a,1,4,5);
}

CAD::~CAD(){
    for(int i=0;i<shapes.size();i++)
        delete shapes[i];
}
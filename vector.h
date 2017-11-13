//
// Created by Omkar Desai on 11/12/2017.
//
/*functions available:
  1: a.dot(b);
  2: a.dist(b);
  3: a.scalar_mul(b);
  4: a.subVec(b)
  5: a.addVec(b);

  here a and b both are of type vector;
  can be created like this:
  Vec3d(1.0,2.0,3.0);
*/
#pragma once


#include <iostream>
#include<cmath>

class Vec3d {
private:
    double x;
    double y;
    double z;
public:

    Vec3d(double x=0,double y=0,double z=0);
    //method for dot product
    double dot(Vec3d& a);
    //method for distance between 2 vectors
    double dist(Vec3d& a);
    //method for scalar mul
    Vec3d scalar_mul (Vec3d& a, double& b);
    //methods for addition and subtraction
    Vec3d subVec(Vec3d& a);
    Vec3d addVec(Vec3d& a);
    void print();
};

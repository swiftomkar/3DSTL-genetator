//
// Created by Omkar Desai on 11/12/2017.
//

#include "vector.h"
using namespace std;
Vec3d::Vec3d(double x,double y,double z):x(x),y(y),z(z){}


double Vec3d::dot(Vec3d& a){
    Vec3d mul;
    double ans;
    mul.x=a.x*x;
    mul.y=a.y*y;
    mul.z=a.z*z;
    ans=mul.x+mul.y+mul.z;
    return ans;
}

double Vec3d::dist(Vec3d& a){
    double dist;
    dist=sqrt(pow(x-a.x,2))+sqrt(pow(y-a.y,2))+sqrt(pow(z-a.z,2));
    return dist;
}


Vec3d Vec3d::scalar_mul (Vec3d& a, double& b){
    Vec3d sm;
    sm.x=a.x*b;
    sm.y=a.y*b;
    sm.z=a.z*b;
    return sm;
}

Vec3d Vec3d::addVec(Vec3d& a){
    Vec3d add;
    add.x=a.x+x;
    add.y=a.y+y;
    add.z=a.z+z;
    return add;
}
Vec3d Vec3d::subVec(Vec3d& a){
    Vec3d sub;
    sub.x=a.x-x;
    sub.y=a.y-y;
    sub.z=a.z-z;
    return sub;
}

void Vec3d::print(){
    cout<<x<<", "<<y<<", "<<z<<'\n';
}

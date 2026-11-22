#include "vector3.h"
#include <cmath>
#include <iostream>

using namespace std;

    Point3D Point3D::operator+(Point3D& other)
    {
        return Point3D(x_+other.x_,y_+other.y_,z_+other.z_);
    }

    Point3D Point3D::operator-(Point3D& other)
    {
        return Point3D(x_-other.x_,y_-other.y_,z_-other.z_);
    }

    Point3D Point3D::operator*(double scalar)
    {
        return Point3D(x_*scalar,y_*scalar,z_*scalar);
    }

    Point3D Point3D::operator/(double scalar)
    {
        return Point3D(x_/scalar,y_/scalar,z_/scalar);
    }

    bool Point3D::operator==(Point3D& other)
    {
        return x_==other.x_ && y_==other.y_ && z_==other.z_;
    }

    ostream& operator<<(ostream& out,const Point3D& p)
    {
        out<<"("<<p.x_<<", "<<p.y_<<", "<<p.z_<<")"<<endl;
        return out;
    }

    istream& operator>>(istream& in, Point3D& p)
    {
        cout<<"Enter a Point(x,y,z): "<<endl;
        in>>p.x_>>p.y_>>p.z_;
        return in;
    }

    double Point3D::magnitude()
    {
        return sqrt(pow(x_,2)+pow(y_,2)+pow(z_,2));
    }

    double& Point3D::operator()(int index){
        if(index == 0)  return x_;
        if(index == 1)  return y_;
        if(index == 2)  return z_;
        cout << "Index out of range" << endl;
        return z_;
    }

    const double& Point3D::operator()(int index) const{
        if(index == 0)  return x_;
        if(index == 1)  return y_;
        if(index == 2)  return z_;
        cout << "Index out of range" << endl;
        return z_;
    }


#include <iostream>

using namespace std;

class Point3D{
    private:
        double x;
        double y;
        double z;
    
    public:
    Point3D(double p1, double p2, double p3) : x(p1), y(p2), z(p3) {}

    Point3D operator+(const Point3D& rhs) const{
        return Point3D(x + rhs.x, y + rhs.y, z + rhs.z);
    }

    Point3D operator-(const Point3D& rhs) const{
        return Point3D(x - rhs.x, y - rhs.y, z - rhs.z);
    }

    bool operator==(const Point3D& rhs) const{
        return x == rhs.x && y == rhs.y && z == rhs.z;
    }

    Point3D operator*(const double& rhs) const{
        return Point3D(x * rhs, y * rhs, z * rhs);
    }

    Point3D operator/(const double& rhs) const{
        return Point3D(x / rhs, y / rhs, z / rhs);
    }

    //friend function for overloading << operator
    friend ostream& operator<<(ostream& os, Point3D& rhs){
        os << "(" << rhs.x << ", " << rhs.y << ", " << rhs.z << ")" << endl;
        return os;
    }

    // void printPt(){
    //     cout << '(' << x << ',' << y << ',' << z << ')' << endl;
    // }
};

int main(){
    Point3D q1(0, 1, 1);
    Point3D q2(3, 2, 3);
    Point3D q3 = q1 + q2;
    Point3D q4 = q2 - q1;
    // q3.printPt();
    // q4.printPt();
    Point3D q5 = q1 * 6;
    Point3D q6 = q1 / 4;
    // q5.printPt();
    cout << q5;
    cout << q6;
    q5 == q6;
    return 0;
}
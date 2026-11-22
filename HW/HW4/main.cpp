#include <iostream>
#include "matrix33.h"
#include "vector3.h"

using namespace std;

Point3D multiply(const Matrix33& A, const Point3D& x){
    Point3D result(0, 0, 0);
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            result(i) += A(i, j) * x(j);
        }
    }
    return result;
}

int main(){
    int arr1[3][3] = {
        {3, 2, 3},
        {1, 2, 3},
        {10, 8, 5}
    };
    int arr2[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };

    // 1. Parameterized Constructor & Stream Insertion (<<)
    Matrix33 matrix1(arr1);
    Matrix33 matrix2(arr2);
    cout << "Matrix 1: \n" << matrix1;
    cout << "Determinant of Matrix 1 (Expected: -28): " << matrix1.determinant() << "\n\n";
    cout << "Matrix 2 (Identity Matrix): \n" << matrix2;
    cout << "Determinant of Matrix 2 (Expected: 1): " << matrix2.determinant() << "\n\n";

    //Matrix Multiplication (Matrix * Matrix)
    Matrix33 prod = matrix1 * matrix2;
    cout << "Matrix 1 * Matrix 2 (Should equal Matrix 1)\n" << prod << "\n\n";

    //Scalar Multiplication (Both directions)
    Matrix33 scalarRight = matrix1 * 2;
    Matrix33 scalarLeft = 2 * matrix1;
    cout << "Matrix 1 * 2\n" << scalarRight << "\n\n";
    cout << "2 * Matrix 1\n" << scalarLeft << "\n\n";

    //Matrix Addition (+)
    Matrix33 sum = matrix1 + matrix2;
    cout << "Matrix 1 + Matrix 2\n" << sum << "\n\n";

    //Copy Constructor & Copy Assignment
    Matrix33 copyConstructed(matrix1);
    Matrix33 copyAssigned;
    copyAssigned = matrix1;
    cout << "Copy Constructed Matrix\n" << copyConstructed << "\n\n";
    cout << "Copy Assigned Matrix\n" << copyAssigned << "\n\n";

    //Stream Extraction (>>)
    Matrix33 userMatrix;
    cout << "Testing User Input (Enter 9 integers)\n";
    cin >> userMatrix;
    cout << "You entered:\n" << userMatrix;

    Point3D v1(1, 2, 3);
    cout << multiply(matrix1, v1);
    return 0;
}
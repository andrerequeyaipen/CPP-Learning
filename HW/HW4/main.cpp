#include <iostream>
#include "matrix33.h"
using namespace std;

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
    cout << "--- Matrix 1 ---\n" << matrix1;
    cout << "--- Matrix 2 (Identity) ---\n" << matrix2;

    // 2. Determinant
    cout << "\nDeterminant of Matrix 1 (Expected: -28): " << matrix1.determinant() << "\n";

    // 3. Matrix Multiplication (Matrix * Matrix)
    Matrix33 prod = matrix1 * matrix2;
    cout << "\n--- Matrix 1 * Matrix 2 (Should equal Matrix 1) ---\n" << prod;

    // 4. Scalar Multiplication (Both directions)
    Matrix33 scalarRight = matrix1 * 2;
    Matrix33 scalarLeft = 2 * matrix1;
    cout << "\n--- Matrix 1 * 2 ---\n" << scalarRight;
    cout << "\n--- 2 * Matrix 1 ---\n" << scalarLeft;

    // 5. Matrix Addition (+)
    Matrix33 sum = matrix1 + matrix2;
    cout << "\n--- Matrix 1 + Matrix 2 ---\n" << sum;

    // 6. Copy Constructor & Copy Assignment
    Matrix33 copyConstructed(matrix1);
    Matrix33 copyAssigned;
    copyAssigned = matrix1;
    cout << "\n--- Copy Constructed Matrix ---\n" << copyConstructed;
    cout << "\n--- Copy Assigned Matrix ---\n" << copyAssigned;

    // 7. Stream Extraction (>>)
    Matrix33 userMatrix;
    cout << "\n--- Testing User Input (Enter 9 integers) ---\n";
    cin >> userMatrix;
    cout << "You entered:\n" << userMatrix;

    return 0;
}
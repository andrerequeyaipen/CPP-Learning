#ifndef MATRIX33_H
#define MATRIX33_H

#include <iostream>

class Matrix33{
    private:
        int** matrix = nullptr;

    public:
        Matrix33(){}
        Matrix33(int arr[3][3]);

        Matrix33(const Matrix33& other);
        Matrix33& operator=(const Matrix33& other);
        Matrix33(Matrix33&& other) noexcept;
        Matrix33& operator=(Matrix33&& other) noexcept;
        ~Matrix33();

        Matrix33 operator*(const Matrix33& rhs) const;
        Matrix33 operator*(const int& scalar) const;
        friend Matrix33 operator*(const int& scalar, const Matrix33& rhs);
        Matrix33 operator+(const Matrix33& rhs) const;

        friend std::ostream& operator<<(std::ostream& os,const Matrix33& rhs);
        friend std::istream& operator>>(std::istream& is, Matrix33& rhs);

        int determinant() const;
};

#endif
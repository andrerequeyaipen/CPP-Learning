#include <iostream>

using namespace std;

class Matrix33{
    private:
        int** matrix = nullptr;
    public:
        Matrix33(){}

        Matrix33(int arr[3][3]){
            matrix = new int*[3];
            for(int i = 0; i < 3; i++){
                matrix[i] = new int[3];
                for(int j = 0; j < 3; j++){
                    matrix[i][j] = arr[i][j];
                }
            }
        }
        

        //copy constructor
        Matrix33(const Matrix33& other){
            matrix = new int*[3];
            for(int i = 0; i < 3; i++){
                matrix[i] = new int[3];
                for(int j = 0; j < 3; j++){
                    matrix[i][j] = other.matrix[i][j];
                }
            }
        }
        
        //copy assignment operator
        Matrix33& operator=(const Matrix33& other){
            if(this != &other){             //"this" memory address on the left side != memory address of the right side.
                if(this -> matrix != nullptr){
                    for(int i = 0; i < 3; i++){             //deleting old pointers + data == Deallocating memory.
                        delete[] matrix[i];
                        }
                    delete[] matrix;
                }
                matrix = new int*[3];                   //allocating new memory
                for(int i = 0; i < 3; i++){
                    matrix[i] = new int[3];
                    for(int j = 0; j < 3; j++){
                        matrix[i][j] = other.matrix[i][j];
                    }
                }
            }
            return *this;
        }

        //move constructor
        Matrix33(Matrix33&& other) noexcept{
            matrix = other.matrix;
            other.matrix = nullptr;
        }

        //move assignment
        Matrix33& operator=(Matrix33&& other) noexcept{
            if(this != &other){
                if(matrix != nullptr){
                    for(int i = 0; i < 3; i++){ 
                        delete[] matrix[i];
                    }
                delete[] matrix;
                }
                
                matrix = other.matrix;
                other.matrix = nullptr;
            }
            return *this;
        }

        Matrix33 operator*(const Matrix33& rhs) const{
            Matrix33 result;

            result.matrix = new int*[3];
            for(int i = 0; i < 3; i++){
                result.matrix[i] = new int[3];
            }

            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    result.matrix[i][j] = 0;
                    for(int k = 0; k < 3; k++){
                        result.matrix[i][j] += this->matrix[i][k] * rhs.matrix[k][j]; //dereference the pointer to get the actual object of the lhs.
                    }
                }
            }
            return result;
        }

        Matrix33 operator*(const int& scalar) const{
            Matrix33 result;

            result.matrix = new int*[3];
            for(int i = 0; i < 3; i++){
                result.matrix[i] = new int[3];
            }

            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    result.matrix[i][j] = scalar * this->matrix[i][j];
                }
            }
            return result;
        }
        
        friend Matrix33 operator*(const int& scalar, const Matrix33& rhs){
            return rhs * scalar;
        }

        Matrix33 operator+(const Matrix33& rhs) const{
            Matrix33 result;
            result.matrix = new int*[3];
            for(int i = 0; i < 3; i++){
                result.matrix[i] = new int[3];
            }

            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    result.matrix[i][j] = this->matrix[i][j] + rhs.matrix[i][j];
                }
            }
            return result;
        }

        friend ostream& operator<<(ostream& os,const Matrix33& rhs){
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    os << rhs.matrix[i][j] << " ";
                }
                os << '\n';
            }
            return os;
        }

        friend istream& operator>>(istream& is, Matrix33& rhs){
            cout << "Please enter number for the matrix: \n";
            if(rhs.matrix == nullptr){
                rhs.matrix = new int*[3];
                for(int i = 0; i < 3; i++){
                    rhs.matrix[i] = new int[3];
                }
            }
            
            for(int r = 0; r < 3; r++){
                for(int c = 0; c < 3; c++){
                    is >> rhs.matrix[r][c];
                }
            }
            return is;
        }

        int determinant() const{   //Sarrus rule for 3 x 3 matrix determinant
            int downward_sum = 0;
            int upward_sum = 0;
            int determinant = 0;

            for(int j = 0; j < 3; j++){
                int downward_diagonal = this -> matrix[0][j] * this -> matrix[1][(j + 1) % 3] * this -> matrix[2][(j + 2) % 3];
                downward_sum += downward_diagonal;
            }
            
            for(int j = 0; j < 3; j++){
                int upward_diagonal = this -> matrix[2][j] * this -> matrix[1][(j + 1) % 3] * this -> matrix[0][(j + 2) % 3];
                upward_sum += upward_diagonal;
            }

            determinant = downward_sum - upward_sum;
            return determinant;
        }

        //Destructor
        ~Matrix33(){
            if(matrix != nullptr){
                for(int i = 0; i < 3; i++){ 
                    delete[] matrix[i];
                }
                delete[] matrix;
            }
        }
};
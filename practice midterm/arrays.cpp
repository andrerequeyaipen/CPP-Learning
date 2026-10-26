#include <iostream>
#include <cmath>

int main(){
    int rows, cols;

    std::cout << "Please enter number of rows: \n";
    std::cin >> rows;
    std::cout << "Please enter number of columns: \n";
    std::cin >> cols;

    int matrix[rows][cols];
    
    for(int r = 0; r < rows; r++){
        for(int c = 0; c < cols; c++){
            if(r == 0 && c == 0){
                matrix[r][c] = 0;
            }
            else if(c % 2 == 0){
                matrix[r][c] = pow(r, c);
            }
            else{
                matrix[r][c] = 0;
            }
        }
    }

    for(int r = 0; r < rows; r++){
        for(int c = 0; c < cols; c++){
            std::cout << matrix[r][c] << " ";
        }
        std::cout << '\n';    
    }
    
    return 0;
}
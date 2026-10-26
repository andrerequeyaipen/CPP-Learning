#include <iostream>
#include <vector>

int power(int base, int exp){
    if(exp == 0){ //base case
        return 1;
    }
    return base * power(base, exp - 1);
}

int main(){

    int rows;
    int columns;
    
    std::cout << "Please enter number of rows: \n";
    std::cin >> rows;
    std::cout << "Please enter number of columns: \n";
    std::cin >> columns;

    std::vector<std::vector<int>> matrix(rows, std::vector<int>(columns, 0));

    for(int r = 0; r < rows; r++){
        for(int c = 0; c < columns; c++){
            if(r == 0 && c == 0){
                matrix[r][c] = 0;
            }
            else if(c % 2 == 0){
                matrix[r][c] = power(r, c);
            }
            else{
                matrix[r][c] = 0;
            }
        }
    }

    std::cout << "\nResulting Matrix:\n";
    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < columns; ++c) {
            std::cout << matrix[r][c] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}
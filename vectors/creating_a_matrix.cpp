#include <iostream>
#include <vector>
#include <cmath>

int main(){
    int rows = 0;
    int columns = 0;
    std::cout << "Insert number of columns: \n";
    std::cin >> columns;
    std::cout << "Insert number of rows: \n";
    std::cin >> rows;

    std::vector<std::vector<int>> matrix(rows, std::vector<int>(columns, 0));

    for(int r = 0; r < rows; r++){
        for(int c = 0; c < columns; c++){
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
    
    std::cout << "\nResulting Matrix:\n";
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < columns; c++) {
            std::cout << matrix[r][c] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}
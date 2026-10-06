#include <iostream>
#include <vector>
int main(){
    int rows = 3;
    int cols = 4;

    //create a 2D vector initialized with zeros

    // Constructor goes like
    //std::vector<type> name(size/columns, default_value)

    std::vector<int> regular_vector(4, 1);
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols, 0));
    
    //std::vector<std::vector<int>> -> basically a vector/array that will hold other
    //                                  vectors that hold integers
    //matrix = {}

    //matrix(rows, std::vector<int>(cols, 0)) -> we create n (rows) within the vector
    //Say n = 4
    // matrix = {{}, {}, {}, {}}

    //Finally the predetermined values within each row is a vector that holds integers
    //with size of m (columns) and filled with 0's

    // matrix = {
    //     {0, 0, 0, 0},
    //     {0, 0, 0, 0},
    //     {0, 0, 0, 0},
    //     {0, 0, 0, 0}
    // }

    int size_regular_vector = sizeof(regular_vector)/sizeof(regular_vector[0]);

    //looping through the 1D Vector
    for(int i = 0; i < size_regular_vector; i++){
        std::cout << regular_vector[i] << '\n';
    }
        

    //looping through a 2D Vector
    for(int r = 0; r < rows; r++){
        for(int c = 0; c < cols; c++){
            std::cout << matrix[r][c] << " ";
        }
        std::cout << '\n';
    }
        
    return 0;
}
// QUESTION 1
#include <iostream>
#include <string>

class Book{
    private:
        std::string title;
        std::string author;
        int yearPublished;
        double price;
    
    public:
    Book(std::string& bookTitle, std::string& bookAuthor, int publishedYear = 1900, double bookPrice = 0.0) 
        : title(bookTitle), author(bookAuthor), yearPublished(publishedYear), price(bookPrice){}

    void applyDiscount(double& discount){
        price -= price * (discount/100.0);
    }
    std::string getBookInfo() const{
        return  "Title: " + title + '\n' +
                "Author: " + author + '\n' +
                "Year Published: " + std::to_string(yearPublished) + '\n' +
                "Price: $" + std::to_string(price);
    }
};

int main(){
    std::string bookName = "The Great Gatsby";
    std::string author = "F. Scott Fitzgerald";

    Book myBook(bookName, author, 1925, 15.99);

    double discount = 10.0; // 10% discount

    myBook.applyDiscount(discount);

    std::cout << myBook.getBookInfo() << std::endl;

    return 0;
}

//QUESTION 2
#include <iostream>

int count_adjacent (int arr[], int size);

int main(){
    int arr[] = {3, 3, 3, 3, 5, 5, 6, 7, 7, 7, 2, 2};
    int size = 12;
    std::cout << count_adjacent (arr, size) << std::endl;
    return 0;
}

int count_adjacent (int arr [], int size){
    if(size <= 1)   return 0;
    int count = count_adjacent(arr, size - 1 );
    if(arr[size - 1] == arr[size - 2]){
        return 1 + count;
    }
    return count;
}

//QUESTION 3
#include <iostream>
int* remove_duplicates (int arr[], int size, int &newSize);

int main () {
    int arr [] = {4, 2, 4, 7, 2, 9, 7, 5};
    int size = 8;
    int newSize = 0;
    int* result = remove_duplicates(arr , size , newSize);

    for (int i = 0; i < newSize ; i++) {
        std::cout << result [i] << " ";
    }
    std::cout << std::endl ;
    std::cout << "New size : " << newSize << std::endl ;
    
    delete [] result ;
    
    return 0;
}
int* remove_duplicates (int arr[], int size, int &newSize){
    if(size == 0){
        newSize = 0;
        return nullptr;
    }

    int* new_arr = new int[size];

    for(int i = 0; i < size; i++){
        bool isDuplicate = false;
        for(int j = 0; j < newSize; j++){
            if(arr[i] == new_arr[j]){
                isDuplicate = true;
                break;
            }
        }

        if(!isDuplicate){
            new_arr[newSize] = arr[i];
            newSize++;
        }
    }
    return new_arr;
}
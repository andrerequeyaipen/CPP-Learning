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
#include <iostream>
#include <string>

class Car {
    private:
        std::string brand;
        std::string model;
        int year;

    public:
    //constructor to initialize object
    Car(std::string b, std::string m, int y){
        brand = b;
        model = m;
        year = y;
    }

    void displayInfo(){         //function inside the class
        std::cout << "Brand: " << brand << '\n';
        std::cout << "Model: " << model << '\n';
        std::cout << "Year: " << year << '\n';
    }

    void set_brand(std::string b){
        brand = b;
    };

    //Destructor
    ~Car(){
        std::cout << "Car destroyed: " << brand << " " << model << " " << year << '\n';
    }
};

int main(){
    Car car1("Toyota", "Camry", 2020);

    Car* car2 = new Car("Honda", "Civic", 2000); //storing in the heap

    //std::cout << car1.model << '\n'; //printing attribute values
    //std::cout << car1.year << '\n';

    //car1.brand() = "Jeep" // won't work since attributes are private

    car1.set_brand("Jeep");

    //car1.displayInfo();
    //car2.displayInfo();


    Car* car1_ptr = &car1; //Use arrow operator for Pointers
    car1_ptr -> displayInfo();
    car2 -> displayInfo();
    delete car2;
    car2 = nullptr;
    return 0;
}
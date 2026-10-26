#include <iostream>
#include <string>

class Toaster{
    private:
        std::string brand;
        int temperature;
        int maxTemperature;
        bool isOn;
    
    public:
        Toaster(std::string b, int maxt) :
        brand(b), temperature(0), maxTemperature(maxt), isOn(false) {}

        void turnOn(){
            isOn = true;
        }

        void turnOff(){
            isOn = false;
            temperature = 0;
        }
        
        void setTemperature(int temp){
            if(!isOn){
                std::cout << "Error: Toaster is off." << std::endl; 
            }
            else if(temp < 0 || temp > maxTemperature){
                std::cout << "Temperature exceeds allow range." << std::endl;
            }
            else{
                temperature = temp;
            }
        }
        
        int getTemperature(){
            return temperature;
        }

        void displayInfo(){
            std::cout << "Brand: " << brand << '\n'; 
            std::cout << "Current temperature: " << temperature << '\n';
            std::cout << "Maximum Temperature: " << maxTemperature << '\n';
            if(isOn){
                std::cout << "Power: ON" << std::endl;
            }
            else{
                std::cout << "Power: OFF" << std::endl;
            }
            std::cout << std::endl;
        }
};

int main(){
    Toaster Toaster1("Phillips", 200);
    Toaster Toaster2("Hamilton Beach", 180);
    Toaster2.turnOn();
    Toaster1.turnOn();
    Toaster1.setTemperature(150);
    Toaster2.setTemperature(100);

    std::cout << "Toaster 1";
    Toaster1.displayInfo();

    std::cout << "Toaster 2";
    Toaster2.displayInfo();

    Toaster1.setTemperature(250);

    std::cout << "Current temperature of Toaster 1: " << Toaster1.getTemperature() << std::endl;

    Toaster1.turnOff();

    std::cout << "\nAfter turning off Toaster 1:\n" << std::endl;
    Toaster1.displayInfo();
    Toaster2.displayInfo();
    return 0;
}
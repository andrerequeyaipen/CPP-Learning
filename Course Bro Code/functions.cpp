#include <iostream>

void happyBirthday(std::string name, int age);

int main(){
	
	std::string name = "Andre";
	int age = 21;
	
	happyBirthday(name, age);
	
	return 0;
} 
void happyBirthday(std::string name, int age){ //when writing an argument we need to add specify the data type
	std::cout << "Happy Birthday to " << name << '\n';
	std::cout << "Happy Birthday to " << name << '\n';
	std::cout << "Happy Birthday dear " << name << '\n';
	std::cout << "Happy Birthday to " << name << '\n';
	std::cout << "You're " << age << " years old!\n";
}

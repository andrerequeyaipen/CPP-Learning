#include <iostream>

int main(){
	
	std::string name = "Bro";
	int age = 21;
	std::string freePizzas[5] = {"pizza 1", "pizza 2","pizza 3","pizza 4","pizza 5"};
	
	std::string *pName = &name;
	int *pAge = &age;
	std::string *pFreePizzas = freePizzas; //Array Decay -> name of an array turns into a pointer to its very first element
	
	std::cout << *pName << '\n'; //accessing the value at the given address
	std::cout << *pAge << '\n';
	std::cout << pFreePizzas[3] << '\n';
    std::cout << pName; //memory adress

    //when dealing with an array:
    //      std::string *array = array[] -> points to the first element of the array
    //   Compiler translates this into
    //      std::string *array = &array[0]
    
    //   parrayname[i] -> able to use index when using cout
	
	return 0;
}
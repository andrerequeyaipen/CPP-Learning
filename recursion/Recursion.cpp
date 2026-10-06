#include <iostream>

int factorial(int num);

int main(){
	int num = 5;
	std::cout << "Factorial of " << num << " is: " << factorial(num);
	return 0;
}

int factorial(int num){
	if(num == 0){		//base case
		return 1;
	}
	else{
		return num * factorial(num - 1); //recursive case
	}
}

//Risk of stack overflow is recursion depth becomes too large.
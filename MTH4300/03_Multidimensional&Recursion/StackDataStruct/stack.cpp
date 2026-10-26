#include <iostream>
#include <stack>

int main(){
    std::stack<int> numbers; //declaring a stack
    std::cout << "size: " << numbers.size() << '\n';


    if(numbers.empty()){
        std::cout << "Stack is empty\n";
    }

    numbers.push(8); //adding a number to the stack

    std::cout << "size: " << numbers.size() << '\n';

    if (!numbers.empty()){
        std::cout << "Stack is not empty.\n";
    }

    numbers.push(9);
    numbers.push(5);

    std::cout << "top : " << numbers.top() << '\n';
    std::cout << "size: " << numbers.size() << '\n';


    int popped_value = numbers.top();

    numbers.pop(); //getting rid of the top of the stack
    std::cout << "top : " << numbers.top() << '\n';
    std::cout << "size: " << numbers.size() << '\n';
    
    std::cout << "Popped value: " << popped_value << '\n';

    std::stack<int> other_stack;

    other_stack.push(4);

    std::cout << "other_stack size: " << other_stack.size() << '\n';

    other_stack.swap(numbers); //Swap stacks

    std::cout << "Other stack size: " << other_stack.size() << '\n';
    std::cout << "Numbers size: " << numbers.size() << '\n';

    return 0;
}
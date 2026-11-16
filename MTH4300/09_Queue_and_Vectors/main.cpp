#include <iostream>
#include "stack.h"

using namespace std;

int main(){
    Stack s1;
    s1.push("Jane");
    s1.push("Adam");
    s1.push("Beth");
    
    s1.pop();

    cout << "Back of stack: " << s1.back() << endl;
}
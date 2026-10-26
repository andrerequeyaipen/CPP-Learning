# Classes

- Attributes - Variables that store the state or characteristics of an object
- Methods - Functions that define the behavior of the object
- Objects - Instances of a class created at runtime
---
- Constructor: A special function that is called automatically when an object is created. It is used to initialize the object. The constructor has the same name as the class and has no return type.

- Destructor: A special function that is called when an object is destroyed (usually at the end of the program or when an object goes out of scope). It has the same name as the class, prefixed with a tilde (~), and also has no return type.

```cpp
#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;

    // Constructor
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
        cout << "Car created: " << brand << " " << model << " " << year << endl;
    }

    // Destructor
    ~Car() {
        cout << "Car destroyed: " << brand << " " << model << " " << year << endl;
    }
};

int main() {
    Car car1("Honda", "Civic", 2021);  // Car created: Honda Civic 2021
    return 0;  // Destructor will be called when the object goes out of scope
}
```

3. Encapsulation - Concept of restricting direct acces to some of the object's components and only exposing what is necessary through public methods. This protects the integrity of the data.
---
## Dot Operator in C++
The dot operator is used to access public members (Variables or functions) of an object.

## Arrow Operator in C++
```cpp
pointer_name -> member_name
```

Pointer already exists on the stack function.
We use the arrow operator to reach inside the object it's pointing to.

We use the arrow operator when we want to access a member of a class through a pointer to that object.

```cpp
#include <iostream>

class MyClass{
    public:
        int obj = 5;
        int* ptr;

    MyClass(){
        obj = 5;
        ptr = &obj;
        ptr -> 42;
    }
}

int main(){
    
    return 0;
}
```
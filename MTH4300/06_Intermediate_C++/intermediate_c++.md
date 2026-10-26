## Initialization Lists

``` cpp
class Example {
private:
    int a;
    int b;
    const int c;     // Const member
    int &ref;        // Reference member

public:
    // Constructor with an initialization list
    Example(int x, int y, int z, int& reference) : a(x), b(y), c(z), ref(reference) {
        // The constructor body can still perform other operations if needed
    }

    void display() {
        std::cout << "a: " << a << ", b: " << b << ", c: " << c << ", ref: " << ref << std::endl;
    }
};
```

### Why use Initialization Lists
- Efficiency - More efficient than assigning values inside the constructor body because the members are initialized directly, rather than being default-initialized and then assigned new values.

- Const and Reference Members

---
## L-Values vs. R-Values

```cpp
int x = 10 // x is a lvalue
x = 20

int y = x + 5; // x + 5 is an rvalue
```
L-value - An object that has a persistent, identifiable memory address. It has a permanent spot in memory

R-Value - A temporary valye that does not have its own persistent memory location.

---
## L-Value References (T&)
``` cpp
int a = 5;
int& ref = a //creating ref a reference (alias) to an int
ref = 10;
```
---

## R-Value References (T&&)
```cpp
int&& rref = 10;
rref = 20;
```

---

### Const in C++

Keyword to define constant values, meaning values that cannot be changed after they are initialized
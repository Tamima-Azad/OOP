//Inline function
#include <iostream>

class MyClass {
private:
    int privateData;

public:
    // Inline member function declaration and definition inside the class
    inline void setPrivateData(int data) {
        privateData = data;
    }

    void displayPrivateData() {
        std::cout << "Private data: " << privateData << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.setPrivateData(10); // Call to inline member function

    obj.displayPrivateData();

    return 0;
}

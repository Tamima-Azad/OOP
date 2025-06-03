/*#include<bits/stdc++.h>
using namespace std;
class Bus
{
    public:
    void fuelAmount();
    void capacity();
    void applyBrakes();
};

class Car
{
    public:
    void fuelAmount();
    void capacity();
    void applyBrakes();
};
class Truck
{
    public:
    void fuelAmount();
    void capacity();
    void applyBrakes();
};
int main()
{
    Bus e1;
    e1.fuelAmount();
    e1.capacity();
    e1.applyBrakes();
}
*/
#include<bits/stdc++.h>
using namespace std;

class Bus {
public:
    void fuelAmount();
    void capacity();

    void applyBrakes();
};

class Car {
public:
    void fuelAmount();
    void capacity();

    void applyBrakes();
};

class Truck {
public:
    void fuelAmount();
    void capacity();

    void applyBrakes();
};

int main() {
    Bus b;
    Car c;
    Truck t;

    b.fuelAmount();
    b.capacity();
    b.applyBrakes();

    c.fuelAmount();
    c.capacity();
    c.applyBrakes();

    t.fuelAmount();
    t.capacity();
    t.applyBrakes();

    return 0;
}

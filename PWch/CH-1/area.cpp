#include <iostream>
using namespace std;
int main() {
    float radius, area;
    double PI = 3.1415;
    cout << "Enter the radius of circle: ";
    cin >> radius; //>>
    area = PI * radius * radius;
    cout << "Area of circle is: " << area;
    return 0;
}

//% operator is to get the remainder 

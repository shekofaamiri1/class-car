#include <iostream>
#include <vector>
#include <string>
class Car {
private:
    std::string model;
    int year;
    double price;

public:
    // Constructor
    Car(std::string m, int y, double p) : model(m), year(y), price(p) {}



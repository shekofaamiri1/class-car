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
std::string getModel() const {
        return model;
    }
     int getYear() const {
        return year;
    }
     double getPrice() const {
        return price;
    }
    // Mutator functions
    void setModel(const std::string& m) {
        model = m;
    }
     void setYear(int y) {
        if (y > 1885 && y <= 2025)
            year = y;
    }
    void setPrice(double p) {
        if (p >= 0)
            price = p;
    }
     // Display car info
    void display() const {
        std::cout << "Model: " << model << ", Year: " << year << ", Price: " << price << " Toman" << std::endl;
    }
};
class CarGarage {
private:
    std::vector<Car> cars;
public:
    void addCar(const Car& car) {
        cars.push_back(car);
    }
     void showAllCars() const {
        if (cars.empty()) {
            std::cout << "Garage is empty." << std::endl;
            return;
        }
        for (size_t i = 0; i < cars.size(); ++i) {
            std::cout << "Car " << i+1 << ": ";
            cars[i].display();
        }
    }


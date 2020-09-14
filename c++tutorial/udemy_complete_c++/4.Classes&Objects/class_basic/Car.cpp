#include "Car.h"
#include <iostream>


//Constructor definitoin

Car::Car(){
    fuel = 0;
    speed = 0;
    passengers = 0;

}

// Function definitions in Car.cpp
void Car::FillFuel(float amount){
    fuel = amount;
}

void Car::Accelerate(){
    speed++;
    fuel -= 0.5f;
}

void Car::Brake(){
    speed = 0;
}

void Car::AddPassengers(int count){
    passengers = count;
}

void Car::Dashboard(){
    std::cout << "Fuel: " << fuel << std::endl;
    std::cout << "Speed: " << speed << std::endl;
    std::cout << "Passengers: " << passengers << std::endl;
}



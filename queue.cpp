//
//  queue.cpp
//  Stack & Queue Practice
//
//  Created by Garrett Gelinas on 9/9/21.
//

#include "queue.hpp"
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Car {
private:
    string model;

public:
    Car(string model):
    model(model) {
        
    }
    
    // Destructor method for Car
    ~Car() {
        
    }
    void print() {
        cout << model << endl;
    }
};

int main() {
    queue<Car> carQueue;
    
    // Adding Cars to the queue
    carQueue.push(Car("Honda"));
    carQueue.push(Car("Toyota"));
    carQueue.push(Car("Ferrari"));
    
    cout << endl;
    
    // "First-in First-out" the queue will print in the order as they were added
    while(carQueue.size() > 0) {
        Car &car = carQueue.front();
        car.print();
        carQueue.pop();
    }
    
    
    return 0;
}

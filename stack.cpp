//
//  stack.cpp
//  Stack Practice
//
//  Created by Garrett Gelinas on 9/8/21.
//

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
    stack<Car> carStack;
    
    // Adding Cars to the stack
    carStack.push(Car("Honda"));
    carStack.push(Car("Toyota"));
    carStack.push(Car("Ferrari"));
    
    cout << endl;
    
    // Popping objects off the stack - prints top to bottom
    while(carStack.size() > 0) {
        Car &car = carStack.top();
        car.print();
        carStack.pop();
    }
    
    
    return 0;
}

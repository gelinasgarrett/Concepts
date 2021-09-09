//
//  Sorting Vector.cpp
//
//  Created by Garrett Gelinas 
//

#include "Sorting Vector.hpp"
#include <iostream>
#include <vector>
using namespace std;

class Dog {
    int tagId;
    string name;

public:
 Dog(int tagId, string name): tagId(tagId), name(name) {}

void print() {
    cout << "Dog tag: " << tagId << " belonging to: " << name << endl;
}
    friend bool comp(const Dog &a, const Dog&b);
};

bool comparison(const Dog &a, const Dog &b){
    return a.name < b.name;
}

int main() {
    vector<Dog> dogs;
    
    dogs.push_back(Dog(2872, "Bruno"));
    dogs.push_back(Dog(52, "Bowser"));
    dogs.push_back(Dog(398, "Karl"));
    dogs.push_back(Dog(6912, "Hangry"));
    
    sort(dogs.begin(), dogs.end(), comparison(<#const Dog &a#>, <#const Dog &b#>));
    
    for(int i=0; i<dogs.size(); i++){
        dogs[i].print();
    }

    return 0;
}


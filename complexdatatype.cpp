//
//  complexdatatype.cpp
//  Created by Garrett Gelinas
//

#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, vector<int> > iq;
    iq["John"].push_back(140);
    iq["William"].push_back(97);
    iq["Beck"].push_back(103);
    
    for(map<string, vector<int> >::iterator it=iq.begin(); it != iq.end(); it++){
        string name = it->first;
        vector<int> iqList = it->second;
        cout << name << ": " << flush;
        
        for(int i=0; i < iqList.size(); i++) {
            cout << iqList[i] << " " << flush;
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>
#include "Language/Identifiers/ClassIdentifier.h"
#include "Parsing/Parser.h"
using namespace std;

int main() {

    string test = "dafsddfasdfasdfasdfas\nsdfgsdfgsdfgsdfgsdfgsd\nsdfgsdfgsdfgsdfgdsfg\nsdfgsdfgsdfgds\nsdfgsdfgs";

    cout << test << endl;

    vector<string> v = Parser::SplitIntoVector(test);

    for(unsigned int x = 0; x < v.size(); x++){
        cout << v[x] << ",";
    }

    cout << endl;

    cout << "LETS TEST THIS MOFO" << endl;


    return 0;
}
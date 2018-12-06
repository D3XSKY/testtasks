//
//  animal.hpp
//  test2 exercise
//
//  Created by Dejan Misic on 06/12/2018.
//  Copyright © 2018 Dejan Misic. All rights reserved.
//

#ifndef animal_hpp
#define animal_hpp

#include <stdio.h>
#include <iostream>
#include <string>
// code below gets generated when new c++ class file is added so I tried to mimic the syntax but I’m not 100% s//ure

using namespace std;
class Animal{
public:
    Animal();
    string getAnimalName(string& name) const;
    int getNumberOfLegs(int& legs) const;
    char getAnimalSex(char& sex) const;
    string getAnimalSound(string& sound) const;
    void setAnimalName(string name);
    void setNumberOfLegs(int legs);
    void setAnimalSex(char sex);
    void setAnimalSound(string sound);
private:
    string name; // nameo f aniaml
    int nrOfLegs; // number of animal legs
    char animalsex; // it will take either f or m as input so we can distinguish if animal is male or female
    string sound; // sound that animal makes
};
#endif /* animal_hpp */


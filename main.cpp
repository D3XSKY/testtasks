//
//  main.cpp
//  test2 exercise
//
//  Created by Dejan Misic on 06/12/2018.
//  Copyright © 2018 Dejan Misic. All rights reserved.
//
#include "animal.hpp"
#include "tasktwo.hpp"
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main(int argc, const char * argv[]) {
    string name;
    string sound;
    int legs;
    char sex;
    Animal a1;
    cout << a1.getAnimalName(name) << "\n" << a1.getNumberOfLegs(legs) << "\n" << a1.getAnimalSex(sex)
     << "\n" << a1.getAnimalSound(sound)<< endl;
    a1.setAnimalSex('s');
    a1.setAnimalName("dejan");
    a1.setAnimalSound("rrrrrrrr");
    a1.setNumberOfLegs(4);
    cout << a1.getAnimalName(name) << "\n" << a1.getNumberOfLegs(legs) << "\n" << a1.getAnimalSex(sex)
     << "\n" << a1.getAnimalSound(sound)<< endl;
    cout << "\n\n\n";
    tasktwo::TaskTwo();
    
    return 0;
}

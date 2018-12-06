//
//  animal.cpp
//  test2 exercise
//
//  Created by Dejan Misic on 06/12/2018.
//  Copyright © 2018 Dejan Misic. All rights reserved.
//
// file - animal.cpp - this is where our logic is implemented
// to begin with we’ll be first including animal.hpp
#include <stdio.h>
#include <iostream>
#include <string>
#include "animal.hpp"

using namespace std;
// logic for constructor, constructor doesn’t take any parameters but will assign default values when object of// class Animal is created
Animal::Animal(){
    name = "";
    nrOfLegs = 0;
    animalsex = 'm'; // or 'm' as default value to be male
    sound = "";
}
string Animal::getAnimalName(string& namez) const{
    
    return namez= name;
}
int Animal::getNumberOfLegs(int& legy) const{
    return legy = nrOfLegs;
}
char Animal::getAnimalSex(char& sex) const{
    return sex = animalsex;
}
string Animal::getAnimalSound(string& soundy) const{
    return soundy= sound;
}
void Animal::setAnimalName(string namez){
     name = namez;
}
void Animal::setNumberOfLegs(int legs){
    nrOfLegs = legs;
}
void Animal::setAnimalSex(char sex){ // here we would hae to handle and limit user to entering only 'f' or 'm' char
    animalsex = sex;
}
void Animal::setAnimalSound(string sounds){
    sound = sounds;
}

//
//  tasktwo.cpp
//  test2 exercise
//
//  Created by Dejan Misic on 06/12/2018.
//  Copyright © 2018 Dejan Misic. All rights reserved.
//

#include "tasktwo.hpp"
#include <stdio.h>
#include <string>
#include <algorithm>
#include <iostream>
#include <stdlib.h>     /* srand, rand */
using namespace std;

void tasktwo::TaskTwo(){
    
    // first we need to declare dynamic array
    int *intArray = 0;
    int arraySize= 30;
    // after array
    intArray = new int[arraySize];
    
    int * P23 = 0;
    
    
    for (int i =0; i< arraySize; i++){
        // getting 30 integers from the user
            int iSecret = rand() % 100 + 1;
        intArray[i] = iSecret;
        cout << "Array index: "<< i << "Array index value: " <<  intArray[i];
        cout << endl;
    }
    // now when we have int values inside of our int array we’ll make p23 pointer to point to 23th member of an arr//ay
    
    P23 = &intArray[23]; // this pointer holds reference to the memory address of 23th element of intArray
    // in order to output value of 24th element we’ll be doing p23+1 and then outputing its value
    
    P23 = P23 +1;
    
    cout << "Value of 24th element of intArray is: " << *P23 << endl;
    // I think that another way to do this can be
    //cout <<  *( P23+1);
    
}
    


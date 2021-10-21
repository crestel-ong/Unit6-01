// Copyright (c) 2021 Crestel Ong All rights reserved
//
// Created by: Crestel Ong
// Created on: October 2021
// This is average program in C++

#include <iostream>
#include <random>


main() {
    // this program prints out 10 random #s 1-100 and prints their average
    // this function uses arrays

    int allNumbersList[10];
    int randomSingleNumber;
    int average;
    int loopCounter;
    int allNumbersAdded;
    int manyloops;

    // process and process

    // this gets the random numbers
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(1, 100);

    for (int loopCounter = 0; loopCounter < 10; loopCounter++) {
        randomSingleNumber = idist(rgen);  // putting the random gen # into var
        // putting this new random gen # into array
        allNumbersList[loopCounter] = randomSingleNumber;

    // print out random numbers
    std::cout << "The random number is : " << randomSingleNumber << std::endl;
    // https://www.tutorialspoint.com/array-sum-in-cplusplus-stl
    // add the newly generated number to the previously gen # aka get sum
    // of all the generated numbers
    allNumbersAdded = allNumbersAdded + randomSingleNumber;
    }
    // get the number of items inside the array and put it in a variable
    int arrSize = sizeof(allNumbersList)/sizeof(allNumbersList[0]);
    // average equal to sum of all numbers by how many numbers were generated
    average = allNumbersAdded / arrSize;
    std::cout << " " << std::endl;
    std::cout << "The average is : " << average << std::endl;
    std::cout << "\nDone." << std::endl;
}

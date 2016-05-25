// Reference: http://stackoverflow.com/questions/5476616/stringstream-string-to-int
//              Stringstream to INT

#include "activator.h"

unsigned int Activator::getPrime(unsigned int whichPrime) {
    // Finally had to find a code I couldn't figure out.
    // Got this from Doctor Google. I modified it to fit this project.
    // http://www.cplusplus.com/forum/beginner/114912/
    int y, p=2, n, counter;
    y = whichPrime;
    
    if(y==1) return 2;
    if(y==2) return 3;
    for(int x=5;x<200000;x+=2) {
        counter = 0;
        for(n=2;n<x;n++){
            if(x%n != 0)
                counter++;
            if(counter == (x-2)) {
                p++;
                if(p==y)
                    return x;
            }
        }
    }
}

unsigned int Activator::sumTheDigits(unsigned int value) {
    int sum = 0;
    int newSum = 0;
    while(value > 0) {
        sum += value % 10;
        value /= 10;
    }
    while(sum > 0) {
        newSum += sum % 10;
        sum /= 10;
    }
    return newSum;
}
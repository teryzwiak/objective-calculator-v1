//
//  calculator.cpp
//  Objective_calculator
//
//  Created by Patryk Józwiak on 22/03/2020.
//

#include <iostream>
#include "headfun.h"

using namespace std;

float Calculator::addition()
{
    sum = x + y;
    cout<<"The result is: "<<endl;
    return sum;
}
float Calculator::substraction()
{
    sum = x - y;
    cout<<"The result is: "<<endl;
    return sum;
}
float Calculator::multiplication()
{
    sum = x * y;
    cout<<"The result is: "<<endl;
    return sum;
}
float Calculator::division()
{
    sum = x / y;
    cout<<"The result is: "<<endl;
    return sum;
}

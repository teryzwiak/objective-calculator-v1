//
//  main.cpp
//  Objective_calculator
//
//  Created by Patryk Józwiak on 22/03/2020.
//

#include <iostream>
#include "headfun.h"

using namespace std;

int main() {
    Calculator numbers;
    int c;
    bool exit = false;
    cout<<"============================"<<endl;
    cout<<"Choose numbers to calculate"<<endl;
    cout<<"============================"<<endl;
    cout<<"Choose first number to calculate:"<<endl;
    cin>>numbers.x;
    cout<<endl;
    cout<<"Choose second number to calculate:"<<endl;
    cin>>numbers.y;
    cout<<endl;
    do{
    cout<<"Choose an operation[1 - addition, 2 - substraction, 3 - multiplication, 4 - division, 5 - exit]:"<<endl;
    cin>>c;
        if (c == 1) {
            cout<<numbers.addition()<<endl;
        }
        else if(c == 2) {
            cout<<numbers.substraction()<<endl;
        }
        else if (c == 3){
            cout<<numbers.multiplication()<<endl;
        }
        else if (c == 4){
            cout<<numbers.division()<<endl;
        }
        else
        {
            exit = true;
        }
    }while(exit == false);
    
    return 0;
}

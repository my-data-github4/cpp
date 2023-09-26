#include "./menu.h"
#include<iostream>
using namespace std;
Emenu menu(){
    int choice;
    cout<<"><><><><><><><><><MENU><><><><><><><><><><"<<endl;
    cout<<"0. EXIT"<<endl;
    cout<<"1. For enter the radius and height."<<endl;
    cout<<"2. Know the volume"<<endl;
    cout<<"3. Initialize the value using radius and height is equal to 2"<<endl;
    cout<<"Enter your choice 😉:"<<endl;
    cin>>choice;
    return Emenu(choice);
};
#include<iostream>
using namespace std;

int factorial(int x){
    if(x<0)
        throw 1;
    else if(x==0)
        return 1;
    else
        return x*factorial(x-1);
}
int main(){
    int fact,result;
    cout<<"enter the no. which you want the factorial : "<<endl;
    cin>>fact;
    try
    {
        result=factorial(fact);
        cout<<"Factorial of " <<fact<<" is "<<result<< endl;
        cout<<"Successful Execution" << endl;
    }
    catch(int error)
    {
        cout<<"ERROR : Exception Occured "<<endl;
        cout<<"negative number factorial is not possible "<<endl;
    }
    return 0;
}





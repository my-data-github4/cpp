#include<iostream>
using namespace std;

class Time{
    private:
        int h;
        int m;
        int s;

    public:
        void acceptValue(){
            cout<<"ENTER VALUE OF h"<<endl;
            cin>>this->h;
            cout<<"ENTER VALUE OF m"<<endl;
            cin>>this->m;
            cout<<"ENTER VALUE OF s"<<endl;
            cin>>this->s;
        }
        void displayValue(){
            cout<<"hour :"<<h<<endl;
            cout<<"minute :"<<h<<endl;
            cout<<"hour :"<<h<<endl;
        }
        int getHour(int h){
            return this->h;
        }
        int getMinute(int m){
            return this->m;
            
        }
        int getSeconds(int s){
            return this->s;
        }
        void setHour(){
            this->h=h;
        }
        void setMinute(){
            this->m=m;
        }
        void setSeconds(){
            this->s=s;
        }
};

int main(){
    Time **arr = new Time *[5];
    // dynamic memory allocation for objects
    for (int i = 0; i < 5; i++)
    {
        /* code */
        arr[i] = new Time();
    }
    //keeping dummy values in the array of objects  
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter the values of time :"<<endl;
        arr[i]->acceptValue();

    }
    for (int i = 0; i < 5; i++)
    {
        /* printing the values*/
        arr[i]->displayValue();
    }
    
    for (int i = 0; i < 5; i++)
    {
        /* code */
        delete[] arr[i];
    }
    delete[] arr;
    

}
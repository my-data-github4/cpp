#include<iostream>
using namespace std;

class box{
private:
    int length;
    int breadth;
    int width;

public:
    box(){
        this->length=length;
        this->breadth=breadth;
        this->width=width;
    };
    void accept(){
        cout<<"Enter the length : "<<endl;
        cin>>length;
        cout<<"Enter the breadth : "<<endl;
        cin>>breadth;
        cout<<"Enter the width : "<< endl;
        cin>>width;
    };
    int volume(){
        return length*breadth*width;
    };
    
};

int main(){
    box b;
    
    int choice;
    do
    {
        /* code */
        cout<<"====================MENU===================="<<endl;
        cout<<"0. Exit"<<endl<<"1. input your value."<<endl<<"2. know the volume."<<endl;
        cout<<"Enter your Choice : "<<endl;
        cin>>choice;
        cout<<"_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;

        switch (choice)
        {
        case 1:
            b.accept();
            break;
        case 2:
            cout<<"volume of box is :"<<b.volume()<<endl;
        default:
            break;
        }
    } while (choice !=0);
    

}
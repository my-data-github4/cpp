#include<iostream>
using namespace std;

class tollbooth{
    private:
        double cash;
        unsigned int no_of_cars;
    public:
        tollbooth(){
            this->no_of_cars=0;
            this->cash=0;
        };
        void payingCar(){
            no_of_cars++;
            cash+=0.50;
        }
        void noPayCar(){
            no_of_cars++;
        }
        void printOnConsole(){
            cout<<"number of total cars : "<<no_of_cars<<endl;
            cout<<"Total Cash : "<<cash<<"$"<<endl;
            cout<<"number of paid cars : "<<cash/0.5<<endl;
            cout<<"number of no-paid cars : "<<no_of_cars-(cash/0.5)<<endl;
        }
};
int menu(){
    int choice;
    cout<<"==============MENU============"<<endl;
    cout<<"0. EXIT"<<endl<<"1. Pay by the Car"<<endl<<"2. Do not pay by the Car"<<endl<<"3. show details"<<endl;
    cout<<"Enter the choice "<<endl;
    cin>>choice;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    return choice;
};

int main(){
    tollbooth t;
    int ch;
    while ((ch = menu() )!=0)
    {
        switch (ch)
        {
        case 1:
            t.payingCar();
            break;
        case 2:
            t.noPayCar();
            break;

        case 3:
            t.printOnConsole();
            break;
        default:
            break;
        }
    }
}
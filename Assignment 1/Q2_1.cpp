#include<iostream>
using namespace std;
class Date{
    private:
    //data members
        int day;
        int month;
        int year;
    public:
    //member function
    void acceptDateFromConsole(){
        cout<<"Enter the day of the date: \n";
        cin>>day;
        cout<<"Enter the month of the date: \n";
        cin>>month;
        cout<<"Enter the year of the date: \n";
        cin>>year;
    };
    void initDate(){
        day=13;
        month=10;
        year=2000;
    };
    void printDateOnConsole(){
        cout<<"The date is:"<<day<<month<<year;

    };
    bool isLeapYear(){
        if((year%4==0 && year%100!=0)||year%400==0)
            return true;
        return false;
    };
};
int main(){
    Date d1;
    int choice;
    do{
        cout<<"\n0. EXIT \n1. Add date \n2. Initialize Date \n3. Show date \n4. Check is a leap or not\n";
        cout<<"Enter your choice : \n";
        cin>>choice;
        switch (choice)
        {
        case 1:
            d1.acceptDateFromConsole();
            break;
        case 2: 
            d1.initDate();
            break;
        case 3:
            d1.printDateOnConsole();
            break;
        case 4:
            if (d1.isLeapYear())
                cout<<"It is a LEAP year.";
            else
                cout<<"It is not a LEAP year.";
            break;
        default:
            break;
        }  
    }while (choice!=0); 

}
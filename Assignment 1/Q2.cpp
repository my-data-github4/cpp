#include<iostream> 
//#include<stdio.h>
using namespace std;
struct Date{
    int day;
    int month;
    int year;

    void acceptDateFromConsole(){
        printf("Enter the day of the date: \n");
        scanf("%d",&day);
        printf("Enter the month of the date: \n");
        scanf("%d",&month);
        printf("Enter the year of the date: \n");
        scanf("%d",&year);
    }
    void initDate(){
    day= 13;
    month=10;
    year=2000;
    }
    void printDateOnConsole(){
    printf("the date is: %d/%d/%d",day,month,year);
    }
    bool isLeapYear(){
    //bool is = true;
    if((year%4==0 && year%100!=0)||year%400==0)
        return true;
    return false;
    }

};

int main(){
    struct Date ptrDate;
    ptrDate.initDate();
    int choice;
    do{
        printf("\n0. EXIT \n1. Add date \n2. Initialize Date \n3. Show date \n4. Check is a leap or not\n");
        printf("Enter your choice : \n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            ptrDate.acceptDateFromConsole();
            break;
        case 2: 
            ptrDate.initDate();
            break;
        case 3:
            ptrDate.printDateOnConsole();
            break;
        case 4:
            if (ptrDate.isLeapYear())
                printf("It is a LEAP year.");
            else
                printf("It is not a LEAP year.");
        default:
            break;
        }  
    }while (choice!=0); 
     
}








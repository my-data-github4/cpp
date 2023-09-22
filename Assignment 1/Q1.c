#include<stdio.h>
struct Date{
    int day;
    int month;
    int year;
};
void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);
int main(){
    struct Date ptrDate;
    initDate(&ptrDate);
    int choice;
    do{
        printf("\n0. EXIT \n1. Add date \n2. Initialize Date \n3. Show date \n");
        printf("Enter your choice : \n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            acceptDateFromConsole(&ptrDate);
            break;
        case 2: 
            initDate(&ptrDate);
            break;
        case 3:
            printDateOnConsole(&ptrDate);
            break;
        default:
            break;
        }  
    }while (choice!=0); 
     
}

void acceptDateFromConsole(struct Date* ptrDate){
    printf("Enter the day of the date: \n");
    scanf("%d",&ptrDate->day);
    printf("Enter the month of the date: \n");
    scanf("%d",&ptrDate->month);
    printf("Enter the year of the date: \n");
    scanf("%d",&ptrDate->year);
}
void initDate(struct Date* ptrDate){
    ptrDate->day= 13;
    ptrDate->month=10;
    ptrDate->year=2000;

}
void printDateOnConsole(struct Date* ptrDate){
    printf("the date is: %d/%d/%d",ptrDate->day,ptrDate->month,ptrDate->year);

}

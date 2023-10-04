#include<iostream>
using namespace std;

class Date
{
private:
    // data members
    int day;
    int month;
    int year;
public:
    Date(){
        this->day=0;
        this->month=0;
        this->year=0;
    };
    Date(int day,int month,int year){
        this->day=day;
        this->month=month;
        this->year=year;
    };
    int get_day(){
        return this->day;
    }
    void set_day(int day){
        this->day=day;
    }
    int get_month(){
        return this->month;
    }
    void set_month(int month){
        this->month=month;
    }
    int get_year(){
        return this->year;
    }
    void set_year(int year){
        this->year=year;
    }

    void display(){
        cout<<day<<"/"<<month<<"/"<<year<<endl;
        if (is_leap_year())
            cout<<"     It's a leap year"<<endl;
        else
            cout<<"     It is not a leap year"<<endl;
    }
    void accept(){
        cout<<"Enter the day : "<<endl;
        cin>>day;
        cout<<"Enter the month : "<<endl;
        cin>>month;
        cout<<"Enter the year : "<<endl;
        cin>>year;

    }

    bool is_leap_year(){
        if ((get_year()%4==0 && get_year()%100!=0)||(get_year()%400==0))
            return true;
        return false;
    }
    //~Date();
};

class Person
{
    private:
        string name;
        string addr;
        Date Dob;
    public:
        Person(){
            this->name="";
            this->addr="";
            this->Dob=Date();
        }
        Person(string name, string addr, int day,int month,int year):Dob(day,month,year){
            this->name=name;
            this->addr=addr;
        }
        string get_name(){
            return this->name;
        }
        void set_name(string name){
            this->name=name;
        }
        string get_addr(){
            return this->addr;
        }
        void set_addr(string addr){
            this->addr=addr;
        }
        Date& get_Dob(){
            return this->Dob;
        }
        void set_Dob(Date &Dob){
            this->Dob=Dob;
        }
        void display(){
            cout<<"Name : "<<name<<endl;
            cout<<"Address : "<<addr<<endl;
            cout<<"Birth date : ";
            Dob.display();
        }
        void accept(){
            cout<<"Enter the name : "<<endl;
            cin>>name;
            cout<<"Enter your address : "<<endl;
            cin>>addr;
            cout<<"Enter your Birth Date : "<<endl;
            Dob.accept();
        }
};

class Employee : public Person
{
    private:
        int id;
        int sal;
        string dept;
        Date joining;

    public:
        Employee(){
            this->id=0;
            this->sal=0;
            this->dept="";
        }
        Employee(int id,int sal,string dept,int day,int month,int year):joining(day,month,year)
        {
            this->id=id;
            this->sal=sal;
            this->dept=dept;
        }
        int get_id(){
            return this->id;
        }
        void set_id(int id){
            this->id=id;
        }
        int get_sal(){
            return this->sal=sal;
        }
        void set_sal(int sal){
            this->sal=sal;
        }
        string get_dept(){
            return this->dept;
        }
        void set_dept(string dept){
            this->dept=dept;
        }
        Date& get_joining(){
            return this->joining;
        }
        void set_joining(Date &joining){
            this->joining=joining;
        }
        void display(){
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            Person::display();
            cout<<"Person's Employee id is : "<<id<<endl;
            cout<<"Person's Employee Salary is : "<<sal<< endl;
            cout<<"Joining date of employee : ";
            joining.display();
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        }
        void accept(){
            Person::accept();
            cout<<"Enter Person's Employee id : "<<endl;
            cin>>this->id;
            cout<<"Enter Person's Employee Salary is : "<<endl;
            cin>>this->sal;
            cout<<"Enter the joining date : "<<endl;
            joining.accept();
        }
};

int main(){
    // Employee e1;
    // e1.accept();
    // e1.display();

    // Person p1;
    // //p1.accept();
    // p1.set_Dob();
    // cout<<"Dob";
    // p1.get_Dob();
    // //p1.display();
    Employee E1;
    E1.get_Dob().set_day(12);
    cout<<E1.get_Dob().get_day();

    // Date E1;
    // E1.set_day(12);
    // cout<<E1.get_day();

    return 0;
}
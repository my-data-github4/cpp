#include<iostream>
using namespace std;

class Date{
    private:
        int day;
        int month;
        int year;
    public:
        Date(){
            this->day=0;
            this->month=0;
            this->year=0;
        }
        Date(int day,int month, int year){
            this->day=day;
            this->month=month;
            this->year=year;
        }
        int get_day(){
            return this->day;
        }
        int get_month(){
            return this->month;
        }
        int get_year(){
            return this->year;
        }
        void set_day(int day){
            this->day=day;
        }
        void set_month(){
            this->month=month;
        }
        void set_year(){
            this->year=year;
        }
        void accept()
        {
            cout << "Enter the day = ";
            cin >> this->day;
            cout << "Enter the month = ";
            cin >> this->month;
            cout << "Enter the year = ";
            cin >> this->year;
        }
        void display()
        {
            cout << this->day << "/" << this->month << "/" << this->year << endl;
            if (is_leap_year())
            {
                cout<<"It is a leap year!!!"<<endl;
            }
            else
                cout<<"It is not a leap year!!!"<<endl;
            
        }

        bool is_leap_year(){
            int y =get_year();
            if ((y%4==0) && (y%100!=0) || (y%400==0))
                return true;
            else
                return false;
        }
};

class Employee{
    private:
        int id;
        float sal;
        string dept;
        Date joining; 
    public:
        Employee(){
            this->id=0;
            this->sal=0;
            this->dept="";
        }

        Employee(int id, float sal, string dept, int day, int month, int year):joining(day,month,year)
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
            return this->sal;
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
        Date get_joining_date(){
            return joining;
        }
        void set_joining_date(Date joining){
            this->joining=joining;
        }
        void accept()
        {
            cout << "Enter empid = ";
            cin >> this->id;
            cout << "Enter salary = ";
            cin >> this->sal;
            cout << "Enter Dept = ";
            cin >> this->dept;
            
            cout << "Enter Date Of joining :- "<< endl;
            joining.accept();
        }

        void display()
        {
            cout<<"><><><><><><><><><><><>><><><><><><"<<endl;
            cout << "Empid = " << this->id << endl;
            cout << "Name = " << this->dept << endl;
            cout << "Salary = " << this->sal << endl;
            cout << "Date of joining = ";
            joining.display();
        }
};

class Person
{
    private:
        string name;
        string addr;
        Date DOB;
    public:
        Person(){
            this->name="";
            this->addr="";
        };
        string get_name(){
            return this->name;
        }
        string get_addr(){
            return this->addr;
        }
        void set_name(string name){
            this->name=name;
        }
        void set_addr(string addr){
            this->addr=addr;
        }
        Date get_DOB(){
            return this->DOB;
        }
        void set_DOB(Date DOB){
            this->DOB=DOB;
        }
        void accept()
        {
            cout << "Enter name : ";
            cin >> this->name;
            cout << "Enter address : ";
            cin >> this->addr;
            cout << "Enter Date Of Date of birth : " << endl;
            DOB.accept();
        }

        void display()
        {
            cout<<"><><><><><><><><><><><>><><><><><><"<<endl;
            cout << "Empid = " << this->name << endl;
            cout << "Name = " << this->addr << endl;
            cout << "Date of joining = ";
            DOB.display();
        }
        ~Person();
};

int main(){
    Employee e1;
    e1.accept();
    e1.display();
    return 0;
}


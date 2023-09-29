#include<iostream>
using namespace std;

class Employee
{
    private:
        int id;
        float sal; 
    public:
        Employee(){
            cout<<"Employee (base)constructor called"<<endl;
            this->id=0;
            this->sal=0;
        };
        Employee(int id,float sal){
            this->id=id;
            this->sal=sal;
        }
        int get_id(){
            return id;
        }
        float get_sal(){
            return sal;
        }
        void set_id(int id){
            this->id=id;
        }
        void set_sal(float sal){
            this->sal=sal;
        }
        void accept(){
            cout<<" Enter the employee id :"<<endl;
            cin>>id;
            cout<<" Enter the employee salary :"<<endl;
            cin>>sal;
        }

        void display(){
            cout<<"Employee Id : "<<id<<endl;
            cout<<"Employee Salary : "<<sal<<endl;
        }
};

class Manager : virtual public Employee
{
    private:
        float bonus;
    public:
        Manager(){
            //cout<<"Manager (derived_1) constructor called"<<endl;
            this->bonus=0;
        };
        Manager(float bonus){
            this->bonus=bonus;
        }
        float get_bonus(){
            return bonus;
        }
        void set_bonus(float bonus){
            this->bonus=bonus;
        } 
        void accept(){
            Employee::accept();
            cout<<" Enter the Employee bonus from Manager:"<<endl;
            cin>>bonus;
        }
        void display(){
            Employee::display();
            cout<<"Employee Bonus : "<<bonus<<endl;
        }
    protected:
        void acceptManager(){
            cout<<"Enter the Manager bonus :"<<endl;
            cin>>bonus;
        }
        
        void displayManager(){
            cout<<"Manager Bonus : "<<bonus<<endl;
        }

};

class Salesman : virtual public Employee
{
    private:
        float comm;
    public:
        Salesman(){
            //cout<<"Salesman (derived_2) constructor called"<<endl;
            this->comm=comm;
        };
        Salesman(float comm){
            this->comm=comm;
        }
        float get_comm(){
            return comm;
        }
        void set_comm(float comm){
            this->comm=comm;
        }
        void accept(){
            Employee::accept();
            cout<<"Enter the salesman Commission is : "<< endl;
            cin>>comm;
        }
        void display(){
            Employee::display();
            cout<<"Salesman COMMISSION is: "<<comm<<endl;
        }
    protected:
        void displaySalesman(){
            cout<<"Salesman COMMISSION is: "<<comm<<endl;

        }
        void acceptSalesman(){
            cout<<"Enter the salesman Commission is : "<< endl;
            cin>>comm;
        }
};

class Sales_manager : public Manager , public Salesman
{
public:
    Sales_manager(){
        //cout<<"Sales_manager (derived_3) constructor called"<<endl;
        //cout<<comm<<bonus<<id<<sal;
    }
    void display(){
        Employee::display();
        displayManager();
        displaySalesman();
    }
    void accept(){
        Employee::accept();
        acceptManager();
        acceptSalesman();
    }
};


int main(){
    // Sales_manager SM1;
    // SM1.accept();
    // cout<<"*********************************************"<<endl;
    // SM1.display();

    // Manager M1;
    // M1.accept();
    // cout<<"*********************************************"<<endl;
    // M1.display();

    // Salesman S;
    // S.accept();
    // cout<<"*********************************************"<<endl;
    // S.display();

    // Sales_manager SM2;
    // SM2.accept();
    // cout<<"*********************************************"<<endl;
    // SM2.display();

    Manager sm3;
    sm3.accept();
    cout<<"*********************************************"<<endl;
    sm3.display();

    
    return 0;
}



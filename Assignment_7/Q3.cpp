#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    float sal;
    string designation;

public:
    Employee()
    {
        cout << "Employee (base)constructor called" << endl;
        this->id = 0;
        this->sal = 0;
        this->designation = ' ';
    };
    Employee(int id, float sal, string designation)
    {
        this->id = id;
        this->sal = sal;
        this->designation = designation;
    }
    int get_id()
    {
        return id;
    }
    float get_sal()
    {
        return sal;
    }
    void set_id(int id)
    {
        this->id = id;
    }
    void set_sal(float sal)
    {
        this->sal = sal;
    }
    string get_designation(){
        return designation;
    }
    void set_designation(string designation){
        this->designation=designation;
    }
    void accept()
    {
        cout << " Enter the employee id :" << endl;
        cin >> id;
        cout << " Enter the employee salary :" << endl;
        cin >> sal;
    }
    void display()
    {
        cout << "Employee Id : " << id << endl;
        cout << "Employee Salary : " << sal << endl;
    }
    virtual ~Employee(){

    }
};

class Manager : virtual public Employee
{
private:
    float bonus;

public:
    Manager()
    {
        // cout<<"Manager (derived_1) constructor called"<<endl;
        this->bonus = 0;
        this->set_designation("Manager");
    };
    Manager(float bonus, string designation)
    {
        this->bonus = bonus;
        this->set_designation("Manager");
    }
    float get_bonus()
    {
        return bonus;
    }
    void set_bonus(float bonus)
    {
        this->bonus = bonus;
    }
    void accept()
    {
        Employee::accept();
        cout << " Enter the Employee bonus from Manager:" << endl;
        cin >> bonus;
    }
    void display()
    {
        Employee::display();
        cout << "Employee Bonus : " << bonus << endl;
    }

protected:
    void acceptManager()
    {
        cout << "Enter the Manager bonus :" << endl;
        cin >> bonus;
    }

    void displayManager()
    {
        cout << "Manager Bonus : " << bonus << endl;
    }

    virtual ~Manager(){}
};

class Salesman : virtual public Employee
{
private:
    float comm;

public:
    Salesman()
    {
        // cout<<"Salesman (derived_2) constructor called"<<endl;
        this->comm = comm;
        this->set_designation("Salesman");
    };
    Salesman(float comm)
    {
        this->comm = comm;
        this->set_designation("Salesman");
    }
    float get_comm()
    {
        return comm;
    }
    void set_comm(float comm)
    {
        this->comm = comm;
    }
    void accept()
    {
        Employee::accept();
        cout << "Enter the salesman Commission is : " << endl;
        cin >> comm;
    }
    void display()
    {
        Employee::display();
        cout << "Salesman COMMISSION is: " << comm << endl;
    }

protected:
    void displaySalesman()
    {
        cout << "Salesman COMMISSION is: " << comm << endl;
    }
    void acceptSalesman()
    {
        cout << "Enter the salesman Commission is : " << endl;
        cin >> comm;
    }

    virtual ~Salesman(){}
};

class Sales_manager : public Manager, public Salesman
{
public:
    Sales_manager()
    {
        // cout<<"Sales_manager (derived_3) constructor called"<<endl;
        // cout<<comm<<bonus<<id<<sal;
        this->set_designation("Sales_manager");
    }
    void display()
    {
        Employee::display();
        displayManager();
        displaySalesman();
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
        acceptSalesman();
    }

    virtual ~Sales_manager(){}
};

int menu()
{
    int choice;
    cout << "-----------------------------" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Accept Employee" << endl;
    cout << "2. Display the count of all employees with respect to designation" << endl;
    cout << "3. Display respective designation employees" << endl;
    // cout << "4. Display All Area" << endl;
    cout << "Enter Your Chocie = ";
    cin >> choice;
    cout << "-----------------------------" << endl;
    return choice;
}


int submenu(){
    int c1;
    cout<<"0. EXIT "<<endl;
    cout<<"1. Accept manager "<<endl;
    cout<<"2. Accept SalesMan "<<endl;
    cout<<"3. Accept SalesManager"<<endl;
    cout<<"Enter your choice : "<<endl;
    cin>>c1;
    return c1;
}

int main(){
    int choice,c1;
    int index=0;
    Employee *emp[10];
    int m=0,s=0,sm=0;

    while ((choice = menu())!=0)
    {
        switch (choice)
        {
        case 1:
            while ((c1 = submenu())!=0)
            {
            {    switch (c1)
                {
                    case 1:
                        if (index<10)
                        {
                            emp[index] = new Manager();
                            emp[index]->accept();
                            index++;
                            m++;
                        }
                        else
                            cout << "Staff is Full, Cannot add the Employee.." << endl;
                        break;
                    case 2:
                        {
                        if (index<10)
                        {
                            emp[index] = new Salesman();
                            emp[index]->accept();
                            index++;
                            s++;
                        }
                        else
                            cout << "Staff is Full, Cannot add the Employee.." << endl;
                        break;
                        }
                    case 3:
                        {
                        if (index<10)
                        {
                            emp[index] = new Sales_manager();
                            emp[index]->accept();
                            index++;
                            sm++;
                        }
                        else
                            cout << "Staff is Full, Cannot add the Employee.." << endl;
                        break;
                        }
                    default:
                        break;
                }
            }
            }
            break;
        
        case 2:
            //if(m>0&& s>0 && sm>0){
                cout<<"No. of Manager : "<<m<<endl;
                cout<<"No. of Salesman : "<<s<<endl;
                cout<<"No. of Sales Manager : "<<sm<<endl;
            //}
            //elseif

        case 3:
            for (int i = 0; i < index; ++i)
            {
                /* code */
                if (emp[i]->get_designation()=="Manager")
                {
                    /* code */
                    cout<<"Following employees are in the Manager designation : "<<endl;
                    cout<<emp[i]->get_id();
                }
                else if(emp[i]->get_designation()=="Salesman")
                {
                    cout<<"Following employees are in the Salesman designation : "<<endl;
                    cout<<emp[i]->get_id();
                }
                else if(emp[i]->get_designation()=="Sales_manager")
                {
                    cout<<"Following employees are in the Sales_manager designation : "<<endl;
                    cout<<emp[i]->get_id();
                }
            }
            
        default:
            break;
        }
        }
    for (int i = 0; i < index; ++i)
        delete emp[i];
    cout << "Thank you for using our app..." << endl;
    return 0;
}
    



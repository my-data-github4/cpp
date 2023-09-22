#include<iostream>
#include<string>
using namespace std;
class Address
{
    private:
    //Data members
        string building;
        string street;
        string city;
        int pin;
    public:
    //Member functions
    //constructor
    Address(){
        building= "Chaitanya Apartment.";
        street="Swami Vivekanand Road";
        city="Pune";
        pin=441331;
    }
    Address(char* building,char* street,char* city,int pin){
        this->building=building;
        this->city=city;
        this->street=street;
        this->pin=pin;
    }
    
    // Mutators -> setters
    void setpin(int pin)
    {
        this->pin = pin;
    }
    void setbuilding(char* building){
        this->building = building;
    }
    void setstreet(char* street){
        this->street = street;
    }
    void setcity(char* city){
        this->city = city;
    }

    // Inspectors -> getters
    string getbuilding(){
        return this->building;
    }
    string getstreet(){
        return this->street;
    }
    string getcity(){
        return this->city;
    }
    int getpin()
    {
        return this->pin;
    }
    void accept()
    {
        cout<<"enter the building name: "<<endl;
        cin>>this->building;
        cout<<"enter the street: "<<endl;
        cin>>this->street;
        cout<<"enter the city: "<<endl;
        cin>>this->city;
        cout<<"enter the pin: "<<endl;
        cin>>this->pin;
    };
    void display()
    {
        cout<<getbuilding()<<endl;
        cout<<getstreet()<<endl;
        cout<<getcity()<<endl;
        cout<<getpin()<<endl;
    };
    

};
int main(){
    Address add;
    int choice;
    do
    {   cout<<"\n0. EXIT \n1. Add Address \n2. Initialize Address \n3. Show Address \n";
        cout<<"Enter your choice : \n";
        cin>>choice;
        switch (choice)
        {
        case 1:
            add.accept();
            break;
        case 2:
            add.display();
            break;
        case 3:
            add.display();
            break;
        default:
            break;
        }
    } while (choice!=0);
    

}
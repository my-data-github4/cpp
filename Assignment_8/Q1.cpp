#include<iostream>
using namespace std;

class Distance{
    private:
        int feet;
        int inches;
    public:
        Distance(){

        }
        Distance(int f,int i){
            this->feet=f;
            this->inches=i;
        }
        void displayDistance(){
            cout<<"Distance :"<<endl;
            cout<<"Feet = "<<feet<<" Inches = "<<inches<<endl;
            //cout<<"Inches = "<<inches<<endl;
        }

        int get_feet(){
            return feet;
        }
        int get_inches(){
            return inches;
        }
        void set_feet(int feet){
            this->feet=feet;
        }
        void set_inches(int inches){
            this->inches=inches;
        }
        Distance operator+(Distance d2)
        {
            Distance result; 
            result.feet=this->feet+d2.feet;
            result.inches=this->inches+d2.inches;
            return result;
        }

        void operator ++()
        {
            this->inches=this->inches+1;
        }
        friend bool operator==(Distance d2,Distance d1);
        friend void operator --(Distance &d1);
        friend void operator<<(ostream& out, Distance &d);
        friend void operator>>(istream& in,Distance &d);
};

bool operator==(Distance d2,Distance d1){
    if (d1.feet==d2.feet && d1.inches==d2.inches)
        return true;
    return false;
};

void operator--(Distance &d1)
{
    d1.inches = d1.inches-1;
};

void operator<<(ostream& out,Distance &d){
    out<<"Distance : "<<d.feet<<" feet "<<d.inches<< " inches"<<endl;
}

void operator>>(istream& in,Distance &d){
    cout << "Enter the feet : ";
    in >> d.feet;
    cout << "Enter the inches : ";
    in >> d.inches;
}

int main(){
    // Distance d1(10,10);
    // Distance d2(20,20);
    // Distance result= d1+d2;
    // d1.displayDistance();
    // d2.displayDistance();
    // result.displayDistance();


    // bool result;
    // Distance d1(10,10);
    // Distance d2(10,10);
    // result = d1==d2;
    // cout<<result<<endl;


    // Distance d1(10,10);
    // d1++;
    // d1.displayDistance();


    // Distance d1(10,10);
    // cout<<"before increment : "; 
    // d1.displayDistance();
    // d1++;
    // cout<<"after increment : ";
    // d1.displayDistance();


    // Distance d1(10,10);
    // cout<<"before increment : "; 
    // d1.displayDistance();
    // --d1;
    // cout<<"after increment : ";
    // d1.displayDistance();
    

    // Distance d1(10,10);
    // cout<< d1;


    Distance d1;
    cin>>d1;

    return 0;
}

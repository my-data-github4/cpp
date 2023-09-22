#include<iostream>
using namespace std;
namespace NStudent{
    class student{
        private:
        //data members
        int roll_no;
        string name;
        int marks;
        public:
        //member function
        void initStudent(){
            roll_no = 80086;
            name = "Varad";
            marks = 24;
        };
        void printStudentOnConsole(){
            cout<<"Roll no.: "<<roll_no<<"\n"<<"Name: "<<name<<"\n"<<"Marks: "<<marks;
        };
        void acceptStudentFromConsole(){
            cout<<"Enter the Roll no.:";
            cin>>roll_no;
            cout<<"Enter the Name :";
            cin>>name;
            cout<<"Enter the Marks :";
            cin>>marks;
        };

    };
}

int main(){
    int choice;
    NStudent::student s1;
    s1.initStudent();
    do{
        cout<<"\n0. EXIT \n1. Add student \n2. Initialize student \n3. Show student \n";
        cout<<"Enter your choice : \n";
        cin>>choice;
        switch (choice){
            case 1:
                s1.acceptStudentFromConsole();
                break;
            case 2:
                s1.initStudent();
                break;
            case 3:
                s1.printStudentOnConsole();
                break;
            default:
                break;
        };
}while (choice!=0);
};


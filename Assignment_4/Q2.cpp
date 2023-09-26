#include<iostream>
using namespace std;

class Stack{
    private:
        int *arr;
        int size;
        int top =-1;
    public:
    Stack(int size):size(5){
        this->arr = new int[size];
    }
    void push(int input){
        this->top++;
        this->arr[top]=input;
    };
    void pop(){
        if (top<0){
            cout<<"Stack is empty!!"<<endl;
        }
        else {
            cout<< "popped element is : "<<this->arr[top--]<<endl;
        }

    };
    int peek(){
        return this->arr[top];
    };
    void isEmpty(){
        if (top<0)
            cout<<"stack is empty !!"<<endl;
        cout<<"stack is not empty!"<<endl;
    };
    void isFull(){
        if(top >= size - 1)
            cout<<"stack is FULL !!"<<endl;
        cout<<"stack is not FULL !"<<endl;
    }; 
    void print(){
        cout << "\nStack elements are: ";
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " "<<endl;
    };
    void setSize(int size){
        this->size=size;
    }
    int getSize(){
        return size;
    }
    ~Stack(){
        delete[] arr;

    }
};

int main(){
    Stack s1(5);
    s1.push(11);
    s1.push(22);
    s1.push(33);
    s1.pop();
    s1.peek();
    s1.push(44);
    s1.push(55);
    s1.isFull();
    s1.push(66);
    s1.isFull();
    s1.print();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.isEmpty();

    

    return 0;
}
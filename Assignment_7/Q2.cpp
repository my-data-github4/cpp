#include<iostream>
using namespace std;

class Product
{
    protected:
        int id;
        int price;
        string title;
        char type;
    public: 
        Product(){
            this->id=0;
            this->price=0;
            this->title="";
            this->type=' ';
        }
        Product(int id , int price, string title,char type){
            this->id=id;
            this->price=price;
            this->title=title;
            this->type=type;
        }
        int get_id(){
            return this->id;
        }
        void set_id(int id){
            this->id=id;
        }
        int get_price(){
            return this->price;
        }
        void set_price(int price){
            this->price=price;
        }
        string get_title(){
            return this->title;
        }
        void set_title(string title){
            this->title=title;
        }
        char get_type(){
            return this->type;
        }
        void set_title(char type){
            this->type=type;
        }
        virtual void accept()=0;
        virtual void display()=0;
        virtual void calculate()=0;
        //virtual ~Product();
};

class Book : public Product
{
    private:
        string author;
    public:
        Book(){
            this->author="";
            this->type='B';
        }
        Book(string author){
            this->author=author;
            this->type='B';
        }
        string get_author(){
            return this->author;
        }
        void set_author(){
            this->author=author;
        }
        void accept(){
            //Product::accept();
            cout<<"Enter the id : "<<endl;
            cin>>this->id;
            cout<<"Enter the price : "<<endl;
            cin>>this->price;
            cout<<"Enter the Title : "<<endl;
            cin>>this->title;
            cout<<"Enter the author name : "<<endl;
            cin>>this->author;
        }
        void display(){
            cout<<"Product ID : "<<this->id<<endl;
            cout<<"Product price : "<<this->price<<endl;
            cout<<"Product title : "<<this->title<<endl;
            cout<<"Author name is "<<this->author<<endl;
        }
        void calculate(){
            this->set_price(this->price-(this->price*0.1));
        }
};

class Tape : public Product
{
    private:
        string artist;
    public:
    Tape(){
        this->artist="";
        this->type='T';
    }
    Tape(string artist){
        this->artist=artist;
        this->type='T';
    }
    string get_artist(){
        return this->artist;
    }
    void set_artist(string artist){
        this->artist=artist;
    }
    void accept(){
        cout<<"Enter the id : "<<endl;
        cin>>this->id;
        cout<<"Enter the price : "<<endl;
        cin>>this->price;
        cout<<"Enter the Title : "<<endl;
        cin>>this->title;
        cout<<"Artist name is : "<<endl;
        cin>>this->artist;
    }
    void display(){
        cout<<"Product ID : "<<this->id<<endl;
        cout<<"Product price : "<<this->price<<endl;
        cout<<"Product title : "<<this->title<<endl;
        cout<<"Artist name is : "<<this->artist<<endl;
    }
    void calculate(){
        this->set_price(this->price-(this->price*0.05));
    }

};



int menu()
{
    int choice;
    cout << "-----------------------------" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Add Book " << endl;
    cout << "2. Add Tape" << endl;
    cout << "3. Generate Bill" << endl;
    // cout << "4. Display All Area" << endl;
    cout << "Enter Your Chocie = ";
    cin >> choice;
    cout << "-----------------------------" << endl;
    return choice;
}


int main(){
    int choice;
    Product *arr[3];
    int index = 0;
    float x=0,y=0;
    //int b1=0,b2=0;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            if (index < 3)
            {
                arr[index] = new Book();
                arr[index]->accept();
                arr[index]->calculate();
                index++;
            }
            else
                cout << "Cart is Full, Cannot add the Book.." << endl;
            break;
        case 2:
            if (index < 3)
            {
                arr[index] = new Tape();
                arr[index]->accept();
                arr[index]->calculate();
                index++;
            }
            else
                cout << "Cart is Full, Cannot add the Tape.." << endl;

            break;
        
        case 3:
            cout << "><><><><><><><><><><><><><><><><><><><><><" << endl;
            for (int i = 0; i < index; i++){
                arr[i]->display();
                cout<<endl;
            }
            for(int i=0;i<index; i++){
                //x+= Product;
                if (arr[i]->get_type()=='B')
                {
                    //x = x + arr[i]->get_price();
                    x+=(arr[i]->get_price())-(arr[i]->get_price()*0.1);
                    //b1++;
                }
                else{
                    //y = y + arr[i]->get_price();
                    y+=(arr[i]->get_price())-(arr[i]->get_price()*0.05);
                    //b2++;
                }    
            }
            // if(b1>0 && b2>0){
            //     cout<<"Total Book  = "<<b1<<endl;
            //     cout<<"Total Tape  = "<<b2<<endl;
            // }
            // else if(b2>0 && b1>0){
            //     cout<<"Total Book  = "<<b1<<endl;
            //     cout<<"Total Tape  = "<<b2<<endl;
            // }
            // else if(b1>0){
            //     cout<<"Total Book  = "<<b1<<endl;
            // }
            // else if(b2>0){
            //     cout<<"Total Tape  = "<<b2<<endl;
            // }
            // else{}

            cout << "~~~~~~~~~~~~~~TOTAL_AMOUNT~~~~~~~~~~~~~~~" << endl;
            cout<<"Total price is "<<x+y<<endl;
            break;

        default:
            cout << "Wrong Choice ..." << endl;
            break;
        }
    }
    for (int i = 0; i < index; i++)
        delete arr[i];

    cout << "Thank you for using our app..." << endl;
    return 0;
}


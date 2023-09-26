#include<iostream>
using namespace std;

class Matrix{
    private:
        int r,c;
        int **mat;
    public:
        Matrix(int r, int c)
        {
            this->r=r;
            this->c=c;

             mat = new int*[this->r];
            for (int i = 0; i < this->r; i++)
            {
                this->mat[i] = new int[c];
            }   
            
        }

        void acceptValues(){
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    cout<<"Enter value of Mat["<<i<<"]["<<j<<"] :"<<endl;
                    cin>>mat[i][j];
                }   
            }
        }

        void printValues(){
            cout<<"******************************"<<endl;
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    cout<<mat[i][j]<<"   ";
                } 
                cout<<endl;  
            }
            cout<<"******************************"<<endl;
        }
        friend void addMatrix(Matrix m1,Matrix m2);
        friend void subMatrix(Matrix m1,Matrix m2);
        friend void mulMatrix(Matrix m1,Matrix m2);
        friend void transpose(Matrix m1);
};

void addMatrix(Matrix m1,Matrix m2){
    cout<<"Addition of two matrix : "<< endl;
    for (int i = 0; i < m1.r; i++)
    {
        for (int j = 0; j < m1.c; j++)
        {
            
            cout<<m1.mat[i][j]+m2.mat[i][j]<<"   ";
        }
        cout<<endl;
    }
    
}

void subMatrix(Matrix m1,Matrix m2){
    cout<<"Subtraction of two matrix : "<< endl;
    for (int i = 0; i < m1.r; i++)
    {
        for (int j = 0; j < m1.c; j++)
        {
            
            cout<<m1.mat[i][j]-m2.mat[i][j]<<"   ";
        }
        cout<<endl;
    }
    
}

void mulMatrix(Matrix m1,Matrix m2){
    cout<<"Multiplication of two matrix : "<< endl;
    int x;
    for (int i = 0; i < m1.r; i++)
    {
        //m1.mat[i][i]*m2.mat[i][i];
        for (int j = 0; j < m1.c; j++)
        {
            //x=m1.mat[i][j]*m2.mat[i][j];
            x=0;
            for (int k = 0; k < m1.r; k++)
            {
                x+= m1.mat[i][k]*m2.mat[k][j];
            }
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

// for (int i = 0; i < m1.r; i++)
//     {
//         //m1.mat[i][i]*m2.mat[i][i];
//         for (int j = 0; j < m1.c; j++)
//         {
//             //x=m1.mat[i][j]*m2.mat[i][j];
//             for (int k = m1.r-1; k < 0; k--)
//             {
//                 x=(m1.mat[i][j]*m2.mat[i][j])+ (m1.mat[k][j]*m2.mat[k][j]);
//             }
            


void transpose(Matrix m1){
    for (int i = 0; i < m1.r; i++)
    {
        for (int j = 0; j < m1.c; j++)
        {
            /* code */
            cout<<m1.mat[j][i]<<"  ";
        }  
        cout<<endl;
    }
}


int main(){
    int r,c;
    cout<<"enter the rows and column for 1st matrix :"<<endl;
    cin>>r>>c;
    Matrix m1(r,c);
    m1.acceptValues();
    
    //cout<<"enter the rows and column for 2nd matrix :"<<endl;
    //cin>>r>>c;
    //Matrix m2(r,c);
    //m2.acceptValues();
    m1.printValues();
    //m2.printValues();
    //m2.printValues();  
    //addMatrix(m1,m2); 
    //subMatrix(m1,m2);
    //mulMatrix(m1,m2);
    transpose(m1);
    return 0;
}
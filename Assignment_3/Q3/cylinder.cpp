#include "./cylinder.h"

        //cylinder::cylinder() : radius(2.0), height(2.0){}

        cylinder::cylinder(double radius,double height) : radius(radius), height(height){
            //cout<<"Enter the Radius :"<<endl;
            //this->radius=radius;
            //cout<<"Enter the Height :"<<endl;
            //this->height=height;
        }
        void cylinder::acceptValue(){
            //double r,h;
            cout<<"Enter the Radius :"<<endl;
            cin>>this->radius;
            
            cout<<"Enter the Height :"<<endl;
            cin>>this->height;
            //setHeight(h);
        }
        void cylinder::setRadius(double radius){
            this->radius=radius;
        }
        void cylinder::setHeight(double height){
            this->height=height;
        }

        double cylinder::getRadius(){
            return this->radius;
        }

        double cylinder::getHeight(){
            return this->height;
        }
        double cylinder::getVolume(){
            return 3.14*this->radius * this->radius *this->height;
        }
        void cylinder::printVolume(){
            cout<<"Volume of cylinder is : "<<getVolume()<<endl;
        }
#include "./menu.h"
#include "./cylinder.h"

int main(){
    cylinder c(2,2);
    //double r,h;
   
    Emenu choice;
    
    while ((choice= menu())!=0)
    {
        
        switch (choice)
        {
        case ADD_VALUES:
            c.acceptValue();
            break;

        case DISPLAY_VOLUME:
            c.printVolume();
            break;

        case INIT_VALUE:
            c.printVolume();
            break;
        
        default:
            break;
        }
    }
    return 0;

};

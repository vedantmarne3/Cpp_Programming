#include<iostream>
using namespace std;


#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

       
        // parametrised constructor
        ArrayX(int x)
        {
            cout<<"Iside Constructor\n";

            iSize = x;                  // Characteristics initialisation
            Arr = new int[iSize];       // Resource allocation
        }

        //Destructor
        ~ArrayX()
        {
            cout<<"Iside Destructor\n";

            delete []Arr;       // Resource deallocation
        }
};

int main()
{
    ArrayX aobj1(5);

      


    return 0;
}


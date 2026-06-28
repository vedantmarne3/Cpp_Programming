#include<iostream>
using namespace std;


#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

       
        ArrayX(int x)
        {
            iSize = x;                  
            Arr = new int[iSize];      
        }

        ~ArrayX()
        {
            delete []Arr;       
        }
};

int main()
{

    ArrayX *aobj1 = new ArrayX(5);
    
    // Logic (Function call)
    cout<<aobj1->iSize<<endl;

    aobj1->iSize = 0;   // Issue characteristic public aashe mhanun kon pn update karu shaktay

    aobj1->Arr = NULL;  // Issue

    delete aobj1;

    return 0;
}


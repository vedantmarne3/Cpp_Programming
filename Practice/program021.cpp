#include<iostream>
using namespace std;


#pragma pack(1)
class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:   
        
        // Parameterised constructor with defualt value / argument


        ArrayX(int x = 5)   //defualt argument
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

    ArrayX *aobj1 = new ArrayX();       // Defualt Constructor
    ArrayX *aobj2 = new ArrayX(15);      // Parameterised Constructor
    
    // Function call


    delete aobj1;
    delete aobj2;

    return 0;
}

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

        void Accept()
        {
            int iCnt = 0;
            cout<<"Enter the element : \n";
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;
            cout<<"Elements of the Array are : \n";
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }
        }
};

int main()
{

    ArrayX *aobj = NULL;
    int iLegnth = 0;

    cout<<"Enter the Number of Element : \n";
    cin>>iLegnth;

    aobj = new ArrayX(iLegnth);

    aobj->Accept();
    aobj->Display();
    
    delete aobj;

    return 0;
}

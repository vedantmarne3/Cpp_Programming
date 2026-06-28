#include<iostream>
using namespace std;


#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        //Defualt constructor
        ArrayX()
        {

        }

        // parametrised constructor
        ArrayX(int x)
        {

        }
};

int main()
{
    ArrayX aobj1;   //Defualt

    ArrayX aobj2(5);  // parametrised constructor

    cout<<sizeof(aobj1)<<endl;  //12 bytes


    return 0;
}


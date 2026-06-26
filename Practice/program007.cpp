#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;
};

int main()
{
    ArrayX aobj;

    cout<<sizeof(aobj)<<endl;  //16 bytes

    // KA 16 bytes search on gpt

    return 0;
}


#include<iostream>
using namespace std;

template<class T>

T Maximum(T No1, T No2, T No3)
{

    if(No1 > No2 && No1 > No3)
    {
        return No1;
    }
    else if(No2 > No1 && No2 > No3)
    {
        return No2;
    }
    else
    {
        return No3;
    }
}

int main()
{

    cout<<Maximum(21.5f,11.5f,10.4f)<<"\n";
    cout<<Maximum(21.5,11.5,10.2)<<"\n";
    cout<<Maximum(21,11,24)<<"\n";


    return 0;
}
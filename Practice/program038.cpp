#include<iostream>
using namespace std;

void Display(double Arr[], int Size)
{
    for(int i = 0; i < Size; i++)
    {
        cout<<Arr[i]<<"\n";
    }
}

double Summation(double Arr[], int Size)
{
    double Sum = 0.0;

    for(int i = 0; i < Size; i++)
    {
        Sum = Sum + Arr[i];
    }

    return Sum;
}

int main()
{
    double Brr[] = {10.2,20.2,30.2,40.2,50.2};

    Display(Brr,5);

    cout<<"Summation is : "<<Summation(Brr,5);

    return 0;
}
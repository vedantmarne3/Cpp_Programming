#include<iostream>
using namespace std;

int main()
{
    int *Brr = NULL;

    int iLength = 0, iCnt = 0;

    cout<<"Enter the no. of Elements : \n";
    cin>>iLength;

    // c    : Brr = malloc(sizeod(int) * ilenght)
    // java : int Brr[] = new int[iLength];
    Brr = new int[iLength];

    cout<<"Enter the Element : \n";

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Brr[iCnt];
    }

    cout<<"Elements of the Array are : \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<Brr[iCnt]<<endl;
    }
  
    delete []Brr;

    return 0;
}
#include<iostream>
using namespace std;
int main()
{

    int A[15] = {2,5,9,12,15,18};

    int value,length = 6,count=0;
    int position;
    cout<<"Enter the element to search: ";
    cin>>value;

    for(int i=0;i<length;i++)
    {
        if(A[i]==value)
        {
            count =1;
            position = i;
            break;
        }
    }

    if(count == 0)
    {
        cout<<"Elemnt Not Found In Array"; 
    }
    else
    {
        cout<<"Elemnt Found In Array at "<<position<<" Index";
    }



}

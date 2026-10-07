#include <iostream>
using namespace std;
int main()
{
    int A[10] = {10,20,30,40,50,60,70};
    int position,value;
    int length = 7;

    cout<<"Before insert: ";
    for(int i=0;i<length;i++)
    { 
        cout<<A[i]<<" ";
    }
    
    cout<<endl<<"Enter position and value: ";
    cin>>position>>value;

   
    
    for(int i = length; i>position;i--)
    {
        A[i] = A[i-1];
    }

    // new value inserted
    A[position] = value;
    length++;  // length baraite hobe must
    
    
    cout<<endl<<"After insert: ";

    for(int i=0;i<length;i++)
    {
        cout<<A[i]<<" ";
    }

}
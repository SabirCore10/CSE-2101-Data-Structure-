#include <iostream>
using namespace std;
int main()
{
    int A[10] = {10,20,30,40,50,60,70};
    int Index_position,value;
    int length = 7;

    cout<<"Before insert: ";
    for(int i=0;i<length;i++)
    { 
        cout<<A[i]<<" ";
    }
    
    cout<<endl<<"Enter position and value: ";
    cin>> Index_position>>value;

   
    
    for(int i = length; i> Index_position;i--)
    {
        A[i] = A[i-1];
    }

    // new value inserted
    A[ Index_position] = value;
    length++;  // length baraite hobe must
    
    
    cout<<endl<<"After insert: ";

    for(int i=0;i<length;i++)
    {
        cout<<A[i]<<" ";
    }

}
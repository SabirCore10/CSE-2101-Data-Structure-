#include <iostream>
using namespace std;
int main()
{
    int A[10] = {10,20,30,40,50};
    int position,value;
    int length = 5; //  ekhane array length = 5.


    cout<<"Before insert: ";
    for(int i=0;i<length;i++)
    {
        cout<<A[i]<<" ";
    }
    
    cout<<endl<<"Enter position and value: ";
    cin>>position>>value;

    // insert korar jonno first e shifting kora lagbe right side er element guloke
    
    for(int i = length; i>position;i--)
    {
        A[i] = A[i-1];
    }

    A[position] = value;
    length++;
    
    
    cout<<endl<<"After insert: ";

    for(int i=0;i<length;i++)
    {
        cout<<A[i]<<" ";
    }

    //Complexity: O(n) in the worst case (inserting at the beginning).


}
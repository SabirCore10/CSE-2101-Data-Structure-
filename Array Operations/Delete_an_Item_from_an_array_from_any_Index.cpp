#include<iostream>
using namespace std;
int main()
{
    int A[10] = {10,20,30,40,50,60,70,80};
    int length = 8;
    cout<<"Before deletion: ";
    for(int i=0;i<length;i++)
    {
        cout<<A[i]<<" ";
    }
    
    int Index_Position;
    cout<<endl<<"Enter position: ";
    cin>>Index_Position;
    

    for(int i=Index_Position;i<length-1;i++)
    {
        A[i] = A[i+1];  
    }
    length--;

    cout<<endl;

    cout<<"After deletion: ";
    for(int i=0;i<length;i++)
    {
        cout<<A[i]<<" ";
    }

//Complexity: O(n) in the worst case (deleting from the beginning).

}
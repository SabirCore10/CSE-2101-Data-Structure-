#include<iostream>
using namespace std;
int main()
{
    int A[10] = {10,20,30,40,50,60,70,80};
    int length = 8; //length মানে বর্তমানে array-তে কতগুলো valid element আছে
    cout<<"Before deletion: ";
    for(int i=0;i<length;i++)
    {
        cout<<A[i]<<" ";
    }
    
    int position = 0;
    

    for(int i=position;i<length-1;i++)
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


}
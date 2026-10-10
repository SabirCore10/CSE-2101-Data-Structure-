#include<iostream>
using namespace std;
int main()
{
    int A[10] = {2,3,4,5,8};
    int length = 5;
    cout<<"Before Bubble Sort: ";
    for(int i=0;i<length;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<length-1;i++)       
    {
        int swap = 0;   // mane ekhono ekbar o swap hoi nai
        for(int j=0;j<(length-1-i);j++)     // ei(Inner) loop er kaj hocche swap kora
        {
            if(A[j]>A[j+1])
            {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                swap = 1;  
            }
        }
        if(swap == 0)
        {
            cout<<"The Given Array Is Already Sorted";
            break;
        }
        // first iteratipon e sobcheye boro value ekdom right side e chole jabe...(14,12,18,9,22)
    }


}
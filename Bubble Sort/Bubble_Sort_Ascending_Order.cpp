#include<iostream>
using namespace std;
int main()
{
    int A[10] = {5,3,8,4,2};
    int length = 5;
    cout<<"Before Bubble Sort: ";
    for(int i=0;i<length;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<length-1;i++)       //ei loop diye iteration chalabo mane koita step lagbe amar complete sort paite
    {
        for(int j=0;j<(length-1-i);j++)     // ei(Inner) loop er kaj hocche swap kora
        {
            if(A[j]>A[j+1])
            {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
        // first iteratipon e sobcheye boro value ekdom right side e chole jabe...(14,12,18,9,22)
    }


    cout<<"After Bubble Sort: ";
    for(int i=0;i<length;i++)
    {
        cout<<A[i]<<" ";
    }

//Therefore, The Time complexity of Bubble Sort is:  O(n)

}
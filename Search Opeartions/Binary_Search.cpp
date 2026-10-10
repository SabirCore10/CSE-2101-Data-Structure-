#include<iostream>
using namespace std;
int main()
{
    int A[20] = {5,7,9,12,15,20,24,27,33,40,50,65,72};
    int length = 13, low = 0, high = length-1;
    int data,index_position,count=0;
    cout<<"Enter element to search: ";
    cin>>data;

    while(low<=high)
    {
        int mid = (low+high)/2;
        if(data == A[mid])
        {
            count++;
            index_position = mid;
            break;
        }
        else if(data>A[mid])
        {
            low = mid +1;
        }
        else
        {
            high = mid - 1; // data<A[mid]
        }
    }

    if(count == 0)
    {
        cout<<"Element Not Found";
    }
    else
    {
        cout<<"Element Found at "<<index_position<<" Index";
    }
     
}
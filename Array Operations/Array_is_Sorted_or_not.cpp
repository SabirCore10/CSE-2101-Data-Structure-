#include <iostream>
using namespace std;
int main()
{
    int A[10] = {10,20,30,40,50,60,70};
    int length = 7, count = 0;

    for(int i=0;i<length-1;i++)
    {
        if(A[i]>A[i+1])         //For Descending Order if(A[i] < A[i+1])
                            // current item jodi next item theke boro hoye jai tahole eta sorted na
        {
            count++;
            break;
        }
    }

    if(count == 0)
    {
        cout<<"Array is Sorted";
    }
    else
    {
        cout<<"Array is Not Sorted";
    }

}
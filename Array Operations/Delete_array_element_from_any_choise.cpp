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
    cout<<endl<<endl;
    
    int position;
    int choice;
    cout<<"Choose any option"<<endl;
    cout << "1. Delete First" << endl;
    cout << "2. Delete Last" << endl;
    cout << "3. Delete from any Position" << endl;
    cin >> choice;

    if(choice == 1)
    {
    position = 0;
    }
    else if(choice == 2)
    {
    position = length - 1;
    }
    else if(choice == 3)
    {
    cout << "Enter position: ";
    cin >> position;
    }

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
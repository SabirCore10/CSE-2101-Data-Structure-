#include <iostream>
using namespace std;

void insertElement(int A[], int *n, int k, int item)
{
    int j;

    for (j = *n - 1; j >= k; j--)
    {
        A[j + 1] = A[j];
    }

    A[k] = item;

    (*n)++;
}

int main()
{
    int A[100] = {10, 20, 30, 40, 50};
    int n = 5;
    int k = 2;
    int item = 25;

    insertElement(A, &n, k, item);

    cout << "Array after insertion: ";

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}
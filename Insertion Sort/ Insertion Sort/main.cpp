#include <iostream>

using namespace std;
void InsertionSort(int A[], int n)
{
    int value,hole_index;
    for(int i=1;i<n-1;i++)
    {
        value = A[i];
        hole_index = i;
        while(hole_index > 0 && A[hole_index-1]>value)
        {
            A[hole_index] = A[hole_index-1];
            hole_index = hole_index -1;
        }
        A[hole_index] = value;
    }
}
int main()
{
    int A[] = {1, 7, 4, 5, 2, 3};
    InsertionSort(A, 6);
    for(int i = 0; i < 6; i++)
        cout<<A[i]<<" ";
}

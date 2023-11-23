#include <iostream>

using namespace std;

void merge(l, r, int A[])
{
    int nl = length(l);
    int nr = length(r);
    int i, j, k = 0;

    while (i < nl && j < nr)
    {
        if(l[i] <= r[j])
        {
            A[k] = l[i];
            i = i + 1;
        }
        else{
            A[k] = r[j];
            j = j + 1;
        }
        k = k + 1;
    }
    while (i < nl)
    {
        A[k] = l[i];
        i = i + 1;
        k = k + 1;
    }
    while (j < nr)
    {
        A[k] = r[j];
        j = j + 1;
        k = k + 1;
    }
}

void MergeSort(A, length)
{
    n = length(A)
    if (n < 2) return A
    mid = n\2;
    left = array_of_size(mid);
    right = array_of_size(n-mid);
    for(int i = o; i < mid-1; i++)
    {
        left[i] = A[i];
    }
    for (int i = mid; i < n-1; i++)
    {
        right[i-mid] = A[i];
    }
    MergeSort(left);
    MergeSort(right);
    merge(left, right, A)
}
int main()
{
    int A[] = {2, 7, 4, 1, 5, 3};
    MergeSort(A);
    for (int i = 0; i < 6; i++)
    {
       cout<<A[i]<<" ";
    }
}

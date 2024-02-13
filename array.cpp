// Array 

#include <iostream>
#include <math.h>
#include <algorithm> // for std::sort
using namespace std;

// Program to check if two Arrays are Equal or not
bool two_arrays_equal(int* arr1, int* arr2, int m, int n)
{
    if (m != n)
    {
        return false;
    }

    // Sort both arrays
    sort(arr1, arr1 + m);
    sort(arr2, arr2 + n);

    for (int i = 0, j = 0; i < m, j < n; i++, j++)
    {
        if(arr1[i] != arr2[j])
            return false;   
    }

    return true;
}

void input()
{
    int m;
    int arr1[100];

    cout << "Nhập số phần tử của mảng arr1: ";
    cin >> m;
    cout << "Nhập " << m << " phần tử của arr1: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }

    cout << endl;

    int n;
    int arr2[100];
    cout << "Nhập số phần tử của mảng arr2:   ";
    cin >> n;
    cout << "Nhập " << n << " phần tử của arr2: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    bool equal = two_arrays_equal(arr1, arr2, m, n);
    if(equal)
    {
        cout << "Equal";
    }
    else
        cout << "Nope";

}



int main()
{
    input();
}
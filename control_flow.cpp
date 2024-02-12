// Control Flow C++

#include <iostream>
#include <math.h>
using namespace std;

int even_odd_number(int num)
{
    if(num % 2 == 0)
    {
        cout << num << " là số chẵn" << endl;
    }
    else
    {
         cout << num << " là số lẻ" << endl;
    }
    return num;
}

void input_even_odd()
{
    int number ;
    char x;
    while(1){
        cout << "Nhập số nguyên bất kỳ: ";
        cin >> number;
        even_odd_number(number) ;

        cout << "Mún dùng nữa ko ? [x]: Nope; [o]: Yep:  ";
        cin >> x;
        if(x == 'x'){
            break;
        }
        else if(x == 'o'){
            continue;
        }
    }
}

void swap_two_numbers(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort_number(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                swap_two_numbers(&arr[i], &arr[j]);
            }
        }
        
    }
}

void input_array()
{
    int n;
    cout << "Nhập n: ";
    cin >> n;

    int arr[100];
    cout << "Nhập " << n <<  " số sau: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }

    sort_number(arr, n);
    cout << "Sort number: " ;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
}


int main()
{
    //input_even_odd();
    input_array();
}
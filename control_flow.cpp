// Control Flow C++

#include <iostream>
#include <math.h>
using namespace std;


// Check whether odd or even number
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

// input number
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

// Swap numbers function
void swap_two_numbers(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Sort numbers function
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

// Find max element in an array
int max_number(int *arr, int n)
{
    int max = arr[0]; 
    for (int i = 0; i < n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }

    return max;
}

// Find sum in an array
int sum_of_array(int *arr, int n)
{
    int sum = 0 ;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    return sum;
}

// Reverse element in an array
void reverse_array(int* arr, int n)
{
    int arr2[100];
    int i;
    for (i = 0; i < n/2; i++)
    {
        swap_two_numbers(&arr[i], &arr[n - i - 1]);
    }
}


// Input function
void input_array()
{
    // Nhập n 
    int n;
    cout << "Nhập n: ";
    cin >> n;

    // Nhập n phần tử
    int arr[100];
    cout << "Nhập " << n <<  " số sau: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }

    // Sort number
    sort_number(arr, n);
    cout << "Sort number: " ;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
    
    cout << endl;

    // Find max element
    int max = max_number(arr, n);
    cout << "Largest number is: " << max;

    cout << endl;
    
    // Find sum of array
    int sum = sum_of_array(arr, n);
    cout << "Sum is: " << sum;


    // Reverse element in an array
    reverse_array(arr, n);
    cout << "Reverse number: " ;
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
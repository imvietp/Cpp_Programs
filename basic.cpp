// Basic C++ programs

#include <iostream>
#include <math.h>
using namespace std;

// Hello world
void helloworld()
{
    cout << "Hello World\n" ;
}

// Print your own name
void print_own_name()
{
    cout << "Viet\n" ;
}

// Get input
void get_input_from_user()
{
    int n;
    cout << "Nhập số nguyên n: ";
    cin >> n;
    cout << "n = " << n << endl;
}

// Add two numbers
int add_two_num(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}

void input_sum_two_num()
{
    int a, b;
    cout << "Nhập 2 số nguyên a và b: ";
    cin >> a >> b;
    cout << "Sum of two numbers is: " << add_two_num(a, b) << endl;
}

// Swap two numbers
void swap_two_numbers(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void input_swap_two_number()
{
    int a, b;
    cout << "Nhập 2 số nguyên a và b: ";
    cin >> a >> b;
    swap_two_numbers(&a, &b);
    cout << "After swapping: " << "a = " << a << " b = " << b;
}

// Find the size of datatype
void size_of_datatypes()
{
    cout << "The size of int is: " << sizeof(int) << endl;
    cout << "The size of float is: " << sizeof(float) << endl;
    cout << "The size of double is: " << sizeof(double) << endl;
    cout << "The size of char is: " << sizeof(char) << endl;
}

// Print the ascii value
void ascii_value()
{
    char value;
    cout << "Nhập ký tự ASCII: ";
    cin >> value;
    cout << "Value of character is: " << int(value) << endl;
}

// Find the compound interest
void compound_interest()
{
    double principal = 10000, rate = 5, time = 2;
 
    // Calculate compound interest
    double A = principal * ((pow((1 + rate / 100), time)));
    double CI = A - principal;
 
    cout << "Compound interest is " << CI;
    while(CI);

}

int main()
{
    while (1)
    {
        //helloworld();
        //print_own_name();
        //get_input_from_user();
        //input_sum_two_num();
        //input_swap_two_number();
        //size_of_datatypes();
        //ascii_value();
        compound_interest();
    }

}
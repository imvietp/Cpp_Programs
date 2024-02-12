// Pattern printing

#include <iostream>
#include <math.h>
using namespace std;


// Right Half Pyramid Pattern
void right_half_pyramid()
{
    int row = 5;
    for (int i = 1; i <= row ;i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* " ;
        }
        
        cout << endl;
    }
    
}

// Left Half Pyramid Pattern
void left_half_pyramid()
{
    int row = 5;
    for (int i = 1; i <= row; i++)
    {
        for (int j = row; j >= 0; j--){
            if (j < i) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << "\n";
    }
}

// Full
void full_pyramid()
{
    int row = 5;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < row - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
        
    }
    
}



int main()
{
    //right_half_pyramid();
    //left_half_pyramid();
    full_pyramid();
}
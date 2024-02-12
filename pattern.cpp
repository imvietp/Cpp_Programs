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
    int row = 10;
    for (int i = 1; i <= row/2; i++)
    {
        for (int j = 0; j < 2*row - i; j++)
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

// Full diamond
void full_diamond()
{
    int row = 10;   // 10 rows in diamond      
    for (int i = 1; i <= row/2; i++)  // Loop to check row 1 to 5 (Half above diamond)
    {
        for (int j = 0; j < row - i; j++)    // j from 0 to under row - i: print spaces
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)   // j from 1 to i: print *
        {
            cout << "* ";
        }
        cout << endl;
        
    }

    for (int i = 5; i >= 1; i--)    // Loop to check row 5 to 10 (Half under diamond)
    {
         for(int j = 0; j <= row - i; j++)   // j from 0 to under row - i: print spaces
        {
            cout << " ";
        }

        for (int j = 1; j < i; j++)  // j from 1 to under i: print *
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// Inverted Pyramid Pattern
void inverted_pyramid()
{
    int row = 5;
    for (int i = 1; i <= row ;i++)
    {
        for (int j = row; j >= i; j--)
        {
            cout << "* " ;
        }
        
        cout << endl;
    }
    
}

// Program to print an inverted half pyramid using numbers
void inverted_pyramid_number()
{
    int row = 5;
    for (int i = row; i >= 1 ;i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " " ;
        }
        
        cout << endl;
    }
    
}

// Program to print inverted full pyramid using ” * “
void inverted_full_pyramid()
{
    int row = 5;
    for (int i = row; i >= 1; i--)
    {
        for(int j = 0; j <= row - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i ; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }  
}

// C++ Program To Print Character Pattern
void character_pattern()
{
    int row = 5;
    char character = 'A';
    for (int i = 1; i <= row; ++i)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << character << " ";
            
        }
        cout << endl;
        character++;
    }
    
}

// C++ Program To Print Continuous Character Pattern
void continuous_character_pattern()
{
    int row = 5;
    char character = 'A';
    for (int i = 1; i <= row; ++i)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << character << " ";
            character++;
        }
        cout << endl;
        
    }
}


int main()
{
    //right_half_pyramid();
    //left_half_pyramid();
    //full_pyramid();
    //inverted_pyramid();
    //inverted_pyramid_number();
    //inverted_full_pyramid();
    //character_pattern();
    //continuous_character_pattern();
    full_diamond();

}
// Pattern printing

#include <iostream>
#include <math.h>
using namespace std;


// Right Half Pyramid Pattern
void right_half_pyramid()
{
    int row = 5;   // 5 layers of pyramid
    for (int i = 1; i <= row ;i++)   // scan first to fifth layer or pyramid
    {
        for (int j = 1; j <= i; j++)  // loop 1 to i to add *
        {
            cout << "* " ;
        }
        
        cout << endl;
    }
    
}

// Left Half Pyramid Pattern
void left_half_pyramid()
{
    int row = 5;  // 5 layers of pyramid
    for (int i = 1; i <= row; i++)    // scan first to fifth layer or pyramid
    {
        for (int j = row; j >= 0; j--)  // loop j to add * (loop each rows , layer)
        {   
            if (j < i) {
                cout << "*"; // If j < i, print *
            }
            else {
                cout << " "; // If j >= i, print space
            }
        }
        cout << "\n";
    }
}

// Full pyramid
void full_pyramid()
{
    int row = 5;  // 5 layers of diamond
    for (int i = 1; i <= row; i++)  // Loop i = 1 to the amount layers of row
    {
        for (int j = 0; j < row - i; j++)  // Loop j = 0 to row - i to print space in each row
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) // Loop j = 1 to i to print * in each row
        {
            cout << "* ";
        }
        cout << endl;
        
    }
}

// Full diamond
void full_diamond()
{
    int row = 5;   // 10 rows in diamond      
    for (int i = 1; i <= row; i++)  // Loop to check row 1 to 5 (Half above diamond)
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

    for (int i = row; i >= 1; i--)    // Loop to check row 5 to 10 (Half under diamond)
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
    int row = 5;  // Number of rows in the inverted pyramid
    for (int i = 1; i <= row ;i++)   // Loop for each row starting from the top
    {
        for (int j = row; j >= i; j--)  // Loop to print asterisks in each row
        {
            cout << "* " ; // Print an asterisk followed by a space
        }
        
        cout << endl; // Move to the next line after printing all asterisks in the row
    }
    
}

// Program to print an inverted half pyramid using numbers
void inverted_pyramid_number()
{
    int row = 5;
    for (int i = row; i >= 1 ;i--) // Loop for each row starting from the top
    {
        for (int j = 1; j <= i; j++) // Loop to print numbers in each row
        {
            cout << j << " " ; // Print the current number followed by a space
        }
        
        cout << endl; // Move to the next line after printing all numbers in the row
    }
}

// Program to print inverted full pyramid using ” * “
void inverted_full_pyramid()
{
    int row = 5; // Number of rows in the inverted full pyramid
    for (int i = row; i >= 1; i--) // Loop for each row starting from the top
    {
        for(int j = 0; j <= row - i; j++) // Loop to print leading spaces in each row
        {
            cout << " "; // Print a space for each leading space in the row
        }

        for (int j = 1; j <= i ; j++) // Loop to print asterisks in each row
        {
            cout << "* "; // Print an asterisk followed by a space
        }
        cout << endl;  // Move to the next line after printing all characters in the row
    }  
}

// C++ Program To Print Character Pattern
void character_pattern()
{
    int row = 5;  // Number of rows in the pattern
    char character = 'A';   // Starting character for the pattern
    for (int i = 1; i <= row; ++i)  // Loop for each row starting from row 1
    {
        for (int j = 1; j <= i; j++)  // Loop to print characters in each row
        {
            cout << character << " "; // Print the current character followed by a space
            
        }
        cout << endl;
        character++; // Move to the next character for the next row
    }
    
}

// C++ Program To Print Continuous Character Pattern
void continuous_character_pattern()
{
    int row = 5;   // Number of rows in the pattern
    char character = 'A'; // Starting character for the pattern
    for (int i = 1; i <= row; ++i)  // Loop for each row starting from row 1
    {
        for (int j = 1; j <= i; j++)  // Loop to print characters in each row
        {
            cout << character << " ";  // Print the current character followed by a space
            character++;   // Move to the next character
        }
        cout << endl;  // Move to the next line after printing all characters in the row
        
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
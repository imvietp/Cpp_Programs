// String

#include <iostream>
#include <math.h>
#include <algorithm> // for std::sort
using namespace std;

// C++ Program to Find the Length of a String
int length_of_string(string str)
{
    int count = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i] != '\0')
        {
            count++;
        }
    }
    
    return count;
}

void compare_two_string()
{
    string s1;
    cout << "Nhập chuỗi thứ nhất: ";
    cin >> s1;
    string s2;
    cout << "Nhập chuỗi thứ hai: ";
    cin >> s2;

    if(s1 > s2)
    {
        cout << s1 << " is larger than " << s2 ;
    }
    else if (s1 < s2)
    {
        cout << s1 << " is smaller than " << s2 ;
    }
    else
        cout << s1 << " is equal to " << s2 ;
}

void combine_two_string()
{
    string s1;
    cout << "Nhập chuỗi thứ nhất: ";
    cin >> s1;
    string s2;
    cout << "Nhập chuỗi thứ hai: ";
    cin >> s2;

    cout << "Final is: " << s1 + s2;
}

void reverse_string(string *str)
{
    int n = (*str).size();
    for (int i = 0; i < n/2; i++)
    {
        char temp = (*str)[i];
        (*str)[i] = (*str)[n - i - 1];
        (*str)[n - i - 1] = temp;
    }
    
}

void input()
{
    string str;
    cout << "Nhập chuỗi ký tự sau: ";
    cin >> str;
    cout << "Dộ dài của chuỗi = " << length_of_string(str) << endl;
    reverse_string(&str);
    cout << "After swapping = " << str;

}

int main()
{
    input();
    //compare_two_string();
    //combine_two_string();
}
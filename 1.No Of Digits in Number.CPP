// No of Digits in   a number

#include <iostream>
void main()
{
   
    int x = 0, n;
    cout << "Enter the number :";
    cin >> n;
    while (n > 0)
    {
        n = n / 10;
        x = x + 1;
        n--; 
    }
    cout << "The no of digits are :" << x;
    
}

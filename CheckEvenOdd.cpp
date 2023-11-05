// prg to find a no is even or odd

#include <iostream>
using namespace std;
void oddOrEven(int num, string answer)
{

    if (num == 0)
    {
        cout << "The number you chose is neither even or odd." << endl;
        if (answer == "Odd" || answer == "Even")
        {
            cout << "You're guess was not correct" << endl;
        }
    }
    if (num % 2 == 0)
    {
        cout << "The number you chose is even." << endl;
        if (answer == "Even")
        {
            cout << "You were correct!" << endl;
        }
        else
        {
            cout << "You were wrong." << endl;
        }
    }
    else
    {
        cout << "The number you chose is odd." << endl;
         if (answer == "Odd")
        {
            cout << "You were correct!" << endl;
        }
        else
        {
            cout << "You were wrong." << endl;
        }
    }
}

int main()
{
    int num = 0;
    string answer;

    cout << "Please enter a number: " << endl;
    cin >> num;

    cout << "Do you think this number is odd or even" << endl;
    cin >> answer;

    cout << "Okay let's check if you're correct..." << endl;

    oddOrEven(num, answer);

    return 0;
}
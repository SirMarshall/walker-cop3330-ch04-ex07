#include "main.h"
using namespace std;

int main()
{
    string operation, string1, string2;
    double num1, num2, result;

    cin >> operation;
    cin >> string1;
    cin >> string2;

    if (string1 == "one")
    {
        num1 = 1;
    }
    else if (string1 == "two")
    {
        num1 = 2;
    }
    else if (string1 == "three")
    {
        num1 = 3;
    }
    else if (string1 == "four")
    {
        num1 = 4;
    }

    else if (string1 == "five")
    {
        num1 = 5;
    }

    else if (string1 == "six")
    {
        num1 = 6;
    }
    else if (string1 == "seven")
    {
        num1 = 7;
    }
    else if (string1 == "eight")
    {
        num1 = 8;
    }
    else if (string1 == "nine")
    {
        num1 = 9;
    }

    if (string2 == "one")
    {
        num2 = 1;
    }
    else if (string2 == "two")
    {
        num2 = 2;
    }
    else if (string2 == "three")
    {
        num2 = 3;
    }
    else if (string2 == "four")
    {
        num2 = 4;
    }

    else if (string2 == "five")
    {
        num2 = 5;
    }

    else if (string2 == "six")
    {
        num2 = 6;
    }
    else if (string2 == "seven")
    {
        num2 = 7;
    }
    else if (string2 == "eight")
    {
        num2 = 8;
    }
    else if (string2 == "nine")
    {
        num2 = 9;
    }


    if (operation == "+")
    {
        result = num1 + num2;
    }
    else if (operation == "-")
    {
        result = num1 - num2;
    }
    else if (operation == "/")
    {
        result = num1 / num2;
    }
    else if (operation == "*")
    {
        result = num1 * num2;
    }
    else
    {
        cout << "ERORR: Operand not found";
    }

    cout << "Result is: " << result << "\n";
    cout << "Press enter to exit.";
    cin >> result;
}
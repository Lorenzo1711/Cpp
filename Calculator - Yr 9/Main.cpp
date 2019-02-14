# include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;

    cout << "Made by Lorenzo#1711. Enter operator either + or - or * or /: ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch(op)
    {
        case '+':
            cout << num1+num2;
            break;

        case '-':
            cout << num1-num2;
            break;

                   case '*':
            cout << num1*num2;
            break;

        case '/':
            cout << num1/num2;
            break;

        default:
            cout << "Error!";
            break;
    }

    return 0;
}

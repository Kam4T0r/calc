#include <iostream>
using namespace std;

void menu()
{
    cout << "_--------------------_\n";
    cout << "| Kam4t0r calculator |\n";
    cout << "|                    |\n";
    cout << "| available options: |\n";
    cout << "| addition => +      |\n";
    cout << "| subtraction => -   |\n";
    cout << "| multiplication => *|\n";
    cout << "| division => /      |\n";
    cout << "| modulo => %        |\n";
    cout << "----------------------\n";
}

void add(float nm1, float nm2)
{
    cout << "the result is: " << nm1 + nm2 << endl;
}

void subs(float nm1, float nm2)
{
    cout << "the result is: " << nm1 - nm2 << endl;
}

void div(float nm1, float nm2)
{
    cout << "the result is: " << nm1 / nm2 << endl;
}

void mult(float nm1, float nm2)
{
    cout << "the result is: " << nm1 * nm2 << endl;
}

void mod(float nm1, float nm2)
{
    cout << "the result is: " << (int)nm1 % (int)nm2 << endl;
}


int main()
{
    while (1)
    {
        float arg1, arg2;
        char op;
        menu();
        cout << "enter 1st number\n>";
        cin >> arg1; //take 1st number
        cout << "enter 2nd number\n>";
        cin >> arg2; //take 2nd number
        cout << "enter operator\n>";
        cin >> op; //take operator

        if (op == '+') //match operator
        {
            add(arg1, arg2);
        } else if (op == '-')
        {
            subs(arg1, arg2);
        } else if (op == '/')
        {
            div(arg1, arg2);
        } else if (op == '*')
        {
            mult(arg1, arg2);
        } else if (op == '%')
        {
            mod(arg1, arg2);
        } else
        {
            cout << "invalid operator" << endl;
        }
    }
}

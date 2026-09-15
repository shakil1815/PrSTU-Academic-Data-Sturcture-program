#include <iostream>
using namespace std;

int main()
{
    int stack[100];
    int top = -1;

    int postfix[] = {5, 6, 2, '+', '*', 12, 4, '/', '-'};
    int n = 9;

    cout << "Postfix Expression: ";

    for(int i = 0; i < n; i++)
    {
        if(postfix[i] >= 0 && postfix[i] <= 12)
            cout << postfix[i] << " ";
        else
            cout << char(postfix[i]) << " ";
    }

    cout << endl << endl;

    int pass = 1;

    for(int i = 0; i < n; i++)
    {
        cout << "Pass No: " << pass << endl;
        cout << "Step No: " << i + 1 << endl;

        if(postfix[i] >= 0 && postfix[i] <= 12)
        {
            top = top + 1;
            stack[top] = postfix[i];

            cout << "Operation: PUSH " << postfix[i] << endl;
        }
        else
        {
            int operand2 = stack[top];
            top = top - 1;

            int operand1 = stack[top];
            top = top - 1;

            int result;

            switch(postfix[i])
            {
                case '+':
                    result = operand1 + operand2;
                    break;

                case '-':
                    result = operand1 - operand2;
                    break;

                case '*':
                    result = operand1 * operand2;
                    break;

                case '/':
                    result = operand1 / operand2;
                    break;

                case '%':
                    result = operand1 % operand2;
                    break;
            }

            top = top + 1;
            stack[top] = result;

            cout << "Operation: "
                 << operand1 << " "
                 << char(postfix[i]) << " "
                 << operand2
                 << " = " << result << endl;
        }

        cout << "Stack: ";

        for(int j = 0; j <= top; j++)
        {
            cout << stack[j] << " ";
        }

        cout << endl << endl;

        pass++;
    }

    cout << "Final Result = " << stack[top] << endl;

    return 0;
}
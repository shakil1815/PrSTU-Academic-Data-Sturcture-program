#include <iostream>
using namespace std;

int main()
{
    int stack[5] = {10, 20, 30};
    int top = 2;
    int item;

    if(top == -1)
    {
        cout << "Underflow";
    }
    else
    {
        item = stack[top];
        top = top - 1;

        cout << "Item popped = " << item;
    }

    return 0;
}
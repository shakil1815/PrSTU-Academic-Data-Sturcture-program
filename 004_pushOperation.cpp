#include <iostream>
using namespace std;

int main()
{
    int stack[5];
    int top = -1;
    int item = 10;

    if(top == 4)
    {
        cout << "Overflow";
    }
    else
    {
        top = top + 1;
        stack[top] = item;

        cout << "Item pushed";
    }

    return 0;
}
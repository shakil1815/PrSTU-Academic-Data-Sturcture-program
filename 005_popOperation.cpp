#include <iostream>
using namespace std;

int main()
{
    int stack[5] = {10, 20, 30};
    int top = 2;
    int item;

    cout << "Initial Stack: ";
    for(int i = 0; i <= top; i++)
    {
        cout << stack[i] << " ";
    }

    cout << endl;
    cout << "Initial TOP = " << top << endl;

    // Step 1
    cout << "\nStep No: 1" << endl;
    cout << "Checking Underflow condition..." << endl;

    if(top == -1)
    {
        cout << "Underflow";
    }
    else
    {
        cout << "Stack is not empty" << endl;

        // Step 2
        cout << "\nStep No: 2" << endl;
        item = stack[top];

        cout << "Item popped = " << item << endl;

        // Step 3
        cout << "\nStep No: 3" << endl;
        top = top - 1;

        cout << "New TOP = " << top << endl;

        // Step 4
        cout << "\nStep No: 4" << endl;
        cout << "Current Stack: ";

        for(int i = 0; i <= top; i++)
        {
            cout << stack[i] << " ";
        }

        cout << endl;
        cout << "Item popped successfully";
    }

    return 0;
}




// #include <iostream>
// using namespace std;

// int main()
// {
//     int stack[5] = {10, 20, 30};
//     int top = 2;
//     int item;

//     if(top == -1)
//     {
//         cout << "Underflow";
//     }
//     else
//     {
//         item = stack[top];
//         top = top - 1;

//         cout << "Item popped = " << item;
//     }

//     return 0;
// }
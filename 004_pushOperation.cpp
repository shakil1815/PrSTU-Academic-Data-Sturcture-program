#include <iostream>
using namespace std;

int main()
{
    int stack[5];
    int top = -1;
    int item = 10;

    cout << "Initial TOP = " << top << endl;

    cout << "\nStep No: 1" << endl;
    cout << "Checking Overflow condition..." << endl;

    if(top == 4)
    {
        cout << "Overflow" << endl;
    }
    else
    {
        cout << "Stack is not full" << endl;

        cout << "\nStep No: 2" << endl;
        top = top + 1;

        cout << "TOP = " << top << endl;

        cout << "\nStep No: 3" << endl;
        stack[top] = item;

        cout << "Item " << item << " pushed into stack" << endl;

        cout << "\nStep No: 4" << endl;
        cout << "Current Stack: ";

        for(int i = 0; i <= top; i++)
        {
            cout << stack[i] << " ";
        }

        cout << endl;
        cout << "Current TOP = " << top << endl;
        cout << "Item pushed successfully" << endl;
    }

    return 0;
}





// #include <iostream>
// using namespace std;

// int main()
// {
//     int stack[5];
//     int top = -1;
//     int item = 10;

//     if(top == 4)
//     {
//         cout << "Overflow";
//     }
//     else
//     {
//         top = top + 1;
//         stack[top] = item;

//         cout << "Item pushed";
//     }

//     return 0;
// }
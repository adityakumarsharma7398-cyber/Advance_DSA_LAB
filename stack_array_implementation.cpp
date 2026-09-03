#include <iostream>
using namespace std;

int n = 5;
int stack[5];
int top = -1;


bool isEmpty()
{
    return top == -1;
}


bool isFull()
{
    return top == n - 1;
}


void push(int ITEM)
{
    if (isFull())
    {
        cout << "OverFlow" << endl;
    }
    else
    {
        top++;
        stack[top] = ITEM;
        cout << ITEM << " inserted successfully." << endl;
    }
}


void pop()
{
    if (isEmpty())
    {
        cout << "UnderFlow" << endl;
    }
    else
    {
        cout << "The element is " << stack[top] << endl;
        top--;
    }
}

void Tranverse()
{
    if (!isEmpty())
    {
        cout << "Stack Elements are: ";

        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }

        cout << endl;
        cout << "TOP element is: " << stack[top] << endl;
    }
    else
    {
        cout << "Stack is empty" << endl;
    }
}

int main()
{
    int ch, ITEM;

    cout << "1) Push" << endl;
    cout << "2) Pop" << endl;
    cout << "3) Traverse" << endl;
    cout << "4) Exit" << endl;

    do
    {
        cout << "\nEnter choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
        {
            cout << "Enter item: ";
            cin >> ITEM;
            push(ITEM);
            break;
        }

        case 2:
        {
            pop();
            break;
        }

        case 3:
        {
            Tranverse();
            break;
        }

        case 4:
        {
            cout << "Program Ended." << endl;
            return 0;
        }

        default:
        {
            cout << "Invalid Choice" << endl;
            break;
        }
        }

    } while (ch != 4);

    return 0;
}
// This sorting function will catagorize a list of numbers into three groups: larger, smaller, and equal to a sepcific value.
// Requires [main] to input a list of numbers and a middle value.
#include <iostream>
using namespace std;

void split_list(int size, int *list, int value)
{
    int i = 0;
    int x = 0;
    int y = 0;
    int z = 0;
    for (i; i < size; i++)
    {
        if (list[i] < value)
            x++;
        else if (list[i] > value)
            y++;
        else
            z++;
    }

    int smaller[x];
    int larger[y];
    int equal[z];
    x = 0;
    y = 0;
    z = 0;
    for (i = 0; i < size; i++)
    {
        if (list[i] < value)
            {
                smaller[x] = list[i];
                x++;
            }
        else if (list[i] > value)
            {
                larger[y] = list[i];
                y++;
            }
        else
            {
                equal[z] = list[i];
                z++;
            }
    }

    cout << "smaller than middle value: " << "\n";
    for (int i = 0; i < x; i++)
    {
        cout << smaller[i] << "\n";
    }

    cout << "larger than middle value: " << "\n";
    for (int i = 0; i < y; i++)
    {
        cout << larger[i] << "\n";
    }

    cout << "equal to the middle value: " << "\n";
    for (int i = 0; i < z; i++)
    {
        cout << equal[i] << "\n";
    }
}

int main ()
{
    int size;
    cout << "input the size of the list: ";
    cin >> size;

    int list[size];

    for(int i=0; i < size; i++)
    {
        i++;
        cout << "Insert Number "<< i <<": ";
        i--;
        cin >> list[i];
    }

    int value;
    cout << "input the middle value: ";
    cin >> value;
    split_list(size, list, value);
}

% 222222

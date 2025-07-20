#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i << ": ";
        cin >> arr[i];
    }

    cout << "Array = [";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i < size - 1)
            cout << ", ";
    }
    cout << "]" << endl;

    int start, end;
    cout << "Enter the starting index: ";
    cin >> start;
    cout << "Enter the ending index: ";
    cin >> end;

    int sum = 0;
    for (int i = start; i <= end; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of elements between " << start << " and " << end << " is " << sum << endl;

    return 0;
}

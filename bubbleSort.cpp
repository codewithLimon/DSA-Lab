#include <iostream>
using namespace std;

void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "  ";
    }
}

void bubbleSort(int array[], int size)
{
    for (int boundaryLine = size - 2; boundaryLine >= 0; boundaryLine--)
    {
        for (int i = 0; i <= boundaryLine; i++)
        {
            if (array[i] > array[i + 1])
            {
                swap(array[i], array[i + 1]);
            }
        }
    }
}

int main()
{
    int n;

    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout << "Array before sort: ";
    printArray(array, n);

    cout << "\n"
         << "Array after sort: ";
    bubbleSort(array, n);

    printArray(array, n);
}

#include <iostream>
using namespace std;

int findMin(int array[], int size, int start)
{
    int min = array[start];
    int index = start;

    for (int i = start; i < size; i++)
    {
        if (min > array[i])
        {
            min = array[i];
            index = i;
        }
    }
    return index;
}

int findMax(int array[], int size, int start)
{
    int min = array[start];
    int index = start;

    for (int i = start; i < size; i++)
    {
        if (min < array[i])
        {
            min = array[i];
            index = i;
        }
    }
    return index;
}

void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "  ";
    }
}

void selectionSort(int array[], int size)
{
    int cp = 0;
    int minIndex;

    for (int i = 0; i < size-1; i++)
    {

        minIndex = findMin(array, size, cp);
        swap(array[cp], array[minIndex]);


        cp++;
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
    selectionSort(array, n);

    printArray(array, n);
}

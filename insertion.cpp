#include <iostream>
using namespace std;

void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "  ";
    }
}

void Sort(int array[], int size, int key){
    //sorted array

    int temp;

    for(int i=size-2;i>=0;i--){
        if(key<array[i]){
            array[i+1]=array[i];
            array[i]=key;
        }
    }
}

int main()
{
    int n=7;
    int array[7]={2,8,12,15,17,22,0};
    int key;

    cin>>key;

    cout << "Array before sort: ";
    printArray(array, n);

    cout << "\n"
         << "Array after sort: ";
    Sort(array, n,key);

    printArray(array, n);
}

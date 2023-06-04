#include<iostream>
using namespace std;

int findMin(int array[], int size){
    int min=array[0];
    int index=0;

    for(int i=1;i<size;i++){
        if(min>array[i]){
            min=array[i];
            index=i;
        }
    }
    return index;
}

int main(){
    int n;

    cin>>n;

    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }  


    cout<<"Minimum value: "<<array[findMin(array,n)]<<endl;;
    cout<<"Minimum value at index: "<<findMin(array,n);

}


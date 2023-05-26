#include <iostream>
using namespace std;

//given an array or string , reverse the array/string

void printArray(int arr[], int SIZE){
    for(int i = 0; i<=SIZE-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

void reverseArray(int arr[], int SIZE)
{
    int start = 0;
    int end = SIZE-1;
    printArray(arr,SIZE);
    int temp;
    while (start<end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout<<endl;
    printArray(arr,SIZE);
}
void maxANDmin(int arr[], int SIZE){
    int min = 0;
    int max = 1;

    for(int i = 0; i <= SIZE-1; i++)
    {
        if(arr[i] < arr[min] )
        {
            min = i;
        }
        if(arr[i] > arr[max])
        {
            max = i;
        }
    }
    cout<<"min: "<<arr[min]<<endl;
    cout<<"max: "<<arr[max]<<endl;
}
int main(){

    int SIZE = 5;
    int arr[SIZE] = {-11,10,-5,4,50};
    int temp;

    reverseArray(arr,SIZE);

    printArray(arr,SIZE);
    maxANDmin(arr, SIZE);
}
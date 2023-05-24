#include <iostream>
using namespace std;

//given an array or string , reverse the array/string

void printArray(int arr[], int SIZE){
    for(int i = 0; i<=SIZE-1; i++){
        cout<<arr[i]<<" ";
    }

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
int maxANDmin(int arr[], int SIZE){
    int min = 0;
    int max = 1;

    for(int i = 0; i <= SIZE-1; i++)
    {
        if(a)
    }

}
int main(){

    int SIZE = 5;
    int arr[SIZE] = {1,2,3,4,5};
    int temp;

    reverseArray(arr,SIZE);
    
  


}
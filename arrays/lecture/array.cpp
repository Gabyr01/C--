

#include "array.h"
#include <iostream>
using namespace std;

//for loop
//for (type variableName : arrayName) {
  // code block to be executed
//
void arrayClass::print(int ar[], int size){
    for(int i = 0; i<size;i++)
    {
        cout << ar[i] << ", ";
    }

}


int arrayClass::linearSearch(int ar[], int find, int size){
    for(int i = 0; i < size ; i++ )
    {
        if(find == ar[i])
        {
            return i;
        }
        return -1;
    }

}

/**

int binarySearch(int arr[], int left, int right, int find ){
    while(left<=right){
        int m = left+ (right-left)/2;
    //checks if find is at mid
        if(arr[m] == find )
            return m;
        //if find is greater than the midpoint
        //then the left side is ignored
        if(arr[m]< find)
        {
            left = m + 1;        
        }
        //if find is less than m then ignore right side
        else{
            right = m - 1;
        }
        //if not found
        return -1;
    }
}

int binarySearchRecursion (int arr[], int left, int right, int x)
{
    if(left <= right)
    {
        int m = (left + right)/2;
        if(arr[m] == x)
            return m;
        if(arr[m]< x)
            return binarySearchRecursion(arr, left, m-1, x);
        else
            return binarySearchRecursion(arr, m+1, right, x);
    }
    return -1;
}

**/
#include <iostream>
using namespace std;


/***
# U-Understand
# M-Match
# P-Plan
# I-Implement
# R-Review
# E-Evaulate

 * Given an array arr[] of integers. Find a peak element i.e. an element that is not smaller than its neighbors. 
 * Note: For corner elements, we need to consider only one neighbor. 
 * 
*/

// U-Understand
//arr[] = {1 ,2 , 4, 3, 5}
//look at prev, current, next

//if index = 0 then only look at next 
//if index = arraySize -1 then only look at prev

//if found peak element put into an array 

int findPeak(int arr[] , int n)
{
    //if only 1 element 
    if ( n == 1)
        return 0;
    //if first element is greater than 2nd element 
    if(arr[0]>=arr[1])
        return 0;
    //if last element is greater than second to last element 
    if(arr[n-1]>= arr[n-2])
        return n-1;//return the index number 

    //loop through each index except first and last 
    for (int i = 0+1; i< n-1; i++)
    {
        // check if the neighbors are smaller
        if(arr[i]>= arr[i -1] && arr[i] >= arr[i+1])
        {
            return i;
        }
    }
    return 0;
}

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


int main(){
    int arr[] = { 1, 3, 20, 4, 1, 0 };
    //how many elements an array has
    int arraySize = sizeof(arr)/ sizeof(arr[0]);
    cout << "Index of a peak point is " << findPeak(arr, arraySize)<<endl;
   
   /**
    *Time complexity: O(n), One traversal is needed so the time complexity is O(n) 
    */
    //Time Complexity: O(log N)
    int left = 0;
    int right = arraySize-1;
    cout << "20 FOUND AT INDEX: " << binarySearch(arr, left, right, 20)<<endl;
    
    cout << "20 FOUND AT INDEX: " << binarySearchRecursion (arr, left, right, 20)<<endl;
    return 0;  
}


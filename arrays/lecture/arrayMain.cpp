#include "array.h"
#include <iostream>
using namespace std;

// void print2d(int rows, int cols, int ar[][n]){
//     for (int i = 0; i<rows; i ++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout<<"2D: [" <<i<<"]["<<j<<"]="<<ar[i][j]; 
//         }
//     }



// }
int main(){
    //1. initializing
    //Data_type  array_name[size_of_array];
    //data type: int, double, string
    int SIZE = 5;
    int array1[SIZE] = {  };
    int array2[SIZE] ={1,2,3,4,5};
    int array3[] = {1,2,3,4,5};
    int array4[] {1,2,3,4,5};

    //2. accessing array from index
    cout << array2[0] << endl;
    cout << array3[2] << endl;
    cout << array4[4] << endl;
    
    arrayClass a;
    a.print(array2,SIZE);
    

    cout<<endl;

int rows = 3;
int cols = 2;
    //TWO DIMENSIONAL 
    int twoDimensional[rows][cols] = {{1,2},{3,4},{5,6}};

    for (int i = 0; i < 3; i++) {
        // access columns of the array.
        for (int j = 0; j < 2; j++) {
            cout << "[" << i << "," << j
                 << "]=" << twoDimensional[i][j] << endl;
        }
    }
    return 0;
}


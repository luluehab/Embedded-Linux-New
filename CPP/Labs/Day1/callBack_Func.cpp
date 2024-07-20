#include <iostream>
using namespace std;

int SumOfArr(int* arr, int size)
{
    int sum=0;
     for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}


typedef int(*Func_Ptr)(int* arr , int size);

int* Func(int **arr ,int NumofRows, int* RowSizeArr,Func_Ptr call)
{
    int TwoD_ArrSize=0;
    for(int i=0 ;i< NumofRows ;++i)
    {
       TwoD_ArrSize += RowSizeArr[i]; 
    }

    int* TwoD_Arr =(int*)malloc(NumofRows*(sizeof(int)));
    int index=0;
    for (int i = 0; i < NumofRows; ++i) {
            TwoD_Arr[index] = call(arr[i],RowSizeArr[i]);
            index++;
        
    }
    return TwoD_Arr;

}

int main()
{

    int N_rows = 2;
    int rowSizes[] = {2,4};
    int** array = (int**)malloc(N_rows * sizeof(int*));

    array[0] = (int*)malloc(rowSizes[0]* sizeof(int));
    array[1] = (int*)malloc(rowSizes[1] * sizeof(int));

    array[0][0] = 1;
    array[0][1] = 2;
    array[1][0] = 3;
    array[1][1] = 4;
  array[1][2] = 5;
    array[1][2] = 6;
    int* Final_res = Func(array, N_rows, rowSizes, SumOfArr);

    for (int i = 0; i < N_rows; ++i) {
        cout<<Final_res[i] <<" ";
    }
     cout<<endl;

    free(Final_res);
    for (int i = 0; i < N_rows; i++) {
        free(array[i]);
    }
    free(array);
    return 0;
}

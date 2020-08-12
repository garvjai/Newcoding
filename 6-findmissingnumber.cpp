
#include <iostream>
using namespace std;

//1st method - using the formula n(n+1)/2 that is for the add of n numbers starting from 1;
int Find_miss(int array[], int length)
{
    int total = (length+1)*(length+1+1)/2;
    for (int i = 0; i<length; i++)
    {
        total -=array[i];
    }

    return total;
}

int main()
{
    int arr [] = {1, 2, 4, 6, 9, 8, 3 ,5};
    int length = sizeof(arr)/sizeof(arr[0]);
    int result = Find_miss(arr,length);
    cout <<  result << endl;
    return 0;
}

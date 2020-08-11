
#include <iostream>
using namespace std;

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
    int arr [] = {1, 2, 4};
    int length = sizeof(arr)/sizeof(arr[0]);
    int result = Find_miss(arr,length);
    cout <<  result << endl;
    return 0;
}

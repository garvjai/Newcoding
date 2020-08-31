/* Binary_search
 */
#include<iostream>
using namespace std;

int binary_search(int array[],int length,int ele)
{
    int result = 0;
    int left = 0,right = length-1;
    int mid = 0;
    while (left < right)
    {
        mid = (left + right )/2;
        if(array[mid] == ele)
        {
            result = mid;
            break;
        }
        else if(array[mid] > ele )
        {
            right = mid - 1;
        }
        else
        {
            left  = mid + 1;
        }
    }
    return result;
}

int arr[] = {1,2,3,4,5,6,7,8,9,10};
int main()
{
    int ele;
    int length = sizeof(arr)/sizeof(arr[0]);
    cout << "enter the element you want to search in the given array" << endl;
    cin >> ele;
    int resultindex = binary_search(arr,length, ele);
    cout << "found element at index" << resultindex << endl;
    return 0;
}

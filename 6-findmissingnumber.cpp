///*You are given a list of n-1 integers and these integers are in the range of 1 to n.
// * There are no duplicates in the list. One of the integers is missing in the list.
// * Write an efficient code to find the missing integer.
// */


//#include <iostream>
//using namespace std;

////1st method - using the formula n(n+1)/2 that is for the add of n numbers starting from 1;
//int Find_miss(int array[], int length)
//{
//    int total = (length+1)*(length+1+1)/2;
//    for (int i = 0; i<length; i++)
//    {
//        total -=array[i];
//    }

//    return total;
//}

///* 2nd method "the XOR technique" , in this xor all the elements of array and store it in a variable (a)
// * and xor all the numbers from 1 to n+1 store it in a variable (b)
// * then xor a and b to get the missing number
// */
//int find_miss_xor(int arr[], int length)
//{
//    int a, b;
//    a = arr[0];
//    b = 1;
//    for(int i = 1; i<length; i++)
//    {
//        a ^= arr[i];
//    }
//    for(int i = 2; i<= length+1; i++)
//    {
//        b ^= i;
//    }
//    return a^b;

//}

//int main()
//{
//    int arr [] = {1, 2, 4, 6, 9, 8, 3 ,5};
//    int length = sizeof(arr)/sizeof(arr[0]);
//    int result = Find_miss(arr,length);
//    int result_xor = find_miss_xor(arr,length);

//    cout << "using sum formula technique " <<  result << endl;
//    cout << "using Xor technique " << result_xor << endl;


//    return 0;
//}

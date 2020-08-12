/*Write a function which takes an array and prints the majority element (if it exists),
 * otherwise prints “No Majority Element”. A majority element in an array A[] of size n
 * is an element that appears more than n/2 times (and hence there is at most one such element).
 */
#include <iostream>
#include <map>
#include <functional>

using namespace std ;

map < int, int > m1;
map < int, int >::iterator it;

// First method using the maps.

int main()
{
//int arr [] = {4,5,4,5,4,1,4,1,7};                 // not found majority element
int arr [] = {4,5,4,5,4,1,4,1,7,4,4,4,2,3,4,4,1};   // found majority element
int flag = 0;
int length = sizeof(arr)/sizeof(arr[0]);
cout << "length of array = " << length << endl;
for (int i = 0; i < length; i++)
{
    int temp = arr[i];
    auto itr = m1.find( temp );
    if( itr == m1.end() )
    {
        m1.insert(make_pair(temp,1));
    }
    else
    {
        itr->second++;
    }
}

for (auto &ell : m1)
{
    if(ell.second > length/2)
    {
        cout << "one element is available with majority in the given array = " << ell.first;
        cout << "\nwith occurence of = " << ell.second << " times " << endl;
        flag = 1;
        break;
    }
}

if(flag == 0)
cout << "no element is found with majority in the given array" << endl;

    return 0;
}

//second method using the double for loop
// third method using the binary search tree
// fouth method using the Using Moore’s Voting Algorithm

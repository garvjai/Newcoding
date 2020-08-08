///*Write a function which takes an array and prints the majority element (if it exists),
// * otherwise prints “No Majority Element”. A majority element in an array A[] of size n
// * is an element that appears more than n/2 times (and hence there is at most one such element).
// */
//#include <iostream>
//#include <unordered_map>
//#include <map>
//#include <unordered_set>

//using namespace std ;

//map < int, int > m1;
//map < int, int >::iterator it;

//int main()
//{
//int arr [] = {4,5,4,5,4,1,4,1,4,2,4,3,4,4,4,7};
//int length = sizeof(arr)/sizeof(arr[0]);
//m1.insert(make_pair(arr[0],1));
//for (int i = 1; i < length; i++)
//{
//    int temp = arr[i];
//    auto itr = m1.find( temp );
//    if( itr == m1.end() )
//    {
//        m1.insert(make_pair(temp,1));
//    }
//    else
//    {
//        itr->second++;
//    }
//}
//for (auto &ell : m1)
//{
//    cout << ell.first << " " << ell.second << end;
//}

//    return 0;
//}

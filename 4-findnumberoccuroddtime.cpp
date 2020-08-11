/*Find the Number Occurring Odd Number of Times
 * Given an array of positive integers.
 * All numbers occur even number of times except one number
 * which occurs odd number of times. Find the number in O(n) time & constant space.
 */
#include <iostream>
#include <map>
using namespace std;
map<int,int> m1;
map<int,int> :: iterator it;
void map_insert(int key, int value)
{
    m1.insert(make_pair(key,value));
}
void map_display(map<int,int> m)
{
    for (auto &ell : m)
        cout << ell.first << " " << ell.second << endl;
}
int find_odd(map<int,int> m)
{
    for(it = m.begin(); it!=m.end(); it++)
    {
        if(it->second %2 != 0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {2,2,2,2,1,1,3,3,4,4,5,5,5};
    int length = sizeof(arr)/sizeof(arr[0]);
    int status  = 0;

    for( int i = 0; i< length; i++)
    {
        int temp = arr[i];
        it = m1.find(temp);
        if(it != m1.end())
        {
            it->second++;
        }
        else
        {
            map_insert(temp,1);
        }
    }

   status = find_odd(m1);
   if(status)
   {
        cout << "Odd Occurence found in the given array and that is = " << it->first << endl;
   }
   else
   {
       cout <<  "no number found with odd occurence " << endl;
   }


    return 0;
};

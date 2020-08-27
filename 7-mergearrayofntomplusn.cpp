/* Merge an array of size n into another array of size m+n
 * There are two sorted arrays. First one is of size m+n containing only m elements.
 * Another one is of size n and contains n elements. Merge these two arrays into the first array of
 * size m+n such that the output is sorted.
 * Input: array with m+n elements (mPlusN[]).
 */
#include <iostream>
using namespace std;

int main()
{
int MplusN [] = {NULL, 5, NULL, 7, NULL, 9, 10, NULL, 15, NULL, 18};
int Narray[] = {2,6,8,11,16};
int mn = sizeof(MplusN)/sizeof(MplusN[0]);
int n = sizeof(Narray)/sizeof(Narray[0]);

//void merge(MplusN,Narray,mplusn,n);

for(int i = 0,j = 0; i<mn; i++)
{
    if(MplusN[i] == NULL)
    {
        MplusN[i] = Narray[j];
        j++;
    }
}
for(int i=0; i<mn; i++)
{
    cout << MplusN[i] << endl;
}
cout << "size of mplusn array = " << sizeof(MplusN) << endl;
   return 0;
}

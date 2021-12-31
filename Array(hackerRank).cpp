
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sizeArr;
int start = 0;
int endArr;

int main()
{
    cin>> sizeArr;
    endArr = sizeArr - 1;
    int arr[sizeArr];
    for(int i=0; i<=endArr; ++i)
    {
        cin>> arr[i];
    }
    
    int temp;
    while(start<endArr)
    {
        temp = arr[start];
        arr[start] = arr[endArr];
        arr[endArr] = temp;
        start++;
        endArr--;
    }
    
    for(int x:arr)
    {
        cout<< x;
    }
    

}


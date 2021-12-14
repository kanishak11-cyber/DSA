#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //code
    int sum = 0, i, j, k, n, A[1000], size, no;

    cin >> no;
    for (i = 0; i < no; i++)
    {
        cin >> size;
        for (j = 0; j < size; j++)
        {
            cin >> A[j];
        }
    }
    for(i=0; i < no; i++)
    {
      for(j=0;j<size;j++)
     {
        cout<<A[j]<<" ";
     }cout<<"\n";
    }

    return 0;
}
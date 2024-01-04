#include<bits/stdc++.h>

using namespace std;
int main()
{
    //bubble sort;
    int a[5]= {81,56,2,12,9};
    bool flag = false;
    int i,j;
    //if(n>1)
    while(!flag)
    {
        flag = true;
        i=0;
        j=1;
        
        while(j<5)
        {
            if(a[i]>a[j])
            {
                swap(a[i],a[j]);
                 flag = false;
            }
            i++;
            j++;
           
        }
    }
    for(i=0;i<5;i++)
    {
        cout<<a[i];
        cout<<" ";
    }

    return 0;
}

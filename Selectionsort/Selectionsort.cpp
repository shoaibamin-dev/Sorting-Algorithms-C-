#include<bits/stdc++.h>
using namespace std;

int main(){
    //selection sort
    
    int a[5] = {54,69,12,2,89};
    //find minimum in rest of the array and swap with the current index;
    //if(n>1)
    for(int i=0;i<5-1;i++)
    {
        int minloc = i;
        for(int j=i+1;j<5;j++)
        {
            if(a[minloc]>a[j])
            {
               minloc = j;
               
            }
        }
        swap(a[i],a[minloc]);
    }
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
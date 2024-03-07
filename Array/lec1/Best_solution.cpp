// efficient solution: o(n)
#include<iostream>

using namespace std ;
int getlargest(int * arr , int n ){
    
    int res = 0 ; 
    for(int i = 1 ; i < n ; i++ )
    {
        if(arr[i]>arr[res])
        res = i ; 
    }
    return res;
    
}
int main()
{
    int n = 6;
    int arr[6] = {5,4,8,26,9,3};
    cout<<arr[getlargest(arr , n)]<<endl;
return 0;
}
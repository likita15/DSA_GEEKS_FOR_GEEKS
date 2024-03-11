// maximum subarray sum :o(n):

#include<iostream>
#include<climits>

using namespace std ;
int maxSubarraySum(int*a , int n){
    int max_ending_sum_ = a[0];
    int res = a[0];
    
    for(int i = 1 ; i < n ; i++)
    {
       max_ending_sum_ = max(max_ending_sum_+a[i], a[i]);
       res  = max(res , max_ending_sum_);
    }
    return res;
}
int main()
{
    int*a = new int[10000];
    int n ;
    cin>>n; 
    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }
    cout<<maxSubarraySum(a , n);
    
   
    delete [] a ; 

return 0;
}
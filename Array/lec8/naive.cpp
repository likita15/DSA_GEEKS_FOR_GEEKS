// maximum subarray sum :o(n^2)
#include<iostream>
#include<climits>

using namespace std ;
int maxSubarraySum(int*a , int n){
    int max_sum_ = INT_MIN;
    for(int i = 0 ; i < n ; i++)
    {
        int res_sum_= 0;
        for(int j = i ; j < n ; j++){
            res_sum_+=a[j];
            max_sum_ = max(max_sum_ , res_sum_);
            

        }
        
    }
    return max_sum_;
}
int main()
{
     int*a = new int[10000];
    int n ;
    cin>>n; 
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    cout<<maxSubarraySum(a , n);
    
   
    delete [] a ; 

return 0;
}
/*  trapping a rain water problem: time complexity: o(n) and the space complexity = o(n)*/

#include<iostream>
using namespace std;
int getWateValue(int*a , int n)
{
    int res = 0 ; 

    int*leftmax_ = new int[10000];
    int*rightmax_ = new int[10000];

    // int leftmax_[n];
    // int rightmax_[n];

    leftmax_[0] = a[0];
    for(int i = 1 ; i < n ; i++)
    {
        leftmax_[i] = max(a[i], leftmax_[i-1]);
    }

   
    
    rightmax_[n-1] = a[n-1];
    for(int i = n-2 ; i >= 0;i--)
    {
        rightmax_[i] = max(a[i],rightmax_[i+1]);
    }

    for(int i = 0 ; i < n ; i++){
        res += min(leftmax_[i],rightmax_[i])-a[i];
    }
    
    delete [] leftmax_; 
    delete [] rightmax_;
    
    return res ;

}
int main(int argc, char const *argv[])
{
    int*a = new int[10000];
    int n ;
    cin>>n; 
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    cout<<getWateValue(a , n);
    // getWateValue(a , n);
    delete [] a ; 

    return 0;
}


/*trapping a rain water problem: time complexity: o(n*(a+b))  */
#include<iostream>
using namespace std;
int getWateValue(int*a , int n)
{
    int res = 0 ; 
    for(int i = 1 ; i < n ; i++)
    {
        //finding the left max :
        int leftmax_ = a[i]; // initialising the element itself as the leftmax_
        for(int j = 0 ; j < i ; j++){
            leftmax_ = max(a[j] , leftmax_);
        }
        //finding the right max:
        int rightmax_  = a[i];// initialising the element itself as the rightmax_
        for(int j = i+1; j <  n ; j++){
            rightmax_ = max(rightmax_ , a[j]);
        }

        //finding out the how much water can be stored in the top of the each wall:
        res+=min(leftmax_ , rightmax_)-a[i];

    }
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
    delete [] a ; 

    return 0;
}


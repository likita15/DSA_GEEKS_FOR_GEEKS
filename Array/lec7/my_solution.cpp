#include<iostream>
using namespace std ;

int maxConsecutiveOnes(int*a , int n){
    int max_one= 0;
    int count_one = 0;
    for(int i = 0 ; i < n ; i++)
    {

        if(a[i]==1)
        {
            count_one++;
            max_one = max(max_one , count_one);
        }
        else
        {
            count_one = 0;
        }
    }
    return max_one;
}

int main()
{
    int*a = new int[10000];
    int n ;
    cin>>n; 
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    cout<<maxConsecutiveOnes(a , n);
   
    delete [] a ; 

   
return 0;
}
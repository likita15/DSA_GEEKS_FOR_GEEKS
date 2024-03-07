#include<iostream>
#include<climits>
using namespace std ;

int getmaxxdiff(int*arr , int n){
    int max_diff = INT_MIN; 
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = i+1 ; j < n; j++)
        {
            int diff = arr[j]-arr[i];
            
            if(diff > max_diff){
                max_diff = diff ;
            }
        }
    }
    return max_diff;
}
int main()
{
    int arr[1000]; int n ; 
    cin>>n ; 
    for(int i = 0 ; i < n ; i++){
       cin >> arr[i];
    }
    cout<<getmaxxdiff(arr , n);

return 0;
}
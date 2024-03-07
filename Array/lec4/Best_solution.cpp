#include<iostream>
#include<climits>


using namespace std ;
int getmax(int*arr , int n){
    int min_v = arr[0] , max_v = arr[1] , res = arr[1]-arr[0];;
    for(int j = 1 ; j < n ; j ++)
    {
        res = max(res  , arr[j]-min_v);
        min_v = min(min_v , arr[j]);
    }
    return res;
}
int main()
{
    int*arr = new int[1000];
    int n ; 
    cin>>n ; 
    for(int i = 0 ; i < n ; i++){
       cin >> arr[i];
    }
   
    int max_val = getmax(arr , n);
    cout<<max_val;
    
    delete [] arr ;

return 0;
}
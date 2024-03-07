// Find the largest element in the array:

#include<iostream>
using namespace std ;
int getlargest(int*arr , int n){
    for(int i = 0 ; i < n ; i++){
        bool flag = true;
        for(int j = 0 ; j < n ; j++){
            if(arr[i]<arr[j])
            {
                flag = false;
                break;
            }
        }
        if(flag == true){
            return i ;
        }
    }
    return -1;
}
int main()
{
    int n = 6;
    int arr[6] = {5,4,8,26,9,3};
    cout<<arr[getlargest(arr , n)]<<endl;
    

return 0;
}
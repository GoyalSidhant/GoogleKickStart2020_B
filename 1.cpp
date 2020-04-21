#include<iostream>
#include<vector>
using namespace std ;

int main(){

    int t ;
    cin >> t ; 
    int tc = 0 ;
    while(t--){
        ++tc;
        int n ; 
        cin >> n ; 
        int arr[n] ; 
        for(int i = 0 ; i < n ; i ++){
            cin >> arr[i];
        }

        int counter = 0 ;

        for(int i = 1 ; i < n-1 ; i++){

            if((arr[i]> arr[i-1])  && (arr[i] > arr[i+1])){
                counter++;
            }

        }
        // cout solution 
        cout <<"Case #"<<tc<<": "<<counter<<endl; 

    }
    return 0;
}
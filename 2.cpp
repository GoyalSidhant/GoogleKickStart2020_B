#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int main(){

    int t ;
    cin >> t ; 
    int tc = 0 ;
    while(t--){
        ++tc;
        long long int n  ;
        long long int d;
        cin >> n >> d ; 
        long long int arr[n]; 
       
        for(int i = 0; i < n ; i ++){
            cin >> arr[i];
            
        }

       long long int departure = d;
            for(int i = n - 1; i >= 0; i--) {
                departure -= (departure % arr[i]);
            }


        // cout solution 
        cout <<"Case #"<<tc<<": "<<departure<<endl; 

    }
}
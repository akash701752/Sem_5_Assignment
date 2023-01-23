#include<iostream>
#include<cmath>
#include<vector>
using namespace std ;
int jumpSearch(vector<int> &v,int key)
{
    int n = v.size() ;
    int step = sqrt(n) , prev = 0  , next ; 
    while(v[min(step,n)-1] < key){
        prev = step ;
        step += sqrt(n) ;
        if(prev >= n){
            return -1 ;
        } 
    }
    while(v[prev] < key){
        prev ++ ;
        if(prev == min(step,n)){
            return -1 ;
        }
    }
    if(v[prev]==key){
        return prev ;
    }
    return -1 ;
}
int main()
{
    int n , i ,key ;
    cout<<"Enter N : ";
    cin>>n ;
    vector <int> v(n) ;
    for(i=0;i<n;i++){
        cin>>v[i] ;
    }
    cout<<"Enter Key to Search : " ;
    cin>>key;
    int ans = jumpSearch(v,key) ;
    if(ans!=-1){
        cout<<"Element Found at Index : "<<ans <<endl ;
    }
    else{
        cout<<"Element is NOT Found "<< endl ;
    }
    return 0 ;
}
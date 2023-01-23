#include<iostream>
#include<vector>
using namespace std ;
int binarySearch(vector<int> &v,int key)
{
    int l = 0 , r = v.size() , n = v.size() ;
    while(l<=r){
        int mid = (l+r)/2 ;
        if(v[mid]==key){
            return mid ;
        }
        else if (v[mid]>key){
            r = mid -1 ;
        }
        else if (v[mid]<key){
            l = mid +1 ;
        }
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
    int ans = binarySearch(v,key) ;
    if(ans!=-1){
        cout<<"Element Found at Index : "<<ans <<endl ;
    }
    else{
        cout<<"Element is NOT Found "<< endl ;
    }
    return 0 ;
}
#include<iostream>
#include<vector>
using namespace std ;
void merge(vector<int> &v,int l,int mid,int r)
{
    int n = (r-l) +1 , k = 0; 
    vector<int> c(n) ;
    int i= l , j = mid+1 ;
    while(i<=mid && j<=r){
        if(v[i]<=v[j]){
            c[k++] = v[i] ;
            i++ ;
        }
        else{
            c[k++] = v[j] ;
            j++ ;
        }
    }
    while(i<=mid){
        c[k++] = v[i] ;
        i++ ; 
    }
    while(j<=r){
        c[k++] = v[j] ;
        j++ ;
    }
    for(int i=0,j=l;i<n;i++,j++){
        v[j] = c[i] ;
    }
}
void mergeSort(vector<int> &v,int l,int r)
{
    if(l<r)
    {
        int mid = (l+r)/2 ;
        mergeSort(v,l,mid) ;
        mergeSort(v,mid+1,r);
        merge(v,l,mid,r) ;
    }
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
    mergeSort(v,0,n-1);
    for(i=0;i<n;i++){
        cout<<v[i]<<" " ;
    }
    cout<<endl ;
    return 0 ;
}
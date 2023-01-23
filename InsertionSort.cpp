#include<iostream>
#include<vector>
using namespace std ;
void insertionSort(vector<int>& v)
{
    int n = v.size() , i , j ;
    for(i=0;i<n;i++)
    {
        int key = v[i] ;
        int j = i -1 ;
        while(j>=0 && v[j]>key){
            v[j+1] = v[j] ;
            j-- ;
        }
        v[j+1] = key ;
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
    insertionSort(v);
    for(i=0;i<n;i++){
        cout<<v[i]<<" " ;
    }
    cout<<endl ;
    return 0 ;
}
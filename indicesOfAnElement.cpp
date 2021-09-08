#include <iostream>
#include<vector>
using namespace std;

int firstIndexOf(int arr[], int n,int x,int start){
    if(n==0) return -1;
    if(arr[0]==x) return start;

   return firstIndexOf(arr+1,n-1,x,start+1);    

}

int lastIndexOf(int arr[], int n, int x , int end){
    if(n==0) return -1;
    if(arr[n-1]==x) return end;
    
    return lastIndexOf(arr,n-1,x,end-1);
}


void solve(int arr[], int n, int x, int start, vector<int>&a){
    if(n==0) return;
    if(arr[0]==x){
        a.push_back(start);
    }
    solve(arr+1,n-1,x,start+1,a);
}


vector<int>allIndicesof(int arr[],int n,int x,int start){
   static vector<int>a;
    solve(arr,n,x,start,a);
    if(a.size()==0) a.push_back(-1);
    return a;
}

int main() {
   int arr[] = {4,5,1,5,6,4,6,2,9,6};
   int n= sizeof(arr)/sizeof(arr[0]);
   int x= 6;

   //cout<<firstIndexOf(arr,n,x,0);
   //cout<<lastIndexOf(arr,n,x,n-1);

   vector<int>ans = allIndicesof(arr,n,x,0);

   for(auto i:ans){
       cout<<i<<" ";
   }
   

}

#include <bits/stdc++.h>

using namespace std;

bool isSortedArray(int arr[], int n){         
if(n==0||n==1) return true;
return  arr[0]<arr[1] ?true:false;

return isSortedArray(arr+1,n-1);

}

void insertElement(vector<int>&arr,int element){
    if(arr.size()==0||arr[arr.size()-1]<=element){
       arr.push_back(element);
       return;
    }
    
    int temp = arr[arr.size()-1];
    arr.pop_back();
    insertElement(arr,element);
    arr.push_back(temp);
}

void sortArray(vector<int>&arr){
  if(arr.size()==1) return;

    int last_element = arr[arr.size()-1];
    arr.pop_back();
    sortArray(arr);
    insertElement(arr,last_element);
}

void checkAndSort(int arr[], int n){
    bool ans =isSortedArray(arr,n);

    if(ans) cout<<ans;
    else{ 
        vector<int>arr2(arr,arr+n); //vector arr2 will contain elements from arr
        sortArray(arr2);
        for(auto i:arr2){ //printing sorted array
            cout<<i<<" ";
    }

    }
}

int main() {

int arr[] = {4,1,3,7,9,5};
int n=sizeof(arr)/sizeof(arr[0]);
checkAndSort(arr,n);


}

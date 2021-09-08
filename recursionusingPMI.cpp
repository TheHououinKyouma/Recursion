#include <iostream>
using namespace std;

int power(int x, int n){
    if(n==0) return 1;
    return x * power(x,n-1);
}

int sumTillN(int n){
    if(n==1) return 1;
    return n+ sumTillN(n-1);
}

int fact(int n){
    if(n==1)
        return n;
    if(n==0) return 1;
    return n*fact(n-1);
}

void printTillN(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }

     printTillN(n-1);
     cout<<n<<" ";
}
long int countDigits(int n){
    if(n%10 == n) return 1;
    return 1+countDigits(n/10);
}



int main() {
    //cout<<power(0,3);
    // cout<<sumTillN(4);
    //cout<<fact(0);
   // printTillN(5);
  // cout<<countDigits(534091321);

  

}

#include <iostream>
#include<string>
using namespace std;

void removeCharacter(string&s, char element,int n){
    if(n==0) return;
    if(s[n-1]==element) {
        s.erase(n-1,1);
    }
    removeCharacter(s,element,n-1);
}

void replacePi(string&p, int n,string pi){

    if(n==0) {
        return;
    }


    if(p[n-1]=='i' && p[n-2]=='p'){
        p.erase(n-2,2);
        p.insert(n-2,pi);
    }

    replacePi(p,n-1,pi);

}


int main() {
    // string s = "xeroxkingxxor";
    // char element = 'x';
    // removeCharacter(s,element,s.size());
    // cout<<s<<endl;

    string p ="piping hot pie";
    string pi = "3.14";
    replacePi(p,p.size(),"3.14");
    cout<<p<<endl;

}

//
// Created by Saijun Hu on 2019-03-01.
// 本题需要特殊处理下1和0次的情况
#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;cin>>n;
    string s;
    for(int i=n;i>1;--i){
        int t;
        cin>>t;
        if(t>0) {
            if(t==1) s+="+x^"+to_string(i);
            else s+="+"+to_string(t)+"x^"+to_string(i);
        }
        else if(t<0) {
            if(t==-1) s+="-x^"+to_string(i);
            else s+=to_string(t)+"x^"+to_string(i);
        }
        else continue;
    }
    //
    if(n>=1){
        int t;
        cin>>t;
        if(t>0) {
            if(t==1) s+="+x";
            else s+="+"+to_string(t)+"x";
        }
        else if(t<0) {
            if(t==-1) s+="-x";
            else s+=to_string(t)+"x";
        }
    }
    //cin>>0
    if(n>=0){
        int x;cin>>x;
        if(x>0) s+="+"+to_string(x);
        else if(x<0) s+=to_string(x);
    }

    if(s.front()=='+') s.erase(0,1);
    cout<<s<<endl;
    return 0;
}

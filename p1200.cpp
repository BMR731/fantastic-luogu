//
// Created by Saijun Hu on 2019-03-02.
//
#include <iostream>
using namespace std;

int value(string s){
    int sum=1;
    for (int i = 0; i < s.length(); ++i) {
        int a = s[i]-int('A')+1;
        sum*=a;
    }
    return sum%47;
}
int main(){
    string p,q;
    cin>>p>>q;
    if(value(p)==value(q)) cout<<"GO"<<endl;
    else cout<<"STAY"<<endl;
    return 0;
}
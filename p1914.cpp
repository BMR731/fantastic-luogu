//
// Created by Saijun Hu on 2019-03-02.
//

#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    char dic[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string s;cin>>s;
    for (int i = 0; i < s.length(); ++i) {
        int pos = int(s[i])-int('a');
        int k=n%26;
        while(k--){
            pos=(pos+1)%26;
        }
        s[i]=dic[pos];
    }
    cout<<s<<endl;
    return 0;
}
//
// Created by Saijun Hu on 2019-03-02.
// 采用空间换时间的策略，同时记录两个map，很方便查
#include <iostream>
#include <map>

using namespace std;

int main(){
    map<char,char> m1;//<encoded,origin>
    map<char,char> m2;//<origin,encoded>
    string i1,o,i2;cin>>i1>>o>>i2;
    bool flag=true;
    for (int i = 0; i < o.length(); ++i) {
        if(!m2.count(o[i])){
            m2[o[i]] = i1[i];
        }else{
            if(m2[o[i]]!=i1[i]) { flag=false;break;}
        }
        if(!m1.count(i1[i])){
            m1[i1[i]]=o[i];
        }else{
            if(m1[i1[i]]!=o[i]){flag=false;break;}
        }
    }
    if(m1.size()!=26 || m2.size()!=26) flag=false;
    if (!flag) cout<<"Failed"<<endl;
    else{
        for (int i = 0; i < i2.length(); ++i) {
            i2[i] = m1[i2[i]];
        }
        cout<<i2<<endl;
    }
    return 0;
}

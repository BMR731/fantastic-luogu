//
// Created by Saijun Hu on 2019-03-02.
// 我想多了，一开始想用回溯法生成后再排列，最后。。。
// 原来只要写个cmp函数就解决了。。非常巧妙了，学习学习

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
vector<string> v;

bool cmp(string a,string b){
    return a+b > b+a;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end(),cmp);
    for (int i = 0; i <v.size() ; ++i) {
        cout<<v[i];
    }
    cout<<endl;
    return 0;
}
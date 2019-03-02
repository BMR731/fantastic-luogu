
// Created by Saijun Hu on 2019-03-01.
// 特意学习自动机的做法

#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;
//设定的状态，有限自动机当前的状态可以理解为上个字母的状态
//这个值的设定有讲究
const int SPACE=0;
const int LETTER=-1;
const int WORD=1;

int main(){
    string p;cin>>p;getchar();
    string s;
    getline(cin,s);
    transform(p.begin(),p.end(),p.begin(),::tolower);
    transform(s.begin(),s.end(),s.begin(),::tolower);

    int cnt=0;int fp=-1;int state=0;
    int i;
    for (i = 0; i < s.length(); ++i) {
        switch (state){
            case SPACE:
                if(s[i]==p[0]) state=WORD;
                else if(s[i]==' ') state=SPACE;
                else state=LETTER;
                break;
            case LETTER:
                if(s[i]==' ') state=SPACE;
                break;
                //else continue keep letter state;
            default:
                if(state<p.length()){
                    if(s[i]==' ') state=SPACE;
                    else if(s[i]==p[state]) state++;//变成下一个字母状态
                    else state=LETTER;
                }else if(state==p.length()){//已配完，检查下一个字母的情况
                    if(s[i]==' '){
                        state=SPACE;
                        if(fp==-1) fp=i-p.length();
                        cnt++;
                    }else{
                        state=LETTER;
                    }
                }
        }

    }
    if(state==p.length()){
        cnt++;
        if(fp==-1) fp=i-1-p.length();
    }
    if(fp==-1) cout<<-1<<endl;
    else cout<<cnt<<" "<<fp<<endl;
    return 0;
}
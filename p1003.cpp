//
// Created by Saijun Hu on 2019-03-01.
//
#include <iostream>
#include <vector>

using namespace std;

struct rec{
    int order,x1,y1,x2,y2;
    rec(int order,int x1,int y1,int x2,int y2):order(order),x1(x1),y1(y1),x2(x2),y2(y2){}
};
bool in_rec(rec r,int x,int y){
    if(x>=r.x1&&x<=r.x2&&y>=r.y1&&y<=r.y2) return true;
    else return false;
}
int main(){
    int n;cin>>n;
    vector<rec> recs;
    for(int i=1;i<=n;i++){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        recs.push_back(rec(i,a,b,a+x,b+y));
    }
    int x,y;
    cin>>x>>y;
    bool flag=false;
    for(int i=recs.size()-1;i>-1;--i){
        if(in_rec(recs[i],x,y)) {
            flag=true;
            cout<<recs[i].order;
            break;
        }
    }
    if(flag==false) cout<<-1<<endl;
    return 0;
}

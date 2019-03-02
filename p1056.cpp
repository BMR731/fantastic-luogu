//
// Created by Saijun Hu on 2019-03-01.
//
#include <iostream>
#include <vector>

using namespace std;
struct point{
    int x,y;
    point(int x=0, int y=0) : x(x), y(y) {}
};
vector<pair<point,point>> pairs;


int main(){
    int m,n,k,l,d;
    cin>>m>>n>>k>>l>>d;
    for (int i = 0; i < n; ++i) {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        pairs.push_back({point(x1,y1),point(x2,y2)});
    }

    for (int i = 1; i <=m ; ++i) {
        for (int j = 1; j <=n; ++j) {

        }
    }
    return 0;
}

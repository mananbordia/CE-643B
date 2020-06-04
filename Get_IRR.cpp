#include <bits/stdc++.h> 
using namespace std;

double func(double x){
    return 50/x + 25/(x*x) + 45/(x*x*x) + 70/(x*x*x*x); 
}
int main(){
    double l = 0, r=1;
    while(l<r){
        double m = (l+r)/2;
        if(func(m+1)>=100 && func(m+1)-100<1e-5){
            r = m;
            break;
        }
        if(func(m+1)>100){
            l = m;
        }
        else r = m;
    }
    cout<<r; // 0.290128
}

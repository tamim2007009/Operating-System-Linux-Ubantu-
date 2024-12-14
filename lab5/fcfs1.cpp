#include <bits/stdc++.h>
using namespace std;

int main() {
 ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 int t,n,a,b,c,d,sum=0;cin>>n;

vector<vector<int>>v ;
vector<int>p;
for(int i=1;i<=n;i++){
    cin>>d>>a>>b;
   sum+=a;
    p.push_back(b);
    p.push_back(a);
    p.push_back(d);
    v.push_back(p);
     p.clear();
}
sort(v.begin(),v.end());
double tot=0;
int wait[n+1],turn[n+1],response[n+1];
double t_wait=0,t_turn=0,t_response=0;
for(auto x:v){
    a=x[0];
    b=x[1];
    c=x[2];
    if(tot>=a){
        wait[c]=tot-a;
        response[c]=tot-a;
        tot+=b;
        turn[c]=tot-a;
    }
    else{
        wait[c]=0;
        response[c]=0;
        tot=a+b;
        turn[c]=tot-a;
    }
    t_wait+=wait[c];
    t_turn+=turn[c];
    t_response+=response[c];
}
t_response/=n;
t_turn/=n;
t_wait/=n;

double cpu=(sum/tot)*100;
double throughput=(double)n/tot;
cout<<cpu<<" "<<throughput<<endl;

cout<<t_wait<<" "<<t_turn<<" "<<t_response<<"\n";

    return 0;
}
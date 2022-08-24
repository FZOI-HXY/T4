#include <bits/stdc++.h>
#define ra register int
using namespace std;
int n,G[1005][4],fa[1005];
long long ans=0;
struct Node{
    int x,y,cost;
};
vector<Node> bian;
inline int find(int x){
    while(x!=fa[x]){
        x=fa[x]=fa[fa[x]];
    }
    return x;
}
inline void merge(int x,int y){
    int rx=find(x),ry=find(y);
    fa[rx]=ry;
}
inline void kruskal(){
    sort(bian.begin(),bian.end());

}
int main() {
    scanf("%d",&n);
    for(ra i(1);i<=n;++i){
        fa[i]=i;
    }
    for(ra i(1);i<=n;++i){
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        G[i][1]=x,G[i][2]=y,G[i][3]=z;
    }
    for(ra i(1);i<=n;++i){
        for(ra j(1);j<=n;++j) {
            if(j==i){
                continue;
            }
            int cost=min(abs(G[i][1]-G[j][1]),min(abs(G[i][2]-G[j][2]),abs(G[i][3]-G[j][3])));
            bian.push_back({i,j,cost});
        }
    }
    kruskal();
    return 0;
}

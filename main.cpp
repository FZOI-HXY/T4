#include <bits/stdc++.h>
#define ra register int
using namespace std;
int n,G[1005][4];
vector<int> bian;
int main() {
    scanf("%d",&n);
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
            int cost=min(abs(G[i][1]-G)
            bian.push_back()
        }
    }
    return 0;
}

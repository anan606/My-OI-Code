#include<iostream>
using namespace std;
int n;
int dx[4]={1,0,-1,0},dy[4]={0,-1,0,1};
int map[31][31];
void bfs(int p,int q){
    int h[1000][2];
    int t,w,x,y,i;
    map[p+1][q+1]=2;t=0;w=1;
    h[1][1]=p+1;h[1][2]=q+1;
    do{
        t++;
        for(i=0;i<=3;i++){
            x=h[t][1]+dx[i];y=h[t][2]+dy[i];
            if(map[x][y]==0){
                w++;
                h[w][1]=x;h[w][2]=y;
                map[x][y]=2;
            }
        }
    }while(t<w);
}
int main(){
    int i,j;
    bool f=0;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>map[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(map[i][j]==1){
                bfs(i,j);
                f=1;
                break;
            }
        }
        if(f)break;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<map[i][j]<<" ";
        }
        cout<<endl;
    }
}
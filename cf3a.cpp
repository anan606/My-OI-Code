#include <iostream>
#include <queue>
using namespace std;
struct pos {
	int x,y,s;
	string move[100];
};
queue<pos>q;
int dx[8]= {-1,1,0,0,-1,-1,1,1};
int dy[8]= {0,0,1,-1,1,-1,1,-1};
string st[8]= {"L","R","U","D","LU","LD","RU","RD"};
bool vis[10][10];
int x,y;
int main() {
	string s1,s2;
	cin>>s1>>s2;
	q.push((pos) {
		s1[0]-'a'+1,s1[1]-'0',0,""
	});
	vis[s1[0]-'a'+1][s1[1]-'0']=1;
	x=s2[0]-'a'+1,y=s2[1]-'0';
	if(vis[x][y]) {
		cout<<0<<endl;
		return 0;
	}
	while(!q.empty()) {
		pos u=q.front();
		q.pop();
		for(int i=0; i<8; i++) {
			pos th;
			th.x=u.x+dx[i];
			th.y=u.y+dy[i];
			th.s=u.s+1;
			for(int i=1; i<=u.s; i++)
				th.move[i]=u.move[i];
			th.move[th.s]=st[i];
			if(th.x<1||th.x>8||th.y<1||th.y>8||vis[th.x][th.y])
				continue;
			vis[th.x][th.y]=1;
			if(th.x==x&&th.y==y) {
				cout<<th.s<<endl;
				for(int j=1; j<=th.s; j++)
					cout<<th.move[j]<<endl;
				return 0;
			}
			q.push(th);
		}
	}
	return 0;
}

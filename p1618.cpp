#include<iostream>
using namespace std;
int main() {
	bool visit[10]= {},flag=0;
	int a,b,c;
	cin>>a>>b>>c;
	for(int i1=1; i1<=9; i1++) {
		visit[i1]=1;
		for(int i2=1; i2<=9; i2++) {
			if(visit[i2])continue;
			visit[i2]=1;
			for(int i3=1; i3<=9; i3++) {
				if(visit[i3])continue;
				visit[i3]=1;
				for(int i4=1; i4<=9; i4++) {
					if(visit[i4])continue;
					visit[i4]=1;
					for(int i5=1; i5<=9; i5++) {
						if(visit[i5])continue;
						visit[i5]=1;
						for(int i6=1; i6<=9; i6++) {
							if(visit[i6])continue;
							visit[i6]=1;
							for(int i7=1; i7<=9; i7++) {
								if(visit[i7])continue;
								visit[i7]=1;
								for(int i8=1; i8<=9; i8++) {
									if(visit[i8])continue;
									visit[i8]=1;
									for(int i9=1; i9<=9; i9++) {
										if(visit[i9])continue;
										int n1=i1*100+i2*10+i3;
										int n2=i4*100+i5*10+i6;
										int n3=i7*100+i8*10+i9;
										if(double(n1)/n2==double(a)/b&&double(n2)/n3==double(b)/c) {
											flag=1;
											cout<<i1<<i2<<i3<<" "<<i4<<i5<<i6<<" "<<i7<<i8<<i9<<endl;
										}
									}
									visit[i8]=0;
								}
								visit[i7]=0;
							}
							visit[i6]=0;
						}
						visit[i5]=0;
					}
					visit[i4]=0;
				}
				visit[i3]=0;
			}
			visit[i2]=0;
		}
		visit[i1]=0;
	}
	if(!flag)cout<<"No!!!"<<endl;
	return 0;
}

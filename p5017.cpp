#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <cctype>

using namespace std;

int read()
{
    int x=0,f=1;char ch=getchar();
    while (!isdigit(ch)){if (ch=='-') f=-1;ch=getchar();}
    while (isdigit(ch)){x=x*10+ch-48;ch=getchar();}
    return x*f;
}

int n,m,t[505],mem[505][505];

//��Ϊ0<=st-t[i]<=m����˿��Լ��仯���������Ϊ״̬�ĵڶ�ά 

int solve(int i,int st)//���仯������i����i���ˣ�st����ʼʱ��st 
{
    if (i==n+1)//�����˶��ϳ��� 
        return 0;
    if (st<t[i])//������ڵ�ʱ��û���ˣ��͵���һ���˵ĵ���ʱ�� 
        return solve(i,t[i]);
    if (mem[i][st-t[i]])//���仯 
        return mem[i][st-t[i]];
    int sum=0,j=i;
    //������ 
    while (j<=n && t[j]<=st)
        sum+=t[j++];
    int best=st*(j-i)-sum+solve(j,st+m); 
    //�˵ȳ�
    for (;j<=n;j++)
    {
        sum+=t[j];
        best=min(t[j]*(j-i+1)-sum+solve(j+1,t[j]+m),best);
    }
    return mem[i][st-t[i]]=best;
}

int main()
{
    //memset(mem,-1,sizeof(mem));
    n=read(),m=read();
    for (int i=1;i<=n;i++)
        t[i]=read();
    sort(t+1,t+n+1);//��Ȼ��С������ʱ����������� 
    cout << solve(1,0) << endl;
    return 0;
}

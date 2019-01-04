#include<iostream>
#include<string>
using namespace std;
struct student {
    string name;
    int a,c,n,sum;
    char l,w;
};
student stu[101];
int main() {
    int n,s=0,max=0;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>stu[i].name>>stu[i].a>>stu[i].c>>stu[i].l>>stu[i].w>>stu[i].n;
        stu[i].sum=(stu[i].a>80&&stu[i].n>0?8000:0)
                   +(stu[i].a>85&&stu[i].c>80?4000:0)
                   +(stu[i].a>90?2000:0)
                   +(stu[i].a>85&&stu[i].w=='Y'?1000:0)
                   +(stu[i].c>80&&stu[i].l=='Y'?850:0);
        if(stu[max].sum<stu[i].sum) max=i;
        s+=stu[i].sum;
    }
    cout<<stu[max].name<<endl<<stu[max].sum<<endl<<s<<endl;
    return 0;
}

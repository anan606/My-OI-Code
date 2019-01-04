#include<fstream>
#include<iostream>
using namespace std;
ofstream fout("text.cpp");
int main(){
	int n;
	cin>>n;
	fout<<"#include<iostream>\nusing namespace std;\nint main(){\n";
	for(int i=1;i<=n;i++) fout<<"\tcout<<\""<<i<<"\"<<endl;"<<endl;
	fout<<"\treturn 0;\n}";
	fout.close();
	return 0;
}

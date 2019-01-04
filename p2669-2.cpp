#include<iostream>
#include<windows.h>
using namespace std;
int CALLBACK WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow){
	MessageBox(NULL,"Hello","Caption",MB_OK);
	return 0;
}

// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CMyfeet
{
private:
	int cm;
	int dm;
	int mater;
	int foot;
	int inch;
public:
	CMyfeet();
	CMyfeet(int c, int d,int m);
	int ft2(int f, int i);
	int Setfeet(int c, int d, int m);
	void displayfeet();
};
CMyfeet::CMyfeet()
{
	cm = 100;
	dm = 10;
	mater = 1;

}
CMyfeet::CMyfeet(int c, int d, int m)
{
	cm = c;
	dm = d;
	mater = m;
}
int CMyfeet::Setfeet(int c, int d, int m)
{
	cm = c;
	dm = d;
	mater = m;
}
int CMyfeet::ft2(int f, int i)
{
	foot = f;
	inch = i;
	f = cm*0.032808;
	i = cm*0.393700;

}
void CMyfeet::displayfeet()
{
	
	foot = cm*0.032808;
	inch = cm*0.393700;
}
int main()
{
	CMyfeet od;
	od.setfeet(100,10,1);

    return 0;
}


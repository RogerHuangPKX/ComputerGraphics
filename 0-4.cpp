//程序名称：实验0-4：绘制如图所示三角形并填充
//程序功能：绘制如图所示三角形并填充
//编译环境：Visual Studio 2019，EasyX_20210224
//作者：黄金泽 2019308250202 2019308250202@cau.edu.cn
//最后修改时间：1/3/2021

#include <iostream>
#include<easyx.h>
#include<graphics.h>
#include<conio.h>
#include<vector>
#include<cmath>
#include<algorithm>
constexpr auto PI = 3.1415926;

using namespace std;

int main()
{
	initgraph(640, 320);
	setbkcolor(WHITE);
	cleardevice();

	POINT area1[] = { {100,0},{128,0},{48,80},{150,80},{170,100},{0,100},{100,0} };
	setfillcolor(BLUE);
	fillpolygon(area1, 7);

	POINT area2[] = { {0,100},{20,120},{220,120},{128,28},{113,43},{170,100},{0,100} };
	setfillcolor(RED);
	fillpolygon(area2, 7);

	POINT area3[] = { { 76,80},{128,28},{220,120},{228,100},{128,0},{48,80},{76,80} };
	setfillcolor(YELLOW);
	fillpolygon(area3, 7);

	_getch();
}
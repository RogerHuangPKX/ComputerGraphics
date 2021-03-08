//程序名称：实验0-2：多笔绘制如图所示的金刚石图案
//程序功能：输入点数，然后绘制金刚石
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
	int n;
	std::cout << "请输入点的个数（点为奇数且N>=3):";
	std::cin >> n;
	if (n < 3 or n % 2 == 0)
	{
		std::cout << "输入错误！程序退出。";
		getchar();
		exit(65522);
	}
	initgraph(640, 640);
	int x0 = 320; int y0 = 320; int r = 130;
	double t = 2*PI / n;
	vector<int> px;
	vector<int> py;
	setbkcolor(WHITE);
	cleardevice();
	setlinecolor(BLUE);
	for (size_t i = 0; i < n; i++)
	{
		px.push_back(r * cos(i * t) + x0);
		py.push_back(r * sin(i * t) + y0);
	}


	for (size_t i = 0; i <n; i++)
	{

		for (size_t j = 1; j < 0.5*n; j++)
		{
			int now_x, now_y, next_x, next_y;
			line(px[(i + j) % n], py[(i + j) % n], px[(i + j+j) % n], py[(i + j+j) % n]);
		}
			
	}
	_getch();

	return 0;
}
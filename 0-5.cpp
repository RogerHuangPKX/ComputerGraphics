//程序名称：实验0-5：实现鼠标画线的功能
//程序功能：实现鼠标画线的功能
//        按下鼠标左键确定线段起点，抬起左键确定终点并画线
//		  按下鼠标右键清空窗口
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
	initgraph(640, 480);
	MOUSEMSG m;
	
	setbkcolor(0x3893e6);
	cleardevice();
	int x, y;
	while (1)
	{
		m = GetMouseMsg();
		moveto(m.x, m.y);
		if (m.uMsg==WM_LBUTTONDOWN)
		{
			x = m.x; y = m.y;
		}
		if (m.uMsg == WM_LBUTTONUP)
		{
			line(x, y, m.x, m.y);
		}
		if(m.uMsg==WM_RBUTTONDOWN)
		 cleardevice();
	}

	_getch();
	
}
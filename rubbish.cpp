#include <iostream>
// #include <cstring>
#include <cmath>
// #include <string>
// #include <algorithm>

using namespace std;

// int main()
// {
// 	float v0 = 40000.0 / 3600, a = 0.15,
// 		  vt,
// 		  s;
// 	int t = 120;

// 	vt = v0 + a * t;
// 	s = v0 * t + a * t * t / 2;
// 	cout << "s = " << s << "\n";
// 	cout << "vt = " << vt;

// 	return 0;
// }
// y = m * x + b;
// m = (a + b + c) / (e * f);
// a = sqrt((x - 3 * y) * z);
// a = (2 * (x - y)) / (x - y);
// m = (x - y * z) / (2 / c);

// cout << "ceil(-3.14)=" << ceil(-3.14) << "\n";
// cout << "floor(-3.14)=" << floor(3.14) << "\n";
// cout << "4^3.0=" << pow(4, 3.0) << "\n";
// cout << "sqrt(9)=" << sqrt(9) << "\n";

// int b = 1;
// cout << ++b;
// const float pi = 3.1415926535897932384626433832795028841971230781640628620899862803482534211;

int main()
{
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	// int a, b, c;
	// long long s;
	// a = 1234567890;
	// b = 1234567890;
	// c = 1234567890;
	// s = (long long)a + (long long)b + (long long)c;
	// cout << s;

	// char i, j, k;
	// i = '2';
	// j = '1';
	// k = 1;
	// cout
	// 	<< (int)i << ' ' << (char)j + k << '\n';

	// --------

	// 326 / 5 = 65.2
	// 48 / (5 / 326) = 3129.6
	// int m, n, num;
	// int t = 48;
	// char th;
	// double d_1, d_2, d_3;
	// m = 5;
	// n = 326;
	// num = t / ((float)m / n); // 3129
	// d_1 = (float)(n / m);	  // 65
	// d_2 = n / m;			  // 65
	// d_3 = (double)n / m;	  // 65.2
	// th = (double)n / m;		  // A
	// cout << num << " " << d_1 << " " << d_2 << " " << d_3 << " " << th;

	// char c1, c2;
	// int a;
	// float b;
	// cout << "> ";
	// cin >> c1 >> c2 >> a >> b;
	// cout << "< ";
	// cout << c1
	// 	 << "|" << c2 << "|" << a << "|" << b;

	// char s[] = "";
	// cin >> s;
	// strrev(s);
	// cout << s << endl;

	// double km, speed, can, pr;
	// cout << "> ";
	// cin >> km >> speed >> can >> pr;

	// double time, cost;
	// time = km / speed;
	// cost = km / can * pr;

	// cout << time << " " << cost;

	// return 0;

	// double hua, she;

	// cout << "> ";
	// cin >> hua;

	// she = (hua-32)/1.8;
	// cout << she;

	// return 0;
	// double inp1, inp2, inp3, opt;

	// cin >> inp1 >> inp2 >> inp3;

	// if ((inp1 * inp1 + inp2 * inp2) == inp3 * inp3)
	// {
	// 	opt = (inp1 * inp2) / 2;
	// }
	// else if ((inp2 * inp2 + inp3 * inp3) == inp1 * inp1)
	// {
	// 	opt = (inp2 * inp3) / 2;
	// }
	// else if ((inp1 * inp1 + inp3 * inp3) == inp2 * inp2)
	// {
	// 	opt = (inp1 * inp3) / 2;
	// }

	// cout << opt;

	// double inp,opt;

	// cout << "> ";
	// cin >> inp;
	// opt = (inp * 1000 + inp) / 7 / 11 / 13;

	// cout << opt;

	// ---

	// unsigned short a=10;
	// printf("%hu ", a);

	// short b = -10;
	// printf("%hd ", b);

	// unsigned int c = 12345;
	// printf("%u ", c);

	// int d = -12345;
	// printf("%d ", d);

	// unsigned long long e = 2345678901;
	// printf("%llu ", e);

	// long long f = -2345678901;
	// printf("%lld ", f);

	// float g=12.345;
	// printf("%f ", g);

	// double h = 12.3345643;
	// printf("%lf ", h);

	// long double i = 1234.45456;
	// printf("%Lf ", i);

	// bool j = true;
	// printf("%c ", j);

	// bool k = "A";
	// printf("%c ", k);

	// ---

	// int a;
	// double b;
	// char c;
	// scanf("%d,%f,%lf", &a, &b, &c);
	// printf("%d %f %.2lf", a, b, c);

	// ---

	// int a, b;
	// cin >> a >> b;
	// cout << a + b;
	// return 0;

	// Windows.h文件中包含应用程序中所需的数据类型和数据结构的定义
	//  #include <windows.h>
	//  #include <tchar.h>
	//  LRESULT CALLBACK WndProc(HWND,UINT,WPARAM,LPARAM); //窗口函数说明
	//  //------------ 以下初始化窗口类----------------
	//  int WINAPI WinMain( HINSTANCE   hInstance,      //WinMain函数说明
	//                      HINSTANCE   hPrevInst,
	//                      LPSTR       lpszCmdLine,
	//                      int         nCmdShow)
	//  {
	//          WNDCLASSEX wcex ;
	//          HWND hwnd ;
	//          MSG Msg ;
	//          TCHAR *szClassName = _T("窗口示例");        //窗口类名
	//          TCHAR *szTitle = _T("My_Windows");      //窗口标题名
	//          //窗口类的定义
	//          wcex.cbSize = sizeof(WNDCLASSEX);
	//          wcex.style = 0;                     //窗口类型为缺省类型
	//          wcex.lpfnWndProc = WndProc ;        //窗口处理函数为WndProc
	//          wcex.cbClsExtra = 0 ;               //窗口类无扩展
	//          wcex.cbWndExtra = 0 ;               //窗口实例无扩展
	//          wcex.hInstance = hInstance ;        //当前实例句柄
	//          wcex.hIcon = LoadIcon( hInstance, MAKEINTRESOURCE(IDI_APPLICATION) ) ;
	//                                              //窗口的最小化图标为缺省图标
	//          wcex.hCursor = LoadCursor( NULL, IDC_ARROW) ;
	//                                              //窗口采用箭头光标
	//          wcex.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH) ;
	//                                              //窗口背景为白色
	//          wcex.lpszMenuName = NULL ;          //窗口中无菜单
	//          wcex.lpszClassName = szClassName ;//窗口类名为"窗口示例"
	//          wcex.hIconSm = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_APPLICATION) ) ;
	//   //--------------- 以下进行窗口类的注册 -----------------
	//          if( !RegisterClassEx( &wcex))       //如果注册失败则发出警告声音
	//          {
	//              MessageBox(NULL, _T("窗口类注册失败！"), _T("窗口注册"),NULL) ;
	//              return 1 ;
	//          }
	//          //创建窗口
	//          hwnd=CreateWindow(szClassName,      //窗口类名
	//                          szTitle,            //窗口实例的标题名
	//                          WS_OVERLAPPEDWINDOW,    //窗口的风格
	//                          CW_USEDEFAULT,CW_USEDEFAULT,//窗口左上角坐标为缺省值
	//                          CW_USEDEFAULT,CW_USEDEFAULT,//窗口的高和宽为缺省值
	//                          NULL,           //此窗口无父窗口
	//                          NULL,           //此窗口无主菜单
	//                          hInstance,      //创建此窗口的应用程序的当前句柄
	//                          NULL) ;         //不使用该值
	//          if(!hwnd)
	//          {
	//              MessageBox(NULL, _T("创建窗口失败！"), _T("创建窗口"),NULL) ;
	//              return 1 ;
	//          }
	//          ShowWindow( hwnd, nCmdShow) ;   //显示窗口
	//          UpdateWindow(hwnd);             //绘制用户区
	//          while( GetMessage(&Msg, NULL, 0, 0))//消息循环
	//          {
	//              TranslateMessage( &Msg) ;
	//              DispatchMessage( &Msg) ;
	//          }
	//          return (int)Msg.wParam; //消息循环结束即程序终止时将信息返回系统
	//  }
	//  //窗口函数
	//  LRESULT CALLBACK WndProc(HWND hwnd, UINT message,WPARAM  wParam,LPARAM  lParam)
	//  {
	//      switch(message){
	//      case WM_DESTROY:
	//          PostQuitMessage(0); //调用PostQuitMessage发出WM_QUIT消息
	//          break;
	//      default:                //缺省时采用系统消息缺省处理函数
	//          return  DefWindowProc(hwnd,message,wParam,lParam);
	//          break;
	//      }
	//      return (0);
	//  }

	// ---
	// int hh, mm, n;
	// 	scanf("%u", &n);
	// 	for (int i = 0; i < n; i++)
	// 	{
	// 		scanf("%2d:%2d", &hh, &mm);
	// 		if (mm == 0)
	// 		{
	// 			// if (hh == 0 || hh == 12)
	// 			// {
	// 			// 	printf("DangDangDangDangDangDangDangDangDangDangDangDang\n");
	// 			// }
	// 			switch (hh)
	// 			{
	// 			case 0:
	// 				printf("DangDangDangDangDangDangDangDangDangDangDangDang\n");
	// 				break;
	// 			case 1:
	// 				printf("Dang\n");
	// 				break;
	// 			case 2:
	// 				printf("DangDang\n");
	// 				break;
	// 			case 3:
	// 				printf("DangDangDang\n");
	// 				break;
	// 			case 4:
	// 				printf("DangDangDangDang\n");
	// 				break;
	// 			case 5:
	// 				printf("DangDangDangDangDang\n");
	// 				break;
	// 			case 6:
	// 				printf("DangDangDangDangDangDang\n");
	// 				break;
	// 			case 7:
	// 				printf("DangDangDangDangDangDangDang\n");
	// 				break;
	// 			case 8:
	// 				printf("DangDangDangDangDangDangDangDang\n");
	// 				break;
	// 			case 9:
	// 				printf("DangDangDangDangDangDangDangDangDang\n");
	// 				break;
	// 			case 10:
	// 				printf("DangDangDangDangDangDangDangDangDangDang\n");
	// 				break;
	// 			case 11:
	// 				printf("DangDangDangDangDangDangDangDangDangDangDang\n");
	// 				break;
	// 			case 12:
	// 				printf("DangDangDangDangDangDangDangDangDangDangDangDang\n");
	// 				break;
	// 			case 13:
	// 				printf("Dang\n");
	// 				break;
	// 			case 14:
	// 				printf("DangDang\n");
	// 				break;
	// 			case 15:
	// 				printf("DangDangDang\n");
	// 				break;
	// 			case 16:
	// 				printf("DangDangDangDang\n");
	// 				break;
	// 			case 17:
	// 				printf("DangDangDangDangDang\n");
	// 				break;
	// 			case 18:
	// 				printf("DangDangDangDangDangDang\n");
	// 				break;
	// 			case 19:
	// 				printf("DangDangDangDangDangDangDang\n");
	// 				break;
	// 			case 20:
	// 				printf("DangDangDangDangDangDangDangDang\n");
	// 				break;
	// 			case 21:
	// 				printf("DangDangDangDangDangDangDangDangDang\n");
	// 				break;
	// 			case 22:
	// 				printf("DangDangDangDangDangDangDangDangDangDang\n");
	// 				break;
	// 			case 23:
	// 				printf("DangDangDangDangDangDangDangDangDangDangDang\n");
	// 				break;
	// 			case 24:
	// 				printf("DangDangDangDangDangDangDangDangDangDangDangDang\n");
	// 				break;

	// 			default:
	// 				printf("~\n");
	// 				break;
	// 			}
	// 		}
	// 		else
	// 		{
	// 			printf("~\n");
	// 		}
	// 	}
	return 0;
}

/*
格式字符	意义
d	 以十进制形式输出带符号整数(正数不输出符号)
o	 以八进制形式输出无符号整数(不输出前缀0)
x,X	 以十六进制形式输出无符号整数(不输出前缀Ox)
u	 以十进制形式输出无符号整数
f	 以小数形式输出单、双精度实数
e,E	 以指数形式输出单、双精度实数
g,G	 以%f或%e中较短的输出宽度输出单、双精度实数
c	 输出单个字符
s	 输出字符串
p	 输出指针地址
lu	 32位无符号整数
llu	 64位无符号整数


flags（标识）	描述
-	    在给定的字段宽度内左对齐，默认是右对齐（参见 width 子说明符）。
+	    强制在结果之前显示加号或减号（+ 或 -），即正数前面会显示 + 号。默认情况下，只有负数前面会显示一个 - 号。
空格	 如果没有写入任何符号，则在该值前面插入一个空格。
#	    与 o、x 或 X 说明符一起使用时，非零值前面会分别显示 0、0x 或 0X。
		与 e、E 和 f 一起使用时，会强制输出包含一个小数点，即使后边没有数字时也会显示小数点。默认情况下，如果后边没有数字时候，不会显示显示小数点。
		与 g 或 G 一起使用时，结果与使用 e 或 E 时相同，但是尾部的零不会被移除。
0	    在指定填充 padding 的数字左边放置零（0），而不是空格（参见 width 子说明符）。

width（宽度）	描述
(number)	要输出的字符的最小数目。如果输出的值短于该数，结果会用空格填充。如果输出的值长于该数，结果不会被截断。
*	宽度在 format 字符串中未指定，但是会作为附加整数值参数放置于要被格式化的参数之前。

*/
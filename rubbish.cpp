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

	// Windows.h???????????????????????????????????????????????????????????????????????????
	//  #include <windows.h>
	//  #include <tchar.h>
	//  LRESULT CALLBACK WndProc(HWND,UINT,WPARAM,LPARAM); //??????????????????
	//  //------------ ????????????????????????----------------
	//  int WINAPI WinMain( HINSTANCE   hInstance,      //WinMain????????????
	//                      HINSTANCE   hPrevInst,
	//                      LPSTR       lpszCmdLine,
	//                      int         nCmdShow)
	//  {
	//          WNDCLASSEX wcex ;
	//          HWND hwnd ;
	//          MSG Msg ;
	//          TCHAR *szClassName = _T("????????????");        //????????????
	//          TCHAR *szTitle = _T("My_Windows");      //???????????????
	//          //??????????????????
	//          wcex.cbSize = sizeof(WNDCLASSEX);
	//          wcex.style = 0;                     //???????????????????????????
	//          wcex.lpfnWndProc = WndProc ;        //?????????????????????WndProc
	//          wcex.cbClsExtra = 0 ;               //??????????????????
	//          wcex.cbWndExtra = 0 ;               //?????????????????????
	//          wcex.hInstance = hInstance ;        //??????????????????
	//          wcex.hIcon = LoadIcon( hInstance, MAKEINTRESOURCE(IDI_APPLICATION) ) ;
	//                                              //???????????????????????????????????????
	//          wcex.hCursor = LoadCursor( NULL, IDC_ARROW) ;
	//                                              //????????????????????????
	//          wcex.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH) ;
	//                                              //?????????????????????
	//          wcex.lpszMenuName = NULL ;          //??????????????????
	//          wcex.lpszClassName = szClassName ;//???????????????"????????????"
	//          wcex.hIconSm = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_APPLICATION) ) ;
	//   //--------------- ?????????????????????????????? -----------------
	//          if( !RegisterClassEx( &wcex))       //???????????????????????????????????????
	//          {
	//              MessageBox(NULL, _T("????????????????????????"), _T("????????????"),NULL) ;
	//              return 1 ;
	//          }
	//          //????????????
	//          hwnd=CreateWindow(szClassName,      //????????????
	//                          szTitle,            //????????????????????????
	//                          WS_OVERLAPPEDWINDOW,    //???????????????
	//                          CW_USEDEFAULT,CW_USEDEFAULT,//?????????????????????????????????
	//                          CW_USEDEFAULT,CW_USEDEFAULT,//??????????????????????????????
	//                          NULL,           //?????????????????????
	//                          NULL,           //?????????????????????
	//                          hInstance,      //?????????????????????????????????????????????
	//                          NULL) ;         //???????????????
	//          if(!hwnd)
	//          {
	//              MessageBox(NULL, _T("?????????????????????"), _T("????????????"),NULL) ;
	//              return 1 ;
	//          }
	//          ShowWindow( hwnd, nCmdShow) ;   //????????????
	//          UpdateWindow(hwnd);             //???????????????
	//          while( GetMessage(&Msg, NULL, 0, 0))//????????????
	//          {
	//              TranslateMessage( &Msg) ;
	//              DispatchMessage( &Msg) ;
	//          }
	//          return (int)Msg.wParam; //?????????????????????????????????????????????????????????
	//  }
	//  //????????????
	//  LRESULT CALLBACK WndProc(HWND hwnd, UINT message,WPARAM  wParam,LPARAM  lParam)
	//  {
	//      switch(message){
	//      case WM_DESTROY:
	//          PostQuitMessage(0); //??????PostQuitMessage??????WM_QUIT??????
	//          break;
	//      default:                //?????????????????????????????????????????????
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
????????????	??????
d	 ???????????????????????????????????????(?????????????????????)
o	 ???????????????????????????????????????(???????????????0)
x,X	 ??????????????????????????????????????????(???????????????Ox)
u	 ???????????????????????????????????????
f	 ??????????????????????????????????????????
e,E	 ??????????????????????????????????????????
g,G	 ???%f???%e???????????????????????????????????????????????????
c	 ??????????????????
s	 ???????????????
p	 ??????????????????
lu	 32??????????????????
llu	 64??????????????????


flags????????????	??????
-	    ?????????????????????????????????????????????????????????????????? width ??????????????????
+	    ?????????????????????????????????????????????+ ??? -?????????????????????????????? + ????????????????????????????????????????????????????????? - ??????
??????	 ????????????????????????????????????????????????????????????????????????
#	    ??? o???x ??? X ????????????????????????????????????????????????????????? 0???0x ??? 0X???
		??? e???E ??? f ?????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????
		??? g ??? G ????????????????????????????????? e ??? E ????????????????????????????????????????????????
0	    ??????????????? padding ???????????????????????????0?????????????????????????????? width ??????????????????

width????????????	??????
(number)	?????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????
*	????????? format ??????????????????????????????????????????????????????????????????????????????????????????????????????

*/
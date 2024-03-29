#include <iostream>
#include <string.h>

using namespace std;

int n, m, img[101][101], img2[101][101];
string s;

void ssz90()
{
	// cout << "A";
	// int hang = 0, lie = 0;
	for (int j = 1; j <= n; j++)
	{
		// hang++;
		for (int i = 1; i <= m; i++)
		{
			// lie++;
			cout << img[i][j] << " ";
			// img2[lie][hang] = img[i][j];
		}
		cout << endl;
	}
}
void nsz90()
{
	// int hang = 0, lie = 0;
	// cout << "B";
	for (int j = 1; j <= n; j++)
	{
		// hang++;
		for (int i = 1; i <= m; i++)
		{
			// lie++;
			cout << img[i][n - j + 1] << " ";
			// img2[lie][hang] = img[i][j];
		}
		cout << endl;
	}
}
void zyfz()
{
	// int hang = 0, lie = 0;
	// cout << "D";
	for (int i = 1; i <= m; i++)
	{
		// hang++;
		for (int j = n; j > 0; j--)
		{
			// lie++;
			cout << img[i][j] << " ";
			// img2[hang][lie] = img[i][j];
		}
		cout << endl;
	}
}
void sxfz()
{
	// int hang = 0, lie = 0;
	// cout << "C";
	for (int i = m; i > 0; i--)
	{
		// hang++;
		for (int j = 1; j <= n; j++)
		{
			// lie++;
			cout << img[i][j] << " ";
			// img2[hang][lie] = img[i][j];
		}
		cout << endl;
	}
}
int main()
{
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);

	cin >> n >> m;
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> img[i][j];
		}
	}


	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		char cz = s[i];
		// cout << cz;
		if (cz == 65)
			ssz90();
		else if (cz == 66)
			nsz90();
		else if (cz == 67)
			zyfz();
		else if (cz == 68)
			sxfz();
		cout << endl;
	}


	for (int i = 1; i <= m; i++)
	{
	    for (int j = 1; j <= n; j++)
	    {
	        cout << img2[i][j] << " ";
	    }
	    cout << endl;
	}

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

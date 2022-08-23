#include <iostream>
#include <string.h>

using namespace std;

int n, m, img[101][101], img2[101][101];
string s;

void ssz90()
{
	// cout << "A";
	for (int j = 1; j <= n; j++)
	{
		for (int i = 1; i <= m; i++)
		{
			cout << img[i][j] << " ";
		}
		cout << endl;
	}
}
void nsz90()
{
	// cout << "B";
	for (int j = 1; j <= n; j++)
	{
		for (int i = 1; i <= m; i++)
		{
			cout << img[i][n - j + 1] << " ";
		}
		cout << endl;
	}
}
void zyfz()
{
	// cout << "D";
	for (int i = 1; i <= m; i++)
	{
		for (int j = n; j > 0; j--)
		{
			cout << img[i][j] << " ";
		}
		cout << endl;
	}
}
void sxfz()
{
	// cout << "C";
	for (int i = m; i > 0; i--)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << img[i][j] << " ";
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

	// for (int i = 1; i <= m; i++)
	// {
	//     for (int j = 1; j <= n; j++)
	//     {
	//         cout << img[i][j] << " ";
	//     }
	//     cout << endl;
	// }

	cin >> s;

	for (int i = 0; i < s.length() + 2; i++)
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

	return 0;
}

/*
��ʽ�ַ�	����
d	 ��ʮ������ʽ�������������(�������������)
o	 �԰˽�����ʽ����޷�������(�����ǰ׺0)
x,X	 ��ʮ��������ʽ����޷�������(�����ǰ׺Ox)
u	 ��ʮ������ʽ����޷�������
f	 ��С����ʽ�������˫����ʵ��
e,E	 ��ָ����ʽ�������˫����ʵ��
g,G	 ��%f��%e�н϶̵��������������˫����ʵ��
c	 ��������ַ�
s	 ����ַ���
p	 ���ָ���ַ
lu	 32λ�޷�������
llu	 64λ�޷�������


flags����ʶ��	����
-	    �ڸ������ֶο��������룬Ĭ�����Ҷ��루�μ� width ��˵��������
+	    ǿ���ڽ��֮ǰ��ʾ�ӺŻ���ţ�+ �� -����������ǰ�����ʾ + �š�Ĭ������£�ֻ�и���ǰ�����ʾһ�� - �š�
�ո�	 ���û��д���κη��ţ����ڸ�ֵǰ�����һ���ո�
#	    �� o��x �� X ˵����һ��ʹ��ʱ������ֵǰ���ֱ���ʾ 0��0x �� 0X��
		�� e��E �� f һ��ʹ��ʱ����ǿ���������һ��С���㣬��ʹ���û������ʱҲ����ʾС���㡣Ĭ������£�������û������ʱ�򣬲�����ʾ��ʾС���㡣
		�� g �� G һ��ʹ��ʱ�������ʹ�� e �� E ʱ��ͬ������β�����㲻�ᱻ�Ƴ���
0	    ��ָ����� padding ��������߷����㣨0���������ǿո񣨲μ� width ��˵��������

width����ȣ�	����
(number)	Ҫ������ַ�����С��Ŀ����������ֵ���ڸ�����������ÿո���䡣��������ֵ���ڸ�����������ᱻ�ضϡ�
*	����� format �ַ�����δָ�������ǻ���Ϊ��������ֵ����������Ҫ����ʽ���Ĳ���֮ǰ��

*/

#include <iostream>
// #include <string.h>
// #include <cmath>

using namespace std;

// int nn;
// string n;

// void ssz90()
// {
// 	// cout << "A";
// 	// int hang = 0, lie = 0;
// 	for (int j = 1; j <= n; j++)
// 	{
// 		// hang++;
// 		for (int i = 1; i <= m; i++)
// 		{
// 			// lie++;
// 			cout << img[i][j] << " ";
// 			// img2[lie][hang] = img[i][j];
// 		}
// 		cout << endl;
// 	}
// }
// void nsz90()
// {
// 	// int hang = 0, lie = 0;
// 	// cout << "B";
// 	for (int j = 1; j <= n; j++)
// 	{
// 		// hang++;
// 		for (int i = 1; i <= m; i++)
// 		{
// 			// lie++;
// 			cout << img[i][n - j + 1] << " ";
// 			// img2[lie][hang] = img[i][j];
// 		}
// 		cout << endl;
// 	}
// }
// void zyfz()
// {
// 	// int hang = 0, lie = 0;
// 	// cout << "D";
// 	for (int i = 1; i <= m; i++)
// 	{
// 		// hang++;
// 		for (int j = n; j > 0; j--)
// 		{
// 			// lie++;
// 			cout << img[i][j] << " ";
// 			// img2[hang][lie] = img[i][j];
// 		}
// 		cout << endl;
// 	}
// }
// void sxfz()
// {
// 	// int hang = 0, lie = 0;
// 	// cout << "C";
// 	for (int i = m; i > 0; i--)
// 	{
// 		// hang++;
// 		for (int j = 1; j <= n; j++)
// 		{
// 			// lie++;
// 			cout << img[i][j] << " ";
// 			// img2[hang][lie] = img[i][j];
// 		}
// 		cout << endl;
// 	}
// }
// int isZhiShu(int x)
// {
// 	if (x <= 1)
// 		return false;
// 	return isZhiShu(x - 1) * x;
// }
int main()
{
	// freopen("in.txt", "r", stdin);
	// freopen("out.txt", "w", stdout);

	int j, x, max = 0;
	scanf("%d", &x);
	for (int i = 2; i <= x; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j == i && x % i == 0 && i > max)
			max = i;
	}
	printf("%d", max);
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

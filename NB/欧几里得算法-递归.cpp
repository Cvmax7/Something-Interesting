//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
////求两数最大公约数：辗转相除
//  求两数最小公倍数 = 两数乘积 除以 最大公约数
////法一：递归函数(套娃) 法二：循环
//
////思路：用较大数除以较小数，得到第一余数，然后用较小数除以第一余数，得到第二余数，然后用第一余数除以第二余数，直到余数等于0
////实际上就是每一条式子的除数除以余数 如果除后余数等于0 则返回并输出该式子除数的值 该除数就是这两个数的最大公约数
//
//					//辗转相除(递归)(欧几里得算法):				
//					// a➗b = c1 ··· d;
//					// b➗d = c2 ··· e；
//					// d➗e = c3 ··· f；
//					// ·
//					// ·
//					// ·
//					// 一直到
//					// m➗n = c4 ··· 0；
//					// 那么n就是a和b的最大公约数
//int GreatestCommonDivisor(int a, int b);
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	cout << "请输入两个数并查看他们的最大公约数：" << endl;
//	cin >> m >> n;
//	cout << "他们的最大公约数为：" << GreatestCommonDivisor(m, n) << endl;
//	system("pause");
//	return 0;
//}
//
//int GreatestCommonDivisor(int a, int b)
//{
//	int rmain = 0;
//	rmain = a % b;
//	if (rmain == 0)
//	{
//		return b;
//	}
//	else
//	{
//		GreatestCommonDivisor(b, rmain);
//	}
//}
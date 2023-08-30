//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cmath>
//using namespace std;
//
////已知每月1号为星期几，从键盘上输入1~31之间的整数，输出该日是星期几
////周日~周六分别用0~6之间的整数表示
////根据日历的特点：（输入日期+每月1号星期几-1)%7 得到的便是该日是星期几
//void Calendar();
//
////判断闰年：能被4整除，但不能被100整除。或者能被400整除
//void LeapYear();
//
////从键盘上输入一元二次方程ax*x+bx+c=0的系数a、b、c，求它的根
////注意delta < 0时，虚根的求法：p = -b /2 * a和q = sqrt(-delta)/2 * a  ;
//void Root();
//
////判断n是否为素数，找出：2到sqrt(n)之间没有能整除n的数即可。
//int JudgePrimeNumber();
//int JudgePrimeNumber2(int a);//素数函数
//
////求两数最大公约数：辗转相除
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
//int division1(int a,int b);//求最大公约数 函数递归法
//int division2(int a, int b);//循环法
//void PrintGreatestCommonDivisor1();//打印最大公约数
//void PrintGreatestCommonDivisor2();
//
////计算阶乘求和 赋值(覆盖)思想  fac *= i
//int SumFactorial(int a);
//void PrintSumFactorial();
//
////百元买百鸡
//int HundredBuy();
//
////验证哥德巴赫猜想：真的骚
//void ProfGoldBachConjecture();
//
//int main()
//{
//	//	Calendar();
//	//  LeapYear();
//	//  Root();
//	// JudgePrimeNumber();
//	// PrintGreatestCommonDivisor1();
//	// PrintGreatestCommonDivisor2();
//	// PrintSumFactorial();
//	// HundredBuy();
//	ProfGoldBachConjecture();
//
//	return 0;
//}
//
//void Calendar()
//{
//	//周日~周六分别用0~6之间的整数表示
//	//根据日历的特点：（输入日期+每月1号星期几-1)%7 得到的便是该日是星期几
//	int date, origin, weekday = 0;
//	printf("请输入每月1号为星期几:");
//	scanf("%d", &origin);
//	printf("请输入日期");
//	scanf("%d", &date);
//	weekday = (date + origin - 1) % 7;
//	printf("2010年12月日历\n");
//	printf("----------------------------------------\n");
//	printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat  \n");
//	printf("----------------------------------------\n");
//	if (date < 0 || date > 31)
//	{
//		printf("输入错误\n");
//	}
//	if (weekday == 0)
//	{
//		printf("%2d", date);
//	}
//	else if (weekday == 1)
//	{
//		printf("%7d\n", date);
//	}
//	else if (weekday == 2)
//	{
//		printf("%12d\n", date);
//	}
//	else if (weekday == 3)
//	{
//		printf("%17d\n", date);
//	}
//	else if (weekday == 4)
//	{
//		printf("%22d\n", date);
//	}
//	else if (weekday == 5)
//	{
//		printf("%27d\n", date);
//	}
//	else
//	{
//		printf("%32d\n", date);
//	}
//
//}
//void LeapYear()
//{
//	int year = 0;
//	cout << "请输入年份：" << endl;
//	cin >> year;
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		cout << "该年是闰年" << endl;
//	}
//	else
//	{
//		cout << "该年是平年" << endl;
//	}
//}
//void Root()
//{
//	int a, b, c = 0;
//	cout << "请输入a b c的值" << endl;
//	cin >> a >> b >> c;
//	int delta = 0;
//	if (a == 0)
//	{
//		cout << "非一元二次方程" << endl;
//		cout << "其根为：" << -(c / b) << endl;
//	}
//	else if (a != 0)
//	{
//		delta = b * b - 4 * a * c;
//		if (delta > 0)
//		{
//			cout << "x1 = " << (-b - sqrt(delta)) / 2 / a << endl;
//			cout << "x1 = " << (-b + sqrt(delta)) / 2 / a << endl;
//		}
//		else if (delta == 0)
//		{
//			cout << "x1=x2=" << -b / 2 / a << endl;
//		}
//		else
//		{
//			//p为实部，q为虚部
//			int p, q = 0;
//			p = -b / 2 / a;
//			q = sqrt(-delta) / 2 / a;
//			cout << "x1=" << p << "+" << q << "i" << endl;
//			cout << "x2=" << p << "-" << q << "i" << endl;
//		}
//	}
//}
//int JudgePrimeNumber()
//{
//	int a = 0;
//	cout << "请输入一个整数并查看是不是素数" << endl;
//	cin >> a;
//
//	for (int i = 2; i >= 2 && i <= sqrt(a); i++)
//	{
//		if (a % i == 0)
//		{
//			cout << "该数不是素数" << endl;
//			return 0;
//		}
//	}
//	cout << "该数是素数" << endl;
//	return 1;
//
//
//}
//int JudgePrimeNumber2(int a)
//{
//	if (a == 2 && a == 3)
//	{
//		return 1;
//	}
//	else
//	{
//		for (int i = 2; i >= 2 && i <= sqrt(a); i++)
//		{
//			if (a % i == 0)
//			{
//				return 0;
//			}
//		}
//		return 1;
//	}
//}
//int division1(int a, int b)
//{
//	int remainder = 0;
//	remainder = a % b;
//	if (remainder == 0)
//	{
//		return b;
//	}
//	else
//	{
//		division1(b, remainder);
//	}
//} 
//int division2(int a, int b)
//{
//	
//	int rmain;
//	do
//	{
//		rmain = a % b;
//		a = b;
//		b = rmain;
//	} while (rmain != 0);
//	return a; //此处不能返回除数b，因为最后一步rmain此时已经为0
//	//此时b的值为最大公约数，但b的值赋给了a，rmain的值赋给了b，即a的值为最大公约数，b的值恒为0
//}
//void PrintGreatestCommonDivisor1()
//{
//	int m = 0;
//	int n = 0;
//	cout << "请输入两个数并查看他们的最大公约数：";
//	cin >> m >> n;
//	cout << "该两个数的最大公约数为" << division1(m, n) << endl;
//}
//void PrintGreatestCommonDivisor2()
//{
//	int m = 0;
//	int n = 0;
//	cout << "请输入两个数并查看他们的最大公约数：";
//	cin >> m >> n;
//	cout << "该两个数的最大公约数为" << division2(m, n) << endl;
//}
//int SumFactorial(int a)
//{
//	int sum = 0;
//	int fac = 1;
//	for (int i = 1; i <= a; i++)
//	{
//		
//		fac *= i;
//		sum += fac; // 
//	}
//	return sum;
//}
//void PrintSumFactorial()
//{
//	cout << "请输入一个数：" << endl;
//	int n = 0;
//	cin >> n;
//	cout << "阶乘和为：" << SumFactorial(n) << endl;
//}
//int HundredBuy()
//{
//	for (int i = 1; i < 20; i++)
//	{
//		for (int j = 1; j <= 33; j++)
//		{
//			for (int k = 2; k <= 98; k++)
//			{
//				if (i + j + k == 100 && 5 * i + 3 * j + 0.5 * k == 100)
//				{
//					cout << "母鸡的数量为：" << i << endl;
//					cout << "公鸡的数量为：" << j << endl;
//					cout << "小鸡的数量为：" << k << endl;
//				}
//			}
//		}
//	}
//	return 3;
//}
//void ProfGoldBachConjecture()
//{
//	int a = 0;
//	cout << "请输入一个充分大的偶数（大于2即可）" << endl;
//	cin >> a;
//	
//	for (int p = 2; p <= a / 2; p++)
//	{
//		if (p == 2 && (a - p) == 2)
//		{
//			cout << a << "=" << p << "+" << a - p << endl;
//		}
//		else if (p == 2 && JudgePrimeNumber2(a - p))
//		{
//			cout << a << "=" << p << "+" << a - p << endl;
//		}
//		else if (p == 3 && JudgePrimeNumber2(a - p))
//		{
//			cout << a << "=" << p << "+" << a - p << endl;
//		}
//		else if (JudgePrimeNumber2(p) && JudgePrimeNumber2(a - p))
//		{
//			cout << a << "=" << p << "+" << a - p << endl;
//		}
//	}
//}
//
//	
//

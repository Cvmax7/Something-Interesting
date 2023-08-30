//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cmath>
//using namespace std;
//
////求一元高次方程2*x*x*x - 4*x*x + 3*x + 6 = 0在1.5附近的根 
////求高次方程的时候，没有求根公式，采用牛顿迭代法
////牛顿迭代公式：Xn+1 = Xn - f(Xn) / f'(Xn); 当|Xn+1 - Xn| < e时，Xn即为方程的根
//void iteration();
//
//
//int main()
//{
//	iteration();
//	system("pause");
//	return 0;
//}
//
//void iteration()
//{
//	cout << "请输入误差精度e" << endl;
//	double e = 0;
//	cin >> e;
//	double X1 = 1.5, X0, f1, f2 = 0; //f1为f(Xn) f2为f'(Xn)
//	while (1)
//	{
//		X0 = X1;
//		f1 = 2 * X0 * X0 * X0 - 4 * X0 * X0 + 3 * X0 + 6;
//		f2 = 6 * X0 * X0 - 8 * X0 + 3;
//		X1 = X0 - f1 / f2;
//		if (abs(X1 - X0) < e)
//		{
//			cout << "高次方程的根为：" << X0 << endl;
//			break;
//		}
//	}
//
//
//
//
//
//}
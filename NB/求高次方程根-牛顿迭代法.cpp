//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cmath>
//using namespace std;
//
////��һԪ�ߴη���2*x*x*x - 4*x*x + 3*x + 6 = 0��1.5�����ĸ� 
////��ߴη��̵�ʱ��û�������ʽ������ţ�ٵ�����
////ţ�ٵ�����ʽ��Xn+1 = Xn - f(Xn) / f'(Xn); ��|Xn+1 - Xn| < eʱ��Xn��Ϊ���̵ĸ�
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
//	cout << "����������e" << endl;
//	double e = 0;
//	cin >> e;
//	double X1 = 1.5, X0, f1, f2 = 0; //f1Ϊf(Xn) f2Ϊf'(Xn)
//	while (1)
//	{
//		X0 = X1;
//		f1 = 2 * X0 * X0 * X0 - 4 * X0 * X0 + 3 * X0 + 6;
//		f2 = 6 * X0 * X0 - 8 * X0 + 3;
//		X1 = X0 - f1 / f2;
//		if (abs(X1 - X0) < e)
//		{
//			cout << "�ߴη��̵ĸ�Ϊ��" << X0 << endl;
//			break;
//		}
//	}
//
//
//
//
//
//}
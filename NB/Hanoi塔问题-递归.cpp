//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//
////Hanoi�����⡣��A��B��C�������ӣ�A������n����С���ȵĿ������ӣ��Ҵ�����£�С������
////Ҫ�����Щ���Ӵ�A���Ƶ�C���ϣ�����B���������ƶ��������ǣ�
////��1��ÿ��ֻ���ƶ�һ������
////��2�����ӿ��Է���A��B��C�е�����һ��������
////��3���ƶ������У�ÿ�������ϵ����Ӷ�Ҫ���ִ�������棬С��������
//
//int Hanoi(int n, char from, char temp, char to);//from:A�� temp:B�� to:C��
//void moveplate(int n, char from, char to);//�ƶ���������
//int main()
//{
//	cout << "������������Ŀ��" << endl;
//	int q = 0;
//	cin >> q;
//	Hanoi(q, 'A', 'B', 'C');
//	return 0;
//}
//int Hanoi(int n, char from, char temp, char to)
//{
//	if (n == 1)
//		moveplate(1, from, to);
//	else
//	{
//		Hanoi(n - 1, from, to, temp);
//		moveplate(n, from, to);
//		Hanoi(n - 1, temp, from, to);
//	}
//	return 1;
//}
//void moveplate(int n, char from, char to)
//{
//	cout << from << "-->" << to << endl;
//}

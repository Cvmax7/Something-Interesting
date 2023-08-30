//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//
////Hanoi塔问题。有A、B、C三根柱子，A柱上有n个大小不等的空心盘子，且大的在下，小的在上
////要求把这些盘子从A柱移到C柱上（借助B），盘子移动的条件是：
////（1）每次只能移动一个盘子
////（2）盘子可以放在A、B、C中的任意一根柱子上
////（3）移动过程中，每根柱子上的盘子都要保持大的在下面，小的在上面
//
//int Hanoi(int n, char from, char temp, char to);//from:A柱 temp:B柱 to:C柱
//void moveplate(int n, char from, char to);//移动盘子声明
//int main()
//{
//	cout << "请输入盘子数目：" << endl;
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

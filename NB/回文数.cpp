//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cmath>
//using namespace std;
////判断一个数是否为回文数（正着读跟反着读一样）
////逆序表示这个数
//
////逆序方法：
////输入n
////创建变量 m = n
////创建变量 k = 0 (k为n逆序之后的数,通过提取n的数位，往前调，形成逆序）
//// while(m != 0)
////{
////  k = k * 10 + m % 10; //第一次k先得到n的个位，第二次将n个位的位数往前调(*10)再加上n的十位，第三次将整体往前调(*10)再加上n的百位，以此类推
////  m = m / 10;//把位数剔除1，直到 m/10 == 0 时，说明只剩下一位数，退出循环
////}
//// if (k == n) k为n逆序之后的数
////    cout << "该数为回文数" << endl;
//
//void Palindrome();
//
//int main()
//{
//	Palindrome();
//	system("pause");
//	return 0;
//}
//void Palindrome()
//{
//	int n = 0;
//	int m = 0;
//	int k = 0;
//	cout << "请输入一个数并判断它是否为回文数" << endl;
//	cin >> n;
//	m = n;
//	while (m != 0)
//	{
//		k = k * 10 + m % 10;
//		m = m / 10;
//	
//	if (k == n)
//	{
//		cout << "该数是回文数" << endl;
//	}
//	else
//	{
//		cout << "该数不是回文数" << endl;
//	}
//}
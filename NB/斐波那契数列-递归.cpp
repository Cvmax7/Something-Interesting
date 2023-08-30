//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//
////根据数学递推式，用函数递归
//
//
////输入项数查看Fibonacci中对应的数
//int Fibonacci(int a);
//
//
//int main()
//{
//	cout << "请输入项数并查看其在Fibonacci数列的对应数：";
//	int n = 0;
//	cin >> n;
//	cout << "对应的数为：" << Fibonacci(n) << endl;
//	return 0;
//}
//
//int Fibonacci(int a)
//{
//	int result;
//	if (a == 1 || a == 2)
//		result = 1;
//	else
//		result = Fibonacci(a - 1) + Fibonacci(a - 2); 
//	return result;
//}
//
////法二：
////n <= 2 ? 1 : fi
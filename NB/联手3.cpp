#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//
//void Par();
//
//int main()
//{
//	Par();
//	system("pause");
//	return 0;
//}
//void Par()
//{
//	int x = 0;
//	cin >> x;
//	int k = 0;
//	int n = 0;
//	n = x;
//	while (n != 0)
//	{
//		k = k * 10 + n % 10;
//		n = n / 10;
//	}
//	if (k == x)
//	{
//		cout << "����Ϊ������" << endl;
//	}
//	else
//	{
//		cout << "�������ǻ�����" << endl;
//	}
//}

#include <stdio.h>
int Greatest(int a, int b);
void HWS(int num);

int main()
{
	/*int a = 0;
	int b = 0;
	int G = 0;
	printf("���������������鿴���ǵ����Լ��\n");
	scanf("%d,%d", &a, &b);
	G = Greatest(a, b);
	printf("���Լ��Ϊ��%d", G);
	return 0;*/
	/*int num = 0;
	scanf("%d", &num);
	HWS(num);*/


		int c;

		printf("Enter a character: ");
		c = getchar();

		printf("You entered: ");
		putchar(c);
		putchar('\n');

		return 0;
	
}
int Greatest(int a, int b)
{
	int r = 0;
	r = a % b;
	if (r == 0)
	{
		return b;
	}
	else
	{
		return Greatest(b, r);
	}
}
void HWS(int num)
{
	int n = 0, k = 0;
	n = num;
	k = 0;
	while (num != 0)
	{
		k = k * 10 + num % 10;
		num /= 10;
	}
	if (n == k) printf("�����ǻ�����\n");

}


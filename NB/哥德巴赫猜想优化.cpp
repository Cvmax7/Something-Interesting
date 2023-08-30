//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cmath>
//using namespace std;
//int JudgePrime(int a);
//int main()
//{
//    int N = 0;
//    cin >> N;
//        for (int i = 4; i <= N; i += 2)
//        {
//                for (int p = 2; p <= i / 2; p++)
//                {
//                    if (JudgePrime(p) && JudgePrime(i - p))
//                    {
//                        cout << i << "=" << p << "+" << i - p << endl; break;
//                    }
//                }
//        }
//    return 0;
//}
//
//int JudgePrime(int a)
//{
//    if (a == 2 || a == 3)
//    {
//        return 1;
//    }
//    else
//    {
//        for (int i = 2; i <= sqrt(a); i++)
//        {
//            if (a % i == 0)
//            {
//                return 0;
//            }
//        }
//    }
//    return 1;
//
//    
//
//}
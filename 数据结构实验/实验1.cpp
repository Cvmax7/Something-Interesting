#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <fstream>
#include <string>

//学生健康表人数
#define N 100

//菜单
void menu();

//新建学生健康表
void addstu();

//向学生健康表插入学生信息
void insertinfo(struct stu stulist[N], int* stunumbers);

//在健康表删除学生信息
void deleteinfo(struct stu stulist[N], int num, int* stunumbers);

//从文件中读取健康表信息
void readform(struct stu stulist[N], int* stunumbers);

//向文件写入学生健康表信息
void writeform(struct stu stulist[N], int* stunumbers, const string& filename);

//在健康表中查询学生信息（按学生学号来进行查找）
void searchinfo(struct stu stulist[N], int num, int* stunumbers);

//在屏幕中输出全部学生信息
void printinfo(struct stu stulist[N]);



struct stu
{
	int num;
	string name;
	string sex;
	string health;
	int year;
	int month;
	int date;
};


int main()
{
	int stunumbers = 0;
	struct stu stulist[N];
	int num = 0;
	int a = 0;
	while (a != 8)
	{
		menu();
		cout << "请输入你要执行的操作" << endl;
		cin >> a;
		switch (a)
		{
		case 1: //新建学生健康表
		{
			addstu();
			break;
		}
		case 2: //向学生健康表插入学生信息
		{
			insertinfo(stulist, &stunumbers);
			break;
		}
		case 3: //在健康表删除学生信息
		{
			cout << "请输入你想删除学生信息的学号" << endl;
			cin >> num;
			deleteinfo(stulist, num, &stunumbers);
			break;
		}
		case 4: //从文件中读取健康表信息
		{
			readform(stulist, &stunumbers);
			break;
		}
		case 5: //向文件写入学生健康表信息
		{
			writeform(stulist, &stunumbers, "健康表.txt");
			break;
		}
		case 6: //在健康表中查询学生信息（按学生学号来进行查找）
		{
			cout << "请输入你想查询学生信息的学号" << endl;
			cin >> num;
			searchinfo(stulist, num, &stunumbers);
			break;
		}
		case 7: //在屏幕中输出全部学生信息
		{
			printinfo(stulist);
			break;
		}
		case 8: //退出
			break;
		};
	}
	system("pause");
	return 0;

}



void menu()
{
	cout << "1------新建学生健康表" << endl;
	cout << "2------向学生健康表插入学生信息" << endl;
	cout << "3------在健康表删除学生信息" << endl;
	cout << "4------从文件中读取健康表信息" << endl;
	cout << "5------向文件写入学生健康表信息" << endl;
	cout << "6------在健康表中查询学生信息（按学生学号来进行查找）" << endl;
	cout << "7------在屏幕中输出全部学生信息" << endl;
	cout << "8---- - 退出" << endl;
}


void addstu()
{
	struct stu stulist[N];
	cout << "学生健康表已新建完成" << endl;
}

void insertinfo(struct stu stulist[N], int* stunumbers)
{
	for (int i = 0; i < N; i++)
	{
		*stunumbers += 1;
		int goon;
		cout << "请输入学生的学号" << endl;
		cin >> stulist[i].num;
		cout << "请输入学生的姓名" << endl;
		cin >> stulist[i].name;
		cout << "请输入学生的性别: boy or girl?" << endl;
		cin >> stulist[i].sex;
		cout << "请输入学生的身体状况: good or bad?" << endl;
		cin >> stulist[i].health;
		cout << "请输入学生的生日年份" << endl;
		cin >> stulist[i].year;
		cout << "请输入学生的生日月份" << endl;
		cin >> stulist[i].month;
		cout << "请输入学生的生日日期" << endl;
		cin >> stulist[i].date;
		cout << "-------------------------------" << endl;
		cout << "此时健康表所有学生个数为：" << *stunumbers << endl;
		cout << "是否继续添加另一学生信息: " << endl;
		cout << "0---continue" << endl;
		cout << "1---pause" << endl;
		cin >> goon;
		if (goon) break;
	}
}

void deleteinfo(struct stu stulist[N], int num, int* stunumbers)
{
	int index = -1;
	for (int i = 0; i < N; i++)
	{
		if (num == stulist[i].num)
		{
			index = i;
			break;
		}
	}
	if (index != -1)
	{
		for (int j = index; j < *stunumbers - 1; j++)
		{
			stulist[j] = stulist[j + 1];
		}
		*stunumbers -= 1;
		cout << "成功删除学生信息" << endl;
		cout << "此时健康表所有学生个数为：" << *stunumbers << endl;
	}
	else cout << "未找到匹配学生信息" << endl;
}

void readform(struct stu stulist[N], int* stunumbers)
{

	FILE* inputFile = fopen("health_table.txt", "r"); // 假设信息存储在名为 health_table.txt 的文本文件中

	if (inputFile != NULL) {
		while (*stunumbers < N && fscanf(inputFile,
			"%d %s %s %s %d %d %d",
			stulist[*stunumbers].num,
			stulist[*stunumbers].name,
			stulist[*stunumbers].sex,
			stulist[*stunumbers].health,
			&stulist[*stunumbers].year,
			&stulist[*stunumbers].month,
			&stulist[*stunumbers].date) == 7) {

			(*stunumbers)++;
		}

		fclose(inputFile);
	}
	else {
		printf("无法打开文件。\n");
	}
}

void writeform(struct stu stulist[N], int* stunumbers, const string& filename)
{
	ofstream ofs(filename);

	if (!ofs)
	{
		cout << "无法打开文件" << endl;
		return;
	}

	for (int i = 0; i < *stunumbers; i++)
	{
		for (int j = 0; j < N; j++)
		{
			ofs << "学号: " << stulist[i].num << endl;
			ofs << "姓名: " << stulist[i].name << endl;
			ofs << "性别: " << stulist[i].sex << endl;
			ofs << "健康信息: " << stulist[i].health << endl;
		}
		ofs << "出生日期: " << stulist[i].year << "年" << stulist[i].month << "月" << stulist[i].date << "日" << endl;
		ofs << "----------------------------------------\n" << endl;
	}

	ofs.close();
}

void searchinfo(struct stu stulist[N], int num, int* stunumbers)
{
	int index = -1;
	for (int i = 0; i < *stunumbers; i++)
	{
		if (num == stulist[i].num)
		{
			index = i;
			cout << "成功查找到该学生" << endl;
			break;
		}
	}


	if (index != -1)
	{
		cout << "所查询到的学生信息如下：" << endl;
		cout << "----------------------------------------------" << endl;
		cout << "该学生的学号为：" << stulist[index].num << endl;
		cout << "该学生的姓名为：" << stulist[index].name << endl;
		cout << "该学生的性别为: " << stulist[index].sex << endl;
		cout << "该学生的身体状况为：" << stulist[index].health << endl;
		cout << "该学生的生日年份为：" << stulist[index].year << endl;
		cout << "该学生的生日月份为：" << stulist[index].month << endl;
		cout << "该学生的生日日期为：" << stulist[index].date << endl;
		cout << "----------------------------------------------" << endl;
	}
	else cout << "未找到该学生" << endl;
}

void printinfo(struct stu stulist[N])
{
	for (int i = 0; i < N; i++)
	{
		cout << "----------------------------------------------" << endl;
		cout << "学生的学号为：" << stulist[i].num << endl;
		cout << "学生的姓名为：" << stulist[i].name << endl;
		cout << "学生的性别为: " << stulist[i].sex << endl;
		cout << "学生的身体状况为：" << stulist[i].health << endl;
		cout << "学生的生日年份为：" << stulist[i].year << endl;
		cout << "学生的生日月份为：" << stulist[i].month << endl;
		cout << "学生的生日日期为：" << stulist[i].date << endl;
		cout << "----------------------------------------------" << endl;
	}
}

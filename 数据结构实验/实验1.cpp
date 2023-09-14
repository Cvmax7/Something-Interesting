#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <fstream>
#include <string>

//ѧ������������
#define N 100

//�˵�
void menu();

//�½�ѧ��������
void addstu();

//��ѧ�����������ѧ����Ϣ
void insertinfo(struct stu stulist[N], int* stunumbers);

//�ڽ�����ɾ��ѧ����Ϣ
void deleteinfo(struct stu stulist[N], int num, int* stunumbers);

//���ļ��ж�ȡ��������Ϣ
void readform(struct stu stulist[N], int* stunumbers);

//���ļ�д��ѧ����������Ϣ
void writeform(struct stu stulist[N], int* stunumbers, const string& filename);

//�ڽ������в�ѯѧ����Ϣ����ѧ��ѧ�������в��ң�
void searchinfo(struct stu stulist[N], int num, int* stunumbers);

//����Ļ�����ȫ��ѧ����Ϣ
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
		cout << "��������Ҫִ�еĲ���" << endl;
		cin >> a;
		switch (a)
		{
		case 1: //�½�ѧ��������
		{
			addstu();
			break;
		}
		case 2: //��ѧ�����������ѧ����Ϣ
		{
			insertinfo(stulist, &stunumbers);
			break;
		}
		case 3: //�ڽ�����ɾ��ѧ����Ϣ
		{
			cout << "����������ɾ��ѧ����Ϣ��ѧ��" << endl;
			cin >> num;
			deleteinfo(stulist, num, &stunumbers);
			break;
		}
		case 4: //���ļ��ж�ȡ��������Ϣ
		{
			readform(stulist, &stunumbers);
			break;
		}
		case 5: //���ļ�д��ѧ����������Ϣ
		{
			writeform(stulist, &stunumbers, "������.txt");
			break;
		}
		case 6: //�ڽ������в�ѯѧ����Ϣ����ѧ��ѧ�������в��ң�
		{
			cout << "�����������ѯѧ����Ϣ��ѧ��" << endl;
			cin >> num;
			searchinfo(stulist, num, &stunumbers);
			break;
		}
		case 7: //����Ļ�����ȫ��ѧ����Ϣ
		{
			printinfo(stulist);
			break;
		}
		case 8: //�˳�
			break;
		};
	}
	system("pause");
	return 0;

}



void menu()
{
	cout << "1------�½�ѧ��������" << endl;
	cout << "2------��ѧ�����������ѧ����Ϣ" << endl;
	cout << "3------�ڽ�����ɾ��ѧ����Ϣ" << endl;
	cout << "4------���ļ��ж�ȡ��������Ϣ" << endl;
	cout << "5------���ļ�д��ѧ����������Ϣ" << endl;
	cout << "6------�ڽ������в�ѯѧ����Ϣ����ѧ��ѧ�������в��ң�" << endl;
	cout << "7------����Ļ�����ȫ��ѧ����Ϣ" << endl;
	cout << "8---- - �˳�" << endl;
}


void addstu()
{
	struct stu stulist[N];
	cout << "ѧ�����������½����" << endl;
}

void insertinfo(struct stu stulist[N], int* stunumbers)
{
	for (int i = 0; i < N; i++)
	{
		*stunumbers += 1;
		int goon;
		cout << "������ѧ����ѧ��" << endl;
		cin >> stulist[i].num;
		cout << "������ѧ��������" << endl;
		cin >> stulist[i].name;
		cout << "������ѧ�����Ա�: boy or girl?" << endl;
		cin >> stulist[i].sex;
		cout << "������ѧ��������״��: good or bad?" << endl;
		cin >> stulist[i].health;
		cout << "������ѧ�����������" << endl;
		cin >> stulist[i].year;
		cout << "������ѧ���������·�" << endl;
		cin >> stulist[i].month;
		cout << "������ѧ������������" << endl;
		cin >> stulist[i].date;
		cout << "-------------------------------" << endl;
		cout << "��ʱ����������ѧ������Ϊ��" << *stunumbers << endl;
		cout << "�Ƿ���������һѧ����Ϣ: " << endl;
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
		cout << "�ɹ�ɾ��ѧ����Ϣ" << endl;
		cout << "��ʱ����������ѧ������Ϊ��" << *stunumbers << endl;
	}
	else cout << "δ�ҵ�ƥ��ѧ����Ϣ" << endl;
}

void readform(struct stu stulist[N], int* stunumbers)
{

	FILE* inputFile = fopen("health_table.txt", "r"); // ������Ϣ�洢����Ϊ health_table.txt ���ı��ļ���

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
		printf("�޷����ļ���\n");
	}
}

void writeform(struct stu stulist[N], int* stunumbers, const string& filename)
{
	ofstream ofs(filename);

	if (!ofs)
	{
		cout << "�޷����ļ�" << endl;
		return;
	}

	for (int i = 0; i < *stunumbers; i++)
	{
		for (int j = 0; j < N; j++)
		{
			ofs << "ѧ��: " << stulist[i].num << endl;
			ofs << "����: " << stulist[i].name << endl;
			ofs << "�Ա�: " << stulist[i].sex << endl;
			ofs << "������Ϣ: " << stulist[i].health << endl;
		}
		ofs << "��������: " << stulist[i].year << "��" << stulist[i].month << "��" << stulist[i].date << "��" << endl;
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
			cout << "�ɹ����ҵ���ѧ��" << endl;
			break;
		}
	}


	if (index != -1)
	{
		cout << "����ѯ����ѧ����Ϣ���£�" << endl;
		cout << "----------------------------------------------" << endl;
		cout << "��ѧ����ѧ��Ϊ��" << stulist[index].num << endl;
		cout << "��ѧ��������Ϊ��" << stulist[index].name << endl;
		cout << "��ѧ�����Ա�Ϊ: " << stulist[index].sex << endl;
		cout << "��ѧ��������״��Ϊ��" << stulist[index].health << endl;
		cout << "��ѧ�����������Ϊ��" << stulist[index].year << endl;
		cout << "��ѧ���������·�Ϊ��" << stulist[index].month << endl;
		cout << "��ѧ������������Ϊ��" << stulist[index].date << endl;
		cout << "----------------------------------------------" << endl;
	}
	else cout << "δ�ҵ���ѧ��" << endl;
}

void printinfo(struct stu stulist[N])
{
	for (int i = 0; i < N; i++)
	{
		cout << "----------------------------------------------" << endl;
		cout << "ѧ����ѧ��Ϊ��" << stulist[i].num << endl;
		cout << "ѧ��������Ϊ��" << stulist[i].name << endl;
		cout << "ѧ�����Ա�Ϊ: " << stulist[i].sex << endl;
		cout << "ѧ��������״��Ϊ��" << stulist[i].health << endl;
		cout << "ѧ�����������Ϊ��" << stulist[i].year << endl;
		cout << "ѧ���������·�Ϊ��" << stulist[i].month << endl;
		cout << "ѧ������������Ϊ��" << stulist[i].date << endl;
		cout << "----------------------------------------------" << endl;
	}
}

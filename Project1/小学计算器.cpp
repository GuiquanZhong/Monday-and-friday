#include <iostream>
#include<ctime>
using namespace std;
int a, b;
void save();
void real2();
void jues();
void File();
void low(int, int);
void add(int a, int b);
void cheng(int a, int b);
void chu(int a, int b);
void del();
#include <fstream>
#define FILENAME "empfile.txt"
int c, d;
void jues()
{
	cout << "******����1��ϰ�ӷ�******" << endl;
	cout << "******����2��ϰ����******" << endl;
	cout << "******����3��ϰ�˷�******" << endl;
	cout << "******����4��ϰ����******" << endl;
	cout << "******����0�˳�����******" << endl;
}

void real2()
{
	fstream f;
	f.open("empfile.txt", ios::in);
	string s;
	//һֱ�����ļ�ĩβ 
	while (f >> s)
		cout << s << endl; //��ʾ��ȡ���� 
	f.close();

}
void del()
{

	std::ofstream ofs("empfile.txt", std::ofstream::out | std::ofstream::trunc);

}
void add1(int a, int b)
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out | ios::app);

	ofs << "a+b" << "=" << a + b << endl;
	ofs.close();
}

void low1(int a, int b)
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out | ios::app);

	ofs << "a-b" << "=" << a + b << endl;
	ofs.close();
}

void chu1(int a, int b)
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out | ios::app);

	ofs << "a/b" << "=" << a + b << endl;
	ofs.close();
}

void cheng1(int a, int b)
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out | ios::app);

	ofs << "a*b" << "=" << a + b << endl;
	ofs.close();
}

void add(int a, int b)
{
	cout << "����мӷ���ϰ���������" << endl;


	while (true)
	{
		int a = rand() % 100 + 1;
		int b = rand() % 100 + 1;
		cout << a << " + " << b << " = " << endl;
	aug:
		cin >> c;
		system("cls");

		if (a + b == c)
		{
			cout << "����ȷ������0�ٴν��мӷ���ϰ������1�˳���ϰ������2���ز˵�" << endl;
		}
		else
		{
			add1(a, b);
			cout << "�𰸴�������3��ʾ�𰸣�����4�ٴ�����" << a << "+" << b << "�𰸣�����0�ٴν��мӷ���ϰ������1�˳���ϰ������2���ز˵�" << endl;
		}
		cin >> d;
		if (d == 0)continue;
		else if (d == 1)exit(0);
		else if (d == 2)break;
		else if (d == 3)cout << a << "+" << b << "=" << a + b << endl;
		else if (d == 4)goto aug;

	};
	return;

}
void low(int a, int b)
{
	cout << "����м�����ϰ���������" << endl;
	while (true)
	{
		int a = rand() % 100 + 1;
		int b = rand() % 100 + 1;
		cout << a << " - " << b << " = " << endl;
	aug:
		cin >> c;
		system("cls");

		if (a - b == c)
		{
			cout << "����ȷ������0�ٴν��м�����ϰ������1�˳���ϰ������2���ز˵�" << endl;
		}
		else
		{
			low1(a, b);
			cout << "�𰸴�������3��ʾ�𰸣�����4�ٴ�����" << a << "+" << b << "�𰸣�����0�ٴν��м�����ϰ������1�˳���ϰ������2���ز˵�" << endl;
		}
		cin >> d;

		if (d == 0)continue;
		else if (d == 1)exit(0);
		else if (d == 2)break;
		else if (d == 3)cout << a << "-" << b << "=" << a - b << endl;
		else if (d == 4)goto aug;
	};
	return;
}
void chu(int a, int b)
{
	cout << "����г�����ϰ���������" << endl;
	while (true)
	{
		int a = rand() % 100 + 1;
		int b = rand() % 100 + 1;
		cout << a << " / " << b << " = " << endl;
		double f;
	aug:
		cin >> f;
		system("cls");
		if (a / b == f)
		{
			cout << "����ȷ������0�ٴν��г�����ϰ������1�˳���ϰ������2���ز˵�" << endl;
		}
		else
		{
			chu1(a, b);
			cout << "�𰸴�������3��ʾ�𰸣�����4�ٴ�����" << a << "+" << b << "�𰸣�����0�ٴν��г�����ϰ������1�˳���ϰ������2���ز˵�" << endl;
		}
		cin >> d;
		if (d == 0)continue;
		else if (d == 1)exit(0);
		else if (d == 2)break;
		else if (d == 3)cout << a << "/" << b << "=" << a / b << endl;
		else if (d == 4)goto aug;
	};
	return;
}
void cheng(int a, int b)
{
	cout << "����г˷���ϰ���������" << endl;
	while (true)
	{
		int a = rand() % 100 + 1;
		int b = rand() % 100 + 1;
		cout << a << " * " << b << " = " << endl;
	aug:
		cin >> c;
		system("cls");
		if (a * b == c)
		{
			cout << "����ȷ������0�ٴν��г˷���ϰ������1�˳���ϰ������2���ز˵�" << endl;
		}
		else
		{
			cheng1(a, b);
			cout << "�𰸴�������3��ʾ�𰸣�����4�ٴ�����" << a << "+" << b << "�𰸣�����0�ٴν��г˷���ϰ������1�˳���ϰ������2���ز˵�" << endl;
		}
		cin >> d;
		if (d == 0)continue;
		else if (d == 1)exit(0);
		else if (d == 2)break;
		else if (d == 3)cout << a << "*" << b << "=" << a * b << endl;
		else if (d == 4)goto aug;
	};
	return;
}

int main()
{
	srand((unsigned int)time(NULL));
	cout << "******����������ϰ����*****" << endl;
	jues();
	while (true)  
	{
	
		cout << "������������ϰ����Ŀ" << endl;
		cout << "����real�鿴���⣬del��մ���,kong����" << endl;
		

		char op;
		flag:
		cin >> op;
		switch (op)
		{
		case '1':add(a, b); break;
		case'2':low(a,b); break;
		case'3':cheng(a, b); break;
		case'4':chu(a,b); break;
		case'0':exit(0); break;
		case'r':real2(); break;
		case'd':del(); break;
		case'k':system("cls"); break;

		default:
		{
			cout << "����������������� ��";
			goto flag;
		}
		}
		jues();
	}
		system("pause");
		return 0;
	}
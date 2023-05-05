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
	cout << "******输入1练习加法******" << endl;
	cout << "******输入2练习减法******" << endl;
	cout << "******输入3练习乘法******" << endl;
	cout << "******输入4练习除法******" << endl;
	cout << "******输入0退出程序******" << endl;
}

void real2()
{
	fstream f;
	f.open("empfile.txt", ios::in);
	string s;
	//一直读到文件末尾 
	while (f >> s)
		cout << s << endl; //显示读取内容 
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
	cout << "你进行加法练习，请输入答案" << endl;


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
			cout << "答案正确，输入0再次进行加法练习，输入1退出练习，输入2返回菜单" << endl;
		}
		else
		{
			add1(a, b);
			cout << "答案错误，输入3显示答案，输入4再次输入" << a << "+" << b << "答案，输入0再次进行加法练习，输入1退出练习，输入2返回菜单" << endl;
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
	cout << "你进行减法练习，请输入答案" << endl;
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
			cout << "答案正确，输入0再次进行减法练习，输入1退出练习，输入2返回菜单" << endl;
		}
		else
		{
			low1(a, b);
			cout << "答案错误，输入3显示答案，输入4再次输入" << a << "+" << b << "答案，输入0再次进行减法练习，输入1退出练习，输入2返回菜单" << endl;
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
	cout << "你进行除法练习，请输入答案" << endl;
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
			cout << "答案正确，输入0再次进行除法练习，输入1退出练习，输入2返回菜单" << endl;
		}
		else
		{
			chu1(a, b);
			cout << "答案错误，输入3显示答案，输入4再次输入" << a << "+" << b << "答案，输入0再次进行除法练习，输入1退出练习，输入2返回菜单" << endl;
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
	cout << "你进行乘法练习，请输入答案" << endl;
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
			cout << "答案正确，输入0再次进行乘法练习，输入1退出练习，输入2返回菜单" << endl;
		}
		else
		{
			cheng1(a, b);
			cout << "答案错误，输入3显示答案，输入4再次输入" << a << "+" << b << "答案，输入0再次进行乘法练习，输入1退出练习，输入2返回菜单" << endl;
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
	cout << "******计算能力练习程序*****" << endl;
	jues();
	while (true)  
	{
	
		cout << "请输入你想练习的项目" << endl;
		cout << "输入real查看错题，del清空错题,kong清屏" << endl;
		

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
			cout << "输入错误，请重新输入 ：";
			goto flag;
		}
		}
		jues();
	}
		system("pause");
		return 0;
	}
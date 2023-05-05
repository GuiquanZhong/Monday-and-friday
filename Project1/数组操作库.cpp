//#include<iostream>
//using namespace std;
//int arr[1000];
//int n = 0;
//#include<algorithm>
//void Showmenu()
//{
//	cout << "欢迎使用整型数组操作库：" << endl;
//	cout << "***1.数组输入***" << endl;
//	cout << "***2.数组排序***" << endl;
//	cout << "***3.元素插入***" << endl;
//	cout << "***4.元素查找***" << endl;
//	cout << "***5.元素删除***" << endl;
//	cout << "***6.数组输出***" << endl;
//	cout << "***7.输出指定位置元素***" << endl;
//	cout << "***8.对指定个数的数组元素求和***" << endl;
//	cout << "***9.退出程序***" << endl;
//}
//void inputarr()
//{
//	cout << "请输入你要保存的整型数据(回车结束）" << endl;
//	int x;
//	while (cin>>x)
//	{
//		arr[n++] = x;
//		if (cin.get() == '\n')break;
//	}
//	cout << endl;
//}
//void sortarr()
//{
//	cout << "请输入你要的排序方式：1、升序 2、降序" << endl;
//	int x;
//	cin >> x;
//	if (x == 1)
//	{
//		sort(arr,arr+n);
//		cout << "排序后的元素为： " << endl;
//		for (int i = 0; i < n; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//	else if (x == 2)
//	{
//		sort(arr, arr + n, greater<int>());
//		cout << "排序后的元素为： " << endl;
//		for (int i = 0; i < n; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//	else
//	{
//		cout << "无效操作！" << endl;
//	}
//	cout << endl;
//}
//void insertarr()
//{
//	cout << "请输入你要插入的位置和元素";
//	int pos, num;
//	cin >> pos >> num;
//	if (pos<0 || pos>n)
//	{
//		cout << "无效位置！" << endl;
//	}
//	else
//	{
//		for (int i = n; i > pos; i--)
//		{
//			arr[i] = arr[i - 1];
//		}
//		arr[pos] = num;
//		n++;
//		cout << "插入后的元素为： " << endl;
//		for (int i = 0; i < n; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//}
//void findarr()
//{
//	cout << "请输入你要查找的元素：" << endl;
//	int x;
//	cin >> x;
//	int y = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] == x)
//		{
//			cout<< "该元素在数组中的位置为：" << i << endl;
//			y++;
//		}
//	}
//	if (y == 0)cout << "未找到元素！" << endl;
//	cout << endl;
//}
//void deletearr()
//{
//	cout << "1、删除指定元素，2、删除指定位置元素" << endl;
//	int m;
//	cin >> m;
//	if (m == 2)
//	{
//		cout << "请输入要删除的元素位置" << endl;
//		int pos;
//		cin >> pos;
//		if (pos<0 || pos>n)
//		{
//			cout << "无效位置！" << endl;
//		}
//		else
//		{
//			for (int i = pos; i < n - 1; i++)
//			{
//				arr[i] = arr[i + 1];
//			}
//			n--;
//			cout << "删除成功！" << endl;
//			cout << endl;
//
//		}
//	}
//	else if (m == 1)
//	{
//		cout << "请输入要删除的元素" << endl;
//		int x;
//		cin >> x;
//		int y = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (arr[i] == x)
//			{
//				for (int j = i; j < n - 1; j++)
//				{
//					arr[j] = arr[j + 1];
//				}
//				n--;
//				i--;
//				y++;
//			}
//		}
//		if (y != 0)cout << "删除成功" << endl;
//		else cout << "未找到此元素！" << endl;
//	}
//	else cout << "无效输入！" << endl;
//	cout << endl;
//}
//void outputarr()
//{
//	if (n == 0)
//	{
//		cout << "数组为空！" << endl;
//	}
//	else
//	{
//		cout << "数组元素为： " << endl;
//		for (int i = 0; i < n; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//}
//void outputarri()
//{
//	cout << "请输入你要输出的元素的位置";
//	int pos;
//	cin >> pos;
//	cout << "位于数组第" << pos << "处的元素为：" << arr[pos] << endl;
//	cout << endl;
//}
//void sumarr()
//{
//	cout << "请输入你要将数组求和的位置区间";
//	int a, b;
//	cin >> a >> b;
//	if (a<0 || b>n  )
//	{
//		cout << "无效位置!" << endl;
//	}
//	else
//	{
//		int sum = 0;
//		for (int i = a; i <= b; i++)
//		{
//			sum += i;
//		}
//		cout << "从第" << a << "处到第" << b << "处的元素和为：" << sum << endl;
//	}
//	cout << endl;
//}
//int main()
//{
//	while (true)
//	{
//		Showmenu();
//		int a;
//		cin >> a;
//		switch (a)
//		{
//			
//			case 1: inputarr(); break;
//			case 2: sortarr(); break;
//			case 3: insertarr(); break;
//			case 4: findarr(); break;
//			case 5: deletearr(); break;
//			case 6: outputarr(); break;
//			case 7: outputarri(); break;
//			case 8: sumarr(); break;
//			case 9:exit(0); break;
//			default: cout << "无效操作！\n";
//		}
//	}
//	system("pause");
//	return 0;
//}
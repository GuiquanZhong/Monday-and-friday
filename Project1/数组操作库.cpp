//#include<iostream>
//using namespace std;
//int arr[1000];
//int n = 0;
//#include<algorithm>
//void Showmenu()
//{
//	cout << "��ӭʹ��������������⣺" << endl;
//	cout << "***1.��������***" << endl;
//	cout << "***2.��������***" << endl;
//	cout << "***3.Ԫ�ز���***" << endl;
//	cout << "***4.Ԫ�ز���***" << endl;
//	cout << "***5.Ԫ��ɾ��***" << endl;
//	cout << "***6.�������***" << endl;
//	cout << "***7.���ָ��λ��Ԫ��***" << endl;
//	cout << "***8.��ָ������������Ԫ�����***" << endl;
//	cout << "***9.�˳�����***" << endl;
//}
//void inputarr()
//{
//	cout << "��������Ҫ�������������(�س�������" << endl;
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
//	cout << "��������Ҫ������ʽ��1������ 2������" << endl;
//	int x;
//	cin >> x;
//	if (x == 1)
//	{
//		sort(arr,arr+n);
//		cout << "������Ԫ��Ϊ�� " << endl;
//		for (int i = 0; i < n; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//	else if (x == 2)
//	{
//		sort(arr, arr + n, greater<int>());
//		cout << "������Ԫ��Ϊ�� " << endl;
//		for (int i = 0; i < n; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//	else
//	{
//		cout << "��Ч������" << endl;
//	}
//	cout << endl;
//}
//void insertarr()
//{
//	cout << "��������Ҫ�����λ�ú�Ԫ��";
//	int pos, num;
//	cin >> pos >> num;
//	if (pos<0 || pos>n)
//	{
//		cout << "��Чλ�ã�" << endl;
//	}
//	else
//	{
//		for (int i = n; i > pos; i--)
//		{
//			arr[i] = arr[i - 1];
//		}
//		arr[pos] = num;
//		n++;
//		cout << "������Ԫ��Ϊ�� " << endl;
//		for (int i = 0; i < n; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//}
//void findarr()
//{
//	cout << "��������Ҫ���ҵ�Ԫ�أ�" << endl;
//	int x;
//	cin >> x;
//	int y = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] == x)
//		{
//			cout<< "��Ԫ���������е�λ��Ϊ��" << i << endl;
//			y++;
//		}
//	}
//	if (y == 0)cout << "δ�ҵ�Ԫ�أ�" << endl;
//	cout << endl;
//}
//void deletearr()
//{
//	cout << "1��ɾ��ָ��Ԫ�أ�2��ɾ��ָ��λ��Ԫ��" << endl;
//	int m;
//	cin >> m;
//	if (m == 2)
//	{
//		cout << "������Ҫɾ����Ԫ��λ��" << endl;
//		int pos;
//		cin >> pos;
//		if (pos<0 || pos>n)
//		{
//			cout << "��Чλ�ã�" << endl;
//		}
//		else
//		{
//			for (int i = pos; i < n - 1; i++)
//			{
//				arr[i] = arr[i + 1];
//			}
//			n--;
//			cout << "ɾ���ɹ���" << endl;
//			cout << endl;
//
//		}
//	}
//	else if (m == 1)
//	{
//		cout << "������Ҫɾ����Ԫ��" << endl;
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
//		if (y != 0)cout << "ɾ���ɹ�" << endl;
//		else cout << "δ�ҵ���Ԫ�أ�" << endl;
//	}
//	else cout << "��Ч���룡" << endl;
//	cout << endl;
//}
//void outputarr()
//{
//	if (n == 0)
//	{
//		cout << "����Ϊ�գ�" << endl;
//	}
//	else
//	{
//		cout << "����Ԫ��Ϊ�� " << endl;
//		for (int i = 0; i < n; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//}
//void outputarri()
//{
//	cout << "��������Ҫ�����Ԫ�ص�λ��";
//	int pos;
//	cin >> pos;
//	cout << "λ�������" << pos << "����Ԫ��Ϊ��" << arr[pos] << endl;
//	cout << endl;
//}
//void sumarr()
//{
//	cout << "��������Ҫ��������͵�λ������";
//	int a, b;
//	cin >> a >> b;
//	if (a<0 || b>n  )
//	{
//		cout << "��Чλ��!" << endl;
//	}
//	else
//	{
//		int sum = 0;
//		for (int i = a; i <= b; i++)
//		{
//			sum += i;
//		}
//		cout << "�ӵ�" << a << "������" << b << "����Ԫ�غ�Ϊ��" << sum << endl;
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
//			default: cout << "��Ч������\n";
//		}
//	}
//	system("pause");
//	return 0;
//}
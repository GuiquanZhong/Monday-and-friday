//#include<iostream>
//#include<algorithm>
//using namespace std;
//int arr[1000];
//int n = 0;
//void Showmenu()
//{
//    cout << "��ӭʹ��������������⣺" << endl;
//    cout << "***1.��������***" << endl;
//    cout << "***2.��������***" << endl;
//    cout << "***3.Ԫ�ز���***" << endl;
//    cout << "***4.Ԫ�ز���***" << endl;
//    cout << "***5.Ԫ��ɾ��***" << endl;
//    cout << "***6.�������***" << endl;
//    cout << "***7.���ָ��λ��Ԫ��***" << endl;
//    cout << "***8.��ָ������������Ԫ�����***" << endl;
//}
//void inputarr()
//{
//    cout << "��������Ҫ������������ݣ��Իس���������" << endl;
//    int x;
//    while (cin >> x)
//    {
//        arr[n++] = x;
//        if (cin.get() == '\n') break;
//    }
//}
//void sortarr()
//{
//    cout << "��������Ҫ������ʽ��1������ 2������";
//    int x;
//    cin >> x;
//    if (x == 1)
//    {
//        sort(arr, arr + n);
//        cout << "����������Ϊ��";
//        for (int i = 0; i < n; i++)
//        {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//    else if (x == 2)
//    {
//        sort(arr, arr + n, greater<int>());
//        cout << "����������Ϊ��";
//        for (int i = 0; i < n; i++)
//        {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//    else
//    {
//        cout << "��Ч������" << endl;
//    }
//}
//void insert_element()
//{
//    cout << "��������Ҫ�����Ԫ�ؼ���λ�ã�λ�ô�0��ʼ����" << endl;
//    int x, pos;
//    cin >> x >> pos;
//    if (pos < 0 || pos > n)
//    {
//        cout << "��Чλ�ã�" << endl;
//    }
//    else
//    {
//        for (int i = n; i > pos; i--)
//        {
//            arr[i] = arr[i - 1];
//        }
//        arr[pos] = x;
//        n++;
//        cout << "����ɹ���" << endl;
//    }
//}
//int find_element()
//{
//    cout << "��������Ҫ���ҵ�Ԫ�أ�" << endl;
//    int x;
//    cin >> x;
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] == x)
//        {
//            return i;
//        }
//    }
//    return -1;
//}
//void delete_element()
//{
//    cout << "��������Ҫɾ����Ԫ�ص�λ�ã�λ�ô�0��ʼ����" << endl;
//    int pos;
//    cin >> pos;
//    if (pos < 0 || pos >= n)
//    {
//        cout << "��Чλ�ã�" << endl;
//    }
//    else
//    {
//        for (int i = pos; i < n - 1; i++)
//        {
//            arr[i] = arr[i + 1];
//        }
//        n--;
//        cout << "ɾ���ɹ���" << endl;
//    }
//}
//void output_array()
//{
//    if (n == 0)
//    {
//        cout << "����Ϊ�գ�" << endl;
//    }
//    else
//    {
//        cout << "����Ϊ��";
//        for (int i = 0; i < n; i++)
//        {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//}
//void output_element()
//{
//    cout << "��������Ҫ�����Ԫ�ص�λ�ã�λ�ô�0��ʼ����" << endl;
//    int pos;
//    cin >> pos;
//    if (pos < 0 || pos >= n)
//    {
//        cout << "��Чλ�ã�" << endl;
//    }
//    else
//    {
//        cout << "��λ���ϵ�Ԫ��Ϊ��" << arr[pos] << endl;
//    }
//}
//void sum_elements()
//{
//    cout << "��������Ҫ��͵�Ԫ�ظ�����" << endl;
//    int k;
//    cin >> k;
//    if (k < 1 || k > n)
//    {
//        cout << "��Ч������" << endl;
//    }
//    else
//    {
//        int sum = 0;
//        for (int i = 0; i < k; i++)
//        {
//            sum += arr[i];
//        }
//        cout << "ǰ" << k << "��Ԫ��֮��Ϊ��" << sum << endl;
//    }
//}
//int main()
//{
//    while (true)
//    {
//        Showmenu();
//        int a;
//        cin >> a;
//        switch (a)
//        {
//        case 1: inputarr(); break;
//        case 2: sortarr(); break;
//        case 3: insert_element(); break;
//        case 4:
//        {
//            int pos = find_element();
//            if (pos == -1)
//            {
//                cout << "δ�ҵ���Ԫ�أ�" << endl;
//            }
//            else
//            {
//                cout << "��Ԫ���������е�λ��Ϊ��" << pos << endl;
//            }
//            break;
//        }
//        case 5: delete_element(); break;
//        case 6: output_array(); break;
//        case 7: output_element(); break;
//        case 8: sum_elements(); break;
//        default: cout << "��Ч������" << endl;
//        }
//    }
//    return 0;
//}
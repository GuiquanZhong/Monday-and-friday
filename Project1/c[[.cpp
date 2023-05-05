//#include<iostream>
//#include<algorithm>
//using namespace std;
//int arr[1000];
//int n = 0;
//void Showmenu()
//{
//    cout << "欢迎使用整型数组操作库：" << endl;
//    cout << "***1.数组输入***" << endl;
//    cout << "***2.数组排序***" << endl;
//    cout << "***3.元素插入***" << endl;
//    cout << "***4.元素查找***" << endl;
//    cout << "***5.元素删除***" << endl;
//    cout << "***6.数组输出***" << endl;
//    cout << "***7.输出指定位置元素***" << endl;
//    cout << "***8.对指定个数的数组元素求和***" << endl;
//}
//void inputarr()
//{
//    cout << "请输入你要保存的整型数据（以回车结束）：" << endl;
//    int x;
//    while (cin >> x)
//    {
//        arr[n++] = x;
//        if (cin.get() == '\n') break;
//    }
//}
//void sortarr()
//{
//    cout << "请输入你要的排序方式：1、升序 2、降序：";
//    int x;
//    cin >> x;
//    if (x == 1)
//    {
//        sort(arr, arr + n);
//        cout << "排序后的数组为：";
//        for (int i = 0; i < n; i++)
//        {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//    else if (x == 2)
//    {
//        sort(arr, arr + n, greater<int>());
//        cout << "排序后的数组为：";
//        for (int i = 0; i < n; i++)
//        {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//    else
//    {
//        cout << "无效操作！" << endl;
//    }
//}
//void insert_element()
//{
//    cout << "请输入你要插入的元素及其位置（位置从0开始）：" << endl;
//    int x, pos;
//    cin >> x >> pos;
//    if (pos < 0 || pos > n)
//    {
//        cout << "无效位置！" << endl;
//    }
//    else
//    {
//        for (int i = n; i > pos; i--)
//        {
//            arr[i] = arr[i - 1];
//        }
//        arr[pos] = x;
//        n++;
//        cout << "插入成功！" << endl;
//    }
//}
//int find_element()
//{
//    cout << "请输入你要查找的元素：" << endl;
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
//    cout << "请输入你要删除的元素的位置（位置从0开始）：" << endl;
//    int pos;
//    cin >> pos;
//    if (pos < 0 || pos >= n)
//    {
//        cout << "无效位置！" << endl;
//    }
//    else
//    {
//        for (int i = pos; i < n - 1; i++)
//        {
//            arr[i] = arr[i + 1];
//        }
//        n--;
//        cout << "删除成功！" << endl;
//    }
//}
//void output_array()
//{
//    if (n == 0)
//    {
//        cout << "数组为空！" << endl;
//    }
//    else
//    {
//        cout << "数组为：";
//        for (int i = 0; i < n; i++)
//        {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//}
//void output_element()
//{
//    cout << "请输入你要输出的元素的位置（位置从0开始）：" << endl;
//    int pos;
//    cin >> pos;
//    if (pos < 0 || pos >= n)
//    {
//        cout << "无效位置！" << endl;
//    }
//    else
//    {
//        cout << "该位置上的元素为：" << arr[pos] << endl;
//    }
//}
//void sum_elements()
//{
//    cout << "请输入你要求和的元素个数：" << endl;
//    int k;
//    cin >> k;
//    if (k < 1 || k > n)
//    {
//        cout << "无效个数！" << endl;
//    }
//    else
//    {
//        int sum = 0;
//        for (int i = 0; i < k; i++)
//        {
//            sum += arr[i];
//        }
//        cout << "前" << k << "个元素之和为：" << sum << endl;
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
//                cout << "未找到该元素！" << endl;
//            }
//            else
//            {
//                cout << "该元素在数组中的位置为：" << pos << endl;
//            }
//            break;
//        }
//        case 5: delete_element(); break;
//        case 6: output_array(); break;
//        case 7: output_element(); break;
//        case 8: sum_elements(); break;
//        default: cout << "无效操作！" << endl;
//        }
//    }
//    return 0;
//}
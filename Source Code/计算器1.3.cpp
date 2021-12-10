#include<iostream>
using namespace std;

int main()
{
menu:
    //定义所用到的变量
    int method = 0, val = 0, sum = 0, n1 = 0, n2 = 0, prog = 0 ;
    double result=0;
    //用户选择加减乘除
    cout << "选择计算方式 1.＋ 2.－ 3.× 4.÷" << endl;
    cin >> method ;
    //若method=1 就执行以下代码块（加法）
    if (method == 1)
    {
        while(cin >> val)
            /*与其它三个不同 这个算法基于加法的特点
             直接在初始变量上累加
             更加简洁*/
            sum += val;
        cout << sum  << endl;
    }
    //若method=2 就执行以下代码块（减法）
    else if (method ==2)
    {
        cin >> n1;
        result = n1;
        while (cin>>n2 )
        {
            result= result - n2;
        }
        cout << result  << endl;
    }
    //若method=3 就执行以下代码块（乘法）
    else if (method == 3)
    {
        cin >> n1 ;
        result = n1;
        while(cin >> n2 )
        {
            result = result * n2;
        }
        cout << result  << endl;
    }
    //若method=4 就执行以下代码块（除法）
    else
    {
        cin >> n1 ;
        result = n1;
        while(cin >> n2 )
        {
            /*重新定义新result为旧result÷n2
            以实现用户输入n个数相除 */
            result = result / n2;
        }
        cout << result  << endl;

    }
    /*结束上面的while循环要用 ctrl+z ，
    在Window中相当于 eof ，cin流结束，
    再用个clear（),就可以恢复流动有效状态*/
    cin.clear();
    cout << "是否返回目录? 1.返回 2.退出" << endl;
    cin >> prog ;
    while(prog == 1)
        goto menu;
    return 0;
}
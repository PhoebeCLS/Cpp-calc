#include<iostream>
using namespace std;

/*函数声明 若未声明则会报错没有函数
 声明时后边加";"定义函数时不加*/
int menu();
int main()
{
    //定义所用到的变量
    int method = 0, val = 0, sum = 0, n1 = 0, n2 = 0 ;
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
    menu();
}


int menu ()
{
    /*prog变量要定义在fuc函数中
     定义在main中会报错未定义变量*/
    int prog = 0;
    /*结束上面的while循环要用 ctrl+z ，
    在Window中相当于 eof ，cin流结束，
    再用个clear（),就可以恢复流动有效状态*/
    cin.clear();
    cout << "是否返回目录? 1.返回 2.退出" << endl;
    cin >> prog ;
    if(prog == 1)
        main();
    else
    //跳出if…else语句    
        exit;
    //不能只在else后写return 0;
    //那样会导致menu这个有返回值的函数
    //可能没有返回值（if成立时无返回值）
    //虽然可以正常运行但会报错
    //所以有返回值的函数一定要在最后返回值
    //保证其有返回值
    return 0;
}
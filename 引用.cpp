//引用的基本语法-------------数据类型&别名=原名；
/*******************************
#include<iostream>
using namespace std;
int main()
{
	int a = 10;//局部变量
	int& b = a;//引用,相当于给同一块内存空间起一个小名；
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	b = 100;//通过别名修改内存中数据
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;
}
******************************/
//引用的注意事项
//1.引用必须初始化
//2.引用一旦初始化就不能更改
/***************************************
#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int c = 20;
	int& b = a;//引用初始化
	 b = c;//实际上是把a的值改为20；
	 cout << "a=" << a << endl;
	 cout << "b=" << b << endl;
	 cout << "c=" << c << endl;
	system("pause");
	return 0;
}
****************************************/
//引用作为函数的返回值
/**************************************
#include<iostream>
using namespace std;
//1.不要返回局部变量的引用
int& test01()
{
	int a = 10;//局部变量
	return a;
}
//2.函数的调用可以作为左值
int& test02()
{
	static int b = 20;//静态变量，存放在全局区，在全部程序结束后释放
	return b;
}
int main()
{
	//int& ref = test01();
	//cout << "a=" << ref<< endl;//第一次编译器保留，输出10
	//cout << "a=" << ref << endl;//第二次编译器不在保留，输出乱码
	int& ref = test02();
	cout << "b=" << ref << endl;//第一次输出20；
	cout << "b=" << ref << endl;//第二次输出20；

	system("pause");
	return 0;
}
*******************************/
//常量引用------------------用来修饰形参，防止误操作,const关键字
#include<iostream>
using namespace std;
void showvalue1(int& val)//不加const
{
	val = 1000;//对引用的修改会改变a的值为1000；
	cout << "val=" << val << endl;
}
void showvalue2(const int& val)//加const常量引用
{
	//val = 1000;//该句话错误，val是常量引用无法直接修改
	cout << "val=" << val << endl;
}
int main()
{
	int a = 100;
	int b = 10;
	showvalue1(a);
	cout << "a=" << a << endl;

	system("pause");
	return 0;
}
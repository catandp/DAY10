//���õĻ����﷨-------------��������&����=ԭ����
/*******************************
#include<iostream>
using namespace std;
int main()
{
	int a = 10;//�ֲ�����
	int& b = a;//����,�൱�ڸ�ͬһ���ڴ�ռ���һ��С����
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	b = 100;//ͨ�������޸��ڴ�������
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;
}
******************************/
//���õ�ע������
//1.���ñ����ʼ��
//2.����һ����ʼ���Ͳ��ܸ���
/***************************************
#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int c = 20;
	int& b = a;//���ó�ʼ��
	 b = c;//ʵ�����ǰ�a��ֵ��Ϊ20��
	 cout << "a=" << a << endl;
	 cout << "b=" << b << endl;
	 cout << "c=" << c << endl;
	system("pause");
	return 0;
}
****************************************/
//������Ϊ�����ķ���ֵ
/**************************************
#include<iostream>
using namespace std;
//1.��Ҫ���ؾֲ�����������
int& test01()
{
	int a = 10;//�ֲ�����
	return a;
}
//2.�����ĵ��ÿ�����Ϊ��ֵ
int& test02()
{
	static int b = 20;//��̬�����������ȫ��������ȫ������������ͷ�
	return b;
}
int main()
{
	//int& ref = test01();
	//cout << "a=" << ref<< endl;//��һ�α��������������10
	//cout << "a=" << ref << endl;//�ڶ��α��������ڱ������������
	int& ref = test02();
	cout << "b=" << ref << endl;//��һ�����20��
	cout << "b=" << ref << endl;//�ڶ������20��

	system("pause");
	return 0;
}
*******************************/
//��������------------------���������βΣ���ֹ�����,const�ؼ���
#include<iostream>
using namespace std;
void showvalue1(int& val)//����const
{
	val = 1000;//�����õ��޸Ļ�ı�a��ֵΪ1000��
	cout << "val=" << val << endl;
}
void showvalue2(const int& val)//��const��������
{
	//val = 1000;//�þ仰����val�ǳ��������޷�ֱ���޸�
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
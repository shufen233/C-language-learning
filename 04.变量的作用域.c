#define _CRT_SECURE_NO_WARNINGS
//变量的作用域
//1.局部变量
//局部变量的作用域是变量所在的局部范围
//int main()
//{
//	int a = 10;
//	{
//		int b = 100;
//		printf("a=%d\n", b);
//	}
//	printf("a=%d\n", a);
//
//	return 0;
//}

//2.全局变量
//全局部变量的作用域是整个工程
//注意外部的变量需要声明

//声明来自外部的符号
//extern int 变量名;

//int a = 10;
//
//void test() //创建函数
//{
//	printf("test>%d\n", a);
//}
//int main()
//{
//	test(); //调用函数
//	{
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//
//	return 0;
//}

//变量生命周期
//局部变量:进入作用域生命周期开始，出作用域生命周期结束
//全局变量:整个程序的生命周期

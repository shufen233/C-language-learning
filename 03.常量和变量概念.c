#define _CRT_SECURE_NO_WARNINGS
//常量和变量的概念
//变量分为:
//全局变量 - {}外部定义的变量
//int a = 10;//外部变量
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}

//局部变量 - {}内部部定义的变量
//int main()
//{
//	int a = 10;//内部变量
//	printf("%d\n", a);
//	return 0;
//}
//注意
//在全局和局部变量中定义的多个变量名字不可以相同
//如果两个变量分别是全局和局部变量，那么可以相同
//建议不要将全局和局部变量名字定义相同
//变量命名不能是关键字
//变量名的命名：
//1.有意义
//int age;
//float salary;
//2.名字必须是字母、数字、下划线组成
//不能有特殊字符，同时不能以数字开头。
//int 2b;//err
//int_2b;//ok


//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}
//如果有两个相同名字的的全局和局部变量，此时局部变量的优先级大于全局变量

//示列
//写一个代码，计算2个数的和
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum  = 0;//初始化
// 
//	printf("请输入两个数（空格隔开，回车确认）>");
// 
////  输入2个整数
//	scanf("%d%d",&num1,&num2);
// 
////  求和
//	sum = num1 + num2;
// 
////  输出
//	printf("%d\n",sum);
//	return 0;
//}
//scanf 是一个输入函数
//printf是一个输出函数
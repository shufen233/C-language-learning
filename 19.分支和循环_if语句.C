#define _CRT_SECURE_NO_WARNINGS
//分支语句(选择语句)
//if语句
//如果表达式为真执行

#include <stdio.h>
//int main()
//{
//	int age = 17;
//	if (age > 18)
//		printf("成年\n");
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	if (age < 18)
//		printf("未成年\n");//如果条件成立，要执行多条应该使用代码块{}
//	else
//		printf("成年\n");
//	return 0;
//}

//多分支
//嵌套if
//int main()
//{
//	int age = 111111;
//	if (age < 18)
//		printf("青少年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age < 100)
//		printf("老年\n");
//	else
//		printf("老寿星\n");
//	return 0;
//}


//示列
//判断一个数是否为奇数
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//	return 0;
//}

//输出1 - 180之间的奇数
// 第一种写法
//int main()
//{
//	int i = 0;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//第二种写法
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d\n", i);
//		i+=2;
//	}
//	return 0;
//}
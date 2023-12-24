#define _CRT_SECURE_NO_WARNINGS
//操作符
//运算操作符
// +  -  *  /  %
//注意:进行求商运算的时，被除数和除数其中某个为浮点数时，则会进行浮点数求商运算。
//int main()
//{
//	int a1 = 7 / 2;
//	int b1 = 7 / 2.0;
//	float a2 = 7 / 2;
//	float b2 = 7 / 2.0;
//	printf("%d\n", a1);
//	printf("%d\n", b1);
//	printf("%.1f\n", a2);//.1f是只打印小数点后一位数，同理数字是多少就是只打印小数点后多少位
//	printf("%.1f\n", b2);
//	return 0;
//}


//移位操作符
// <<  >>


//位操作符
// &  ^  |


//赋值操作符
// =  +=  -=  *=  /=  &=  ^=  |=  >>=  <<=


//单目操作符
//单目操作符是只接受一个操作数的运算符
// ！               逻辑反操作
// -                负值
// +                正值
// &                取地址
// sizeof           操作数的类型长度(以字节为单位)
// ~               对一个数的二进制按位取反
// --               前置、后置--
// ++               前置、后置++
// *                间接访问操作符（解引用操作符）
// (类型)           强制类型转换

//注意:sizeof是操作符，不是一个函数
//int main()
//{
//	int a = 10;
//	char b = "song";
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);//因为sizof是一个操作符不是函数，所以括号可以省略
//	printf("%d\n", sizeof (char));
//	printf("%d\n", sizeof (b));
//	printf("%d\n", sizeof b);
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}


//++ --
//int main()
//{
//	int a = 10;
//	int b = a++;//后置++，先使用，后++
//	// b = a ; a = a + 1
//
//	int b = ++a;//前置+，先++，后使用
//	// a = a + 1 ; b = a
//	
//	int a = 10;
//	int b = a--;//后置--，先使用，后--
//	// b = a ; a = a - 1
//
//	int b = --a;//后置++，先--，后使用
//	// a = a - 1 ; b = a
//	return 0;
//}

//(类型)强制转类型
//int main()
//{
//	int a = 3.14;
//	int a = (int)3.14;
//	//字面浮点数，编译器默认为double类型
//	printf("%d\n", a)
//	return 0;
//}


//关系操作符
// >  >=  <  <=  !=  ==


//逻辑操作符
// &&   逻辑"与"--并且
// ||   逻辑"或"--或者

//int main()
//{
//	int a, b = 0;
//	printf("请输入两个非负数(零也包含):");
//	scanf("%d%d", &a, &b);	
//	if (a && b)	
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}

//int main()
//{
//	int a, b = 0;
//	printf("请输入一个负数(零也可以)和一个非负数:");
//	scanf("%d%d", &a, &b);
//	if (a || b)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}

//条件操作符
//  exp1  ?  exp2  :  exp3   ////又称三目操作符，因为有三个操作数
//  true     执行    不执行
//  false   不执行    执行

//int main()
//{
//	int a, b, c = 0;
//	printf("请输入两个数比较大小:");
//	scanf("%d%d", &a, &b);
//	c = a > b ? a : b;
//	printf("%d", c);
//	return 0;
//}

//逗号操作符
//逗号表达式就是逗号隔开的一串表达式
//逗号表达式的特点是：从左向右依次计算，整个表达式的结果是最后一个表达式的结果
// exp1 , exp2 , exp3 , ...expn

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = (c = a - 2, a = a + c, c - 3);//结果是最后一个表达式结果
//	printf("%d\n", d);
//	return 0;
//}

//下标引用、函数调用和结构成员
// []  下标操作符
// ()  函数调用操作符
// .  
// ->
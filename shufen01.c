#define _CRT_SECURE_NO_WARNINGS
//C语言中一定要有main函数
// 主函数

//C语言规定
//main函数是程序的入口
//main函数有且只有一个

#include <stdio.h>//代码必要的头部文件
//std - 标准
// i - input
// o - ouyput

//标准的main主函数写法
//int main()
//{
//	printf("hello,world\n");
//	return 0;
// }

//printf是一个库函数
//专门用来打印数据的
//格式字符意义
//a, A	  以十六进制形式输出浮点数(C99 新增)。实例 printf("pi=%a\n", 3.14); 输出 pi = 0x1.91eb86p+1。
//d	      以十进制形式输出带符号整数(正数不输出符号)
//o	      以八进制形式输出无符号整数(不输出前缀0)
//x, X	  以十六进制形式输出无符号整数(不输出前缀Ox)
//u	      以十进制形式输出无符号整数
//f	      以小数形式输出单、双精度实数
//e, E	  以指数形式输出单、双精度实数
//g, G	  以% f或% e中较短的输出宽度输出单、双精度实数
//c	      输出单个字符
//s	      输出字符串
//p	      输出指针地址
//lu	  32位无符号整数
//llu	  64位无符号整数


//古老的main主函数的写法
//void main()
//{
//
//}





//数据类型
//char        //字符数据类型
//short       //短整型
//int         //整形
//long        //长整形
//long long   //更长整形
//float       //单精度浮点数
//double      //双精度浮点型

//不同类型的大小
//int main()
//{
//	printf("%d\n",(int)sizeof(char));//因为sizof()的值的类型不是int，使用(int)强制转换成interesting型
//	printf("%d\n",(int)sizeof(short));
//	printf("%d\n",(int)sizeof(int));
//	printf("%d\n",(int)sizeof(long));
//	printf("%d\n",(int)sizeof(long long));
//	printf("%d\n",(int)sizeof(float));
//	printf("%d\n",(int)sizeof(double));
//	return 0;
//}
//sizeof()函数是求字节数函数





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

//实列
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


//习题；计算距离
//追风少年小明骑电瓶车的速度是 40km / h，他以这样的速度从家到公司花费了 1 小时 30 分钟，红绿灯时间忽略不计，小明家与公司的距离是多远？
//int main() 
// {
//	int speed = 40;
//	double time = 1.5;
//	double len;
//	len = speed * time;
//
//	printf("小明家与公司的距离是%.2f公里\n", len);
//
//	return 0;
//}

//制作中文图书管理系统的登录界面
//问题分析：中文图书管理系统登录界面是进入图书管理系统的第一个界面，实现实现用户登录系统的功能，可据此对用户的合法性进行检查，本案例只是实现简单的登录功能。
//用户输入：借书卡号，用户姓名 期望的输出：登录成功的提示信息
//int main() 
// {
//	int cardnum;
//	char name[20];  //这个就是定义了一个字符串数组，可以容纳 20 字符
//	printf("**********************************************************\n");
//	printf("********Welcome to the books management system************\n");
//	printf("**********************************************************\n");
//	printf("~~~~~~~~~\t\t\t\t~~~~~~~~~~~~~~\n");
//	printf("Please input your card number:\n");
//	scanf("%d", &cardnum);
//	printf("Please input your name:\n");
//	scanf("%s", name);
//	printf("\nWelcome，%s！Your card number is：%d\n", name, cardnum);
//
//	return 0;
//}
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

//常量
//1.字面常量
//int main()
//{
//	30;
//	3.14;
//	'w';//字符
//	"abc";//字符串
//	return 0;
//}

//2.const修饰的常变量
//int main()
//{
//	const int a = 10;//在c语言中，const修饰的变量，本质是变量，但是不能被修改，有着常量的属性。
//    a = 20;//err
//	printf("%d", a);
// 
//    const int b = 10;
//	int acc[b] = { 0 };//err
// 
//	return 0;
//}

//3.#define 定义的标识常量
//#define A 100
//#define c "abcde"
//int main()
//{
//    printf("%d\n", A);
//    int b = A;
//    printf("%d\n", b);
//    printf("%s\n", c);
//    return 0;
//}

//4.枚举常量
//enum Color
//{
//    //枚举常量
//    RED,
//    GREEN,
//    BLUE,
//};
//int main()
//{
//    enum Color c = RED;
//    //RED = 20;//err
//    //GREEN = 10;//err
//    return 0;
//}





///字符串
///由双引号引起来的一串字符称为字符串字面值，或简称字符串
///字符串的结束是一个\0的转义字符。在计算字符串的长度的时候是\0是结束标志，不算作字符串内容。
#include<string.h>//strint函数是一个库函数，在vs需要写上头部文件
//int main()
//{
//	//arr是array的缩写是一个数组
//	char arr1[] = "abcdef";//这种写法会默认写结束符号\0
//	char arr2[] = { 'a','b','c','d','e','f','\0' };//这种写法不会默认写结束符,需要自己写上结束符号
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", "\0");// \0是打印不出来的
//
//	//strlen()是一个求字符串长度的函数，string length
//  //注:空格也会算作字符
//	int len1 = strlen("abcdef");
//	int len2 = strlen(arr1);
//	printf("%d\n", len1);
//	printf("%d\n", len2);
//	return 0;
//}





//转义字符
// 转变原字符的意义
//int main()
//{
//	//printf("%s\n","anbc");//此时的n就是单纯的一个字符
//	//printf("%s\n","a\nbc");//此时的\n就是有着换行的意思的转义字符
//	//printf("%s\n", "a\nbc");
//	//printf("%s\n", "a\\ndc");
//	//printf("%s\n", "C:\Windows\Temp\NvidiaLogging");
//	//printf("%s\n", "C:\Windows\\Temp\\NvidiaLogging");
//	printf("%c\n", ' \300');
//	return 0;
//}

//C语言中规定的转义字符
// \?     在书写连续多个问号时使用，防止他们被解析成三字母词
// \`	  用于表示字符常量`
// \"	  用于表示一个字符产内部的双引号
// \\	  用于表示一个反斜杠，防止它被解释为一个转义序列符
// \a	  警告字符，蜂鸣
// \b	  退格符
// \f	  进纸符
// \n	  换行
// \r	  回车
// \t	  水平制表符
// \v	  垂直制表符
// \ddd	  ddd表示1~3个八进制的数字。如：\130 X
// \xdd	  dd表示2个十六进制数字。如 : \x30 0





//注释
//代码中有不需要的代码可以直接删除，也可以注释掉
//代码中有些代码比较难懂，可以加一下注释文字
/*C语言的风格注释*/
//C++语言的注释方式





//选择语句
//C 语言提供了以下类型的判断语句。
//if 语句	           一个 if 语句 由一个布尔表达式后跟一个或多个语句组成。
//if...else 语句	   一个 if 语句 后可跟一个可选的 else 语句，else 语句在布尔表达式为假时执行。
//嵌套 if 语句	       您可以在一个 if 或 else if 语句内使用另一个 if 或 else if 语句。
//switch 语句	       一个 switch 语句允许测试一个变量等于多个值时的情况。
//嵌套 switch 语句	   您可以在一个 sw*/itch 语句内使用另一个 switch 语句。

//if语句
//int main()
//{
//	int input = 0;
//	printf("你在路上遇到过马路的老奶奶你会扶吗？\n");
//	printf("扶/不扶(y/n)\n");
//	scanf("%d",  & input);
//	if(input == 'y')
//	{
//		printf("good boy");
//	}
//	else
//	{
//		printf("bad boy");
//	}
//	return 0;
//}





//90公里校园跑
//int main()
//{
//	int distance = 0;
//	printf("校园跑成绩:\n");
//
//	while (distance < 90)
//	{
//		printf("校园跑累积公里数:%d\n",distance);
//		distance++;
//	}
//		if (distance >= 90)
//	{
//		printf("优秀");
//	}
//	else
//	{
//		printf("未达到要求，继续加油");
//	}
//
//	return 0;
//}





//函数
//int add(int x,int y) //这段是定义了一个求和函数
//{
//	return x+y;
//}
//
//int main()
//{
//	int a1=0,a2=0;
//	printf("输入两个数求和:\n");
//	scanf("%d %d", &a1, &a2);
//	int sum = add(a1, a2);  //在这是直接调用上面的函数
//	printf("%d\n", sum);
//	return 0;
//}





//数组
//有序排列的同类数据元素的集合

//int main()
//{
//	int a[9] = {1,2,3,4,5,6,7,8,9};//括号里可以不写元素数量
//	int a[] = {1,2,3,4,5,6,7,8,9};//这两种写法都一样
//	char  b[5] = { '壹','贰','叁','肆','伍' };
//	double c[5] = { 1.11,2.22,3.33,4.44,5.55 };
//	return 0;
//}

//数值的下标
//数组里面的元素都是有下标的，下标是从0开始的。
//数组可以通过下标来访问的
//例：int a[9] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 }
//    下标         0   1   2   3   4   5   6   7   8

//用while循环输出数组里所有的与元素
//int main()
//{
//	int a[9] = {1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	while (i < 5)
//	{
//		printf("%s\n", b[i]);
//		i = i + 1;
//	}
//	return 0;
//}





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


//关键字 typedef
//ypedef顾名思义是类型定义，这里应该理解为类型重命名。
//比如：
//将unsigned int重命名为uint32,所以uint32也是一个类型名
//typedef unsigned int uint_32;
//int main()
//{
//	//观察num1和num2,这两个变量的类型是一样的
//	unsigned int num1 0;
//	uint_32 num2 0;
//	return 0;
//}


//关键字static
//在C语言中：
//static, 是用来修饰变量和函数的
//1.修饰局部变量 - 称为静态局部变量
//示列
//void test() //不需要返回，写void
//{
//	static int a = 1;
//	a++;
//	printf("%d\t", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//static修饰局部变量的时候，局部变量出了作用域，不销毁的。
// 本质上，static修饰局部变量的时候，改变了变量的存储位置的。
// 影响了变量的生命周期，生命周期变长，和程序的生命周期一样


//2.修饰全局变量 - 称为静态全局变量
//在定义外部全局变量的的时候，注意static修饰全局变量的时候，这个全局变量的外部链接属性，就变成了内部链接属性。
//其他源文件(.C)就不能再使用到这个全局变量了。

//3.修饰函数称为静态函数
//一个函数本来是具有外部链接属性的，
//但是被static修饰的时候，外部链接属性就，
//变成了内部链接属性，其他源文件(.c)
//就无法使用了。
//跟修饰全局变量同理


//#define定义常量和宏

//define定义标识符常量
//#define NUM 1000

//define定义宏
//#define ADD(x,y)((x)+(y))
//宏的格式:#define "宏名" (宏参数) (宏体)
//int main()
//{
//	int sum = ADD(2, 3);
//	printf("sum=%d\n",sum);
//
//	sum = 10 * ADD(2, 3);
//	printf("sum=%d\n",sum);
//	return 0;
//}




//指针





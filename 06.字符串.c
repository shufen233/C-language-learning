#define _CRT_SECURE_NO_WARNINGS
//字符串
//由双引号引起来的一串字符称为字符串字面值，或简称字符串
//字符串的结束是一个\0的转义字符。在计算字符串的长度的时候是\0是结束标志，不算作字符串内容。
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

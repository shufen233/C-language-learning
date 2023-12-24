#define _CRT_SECURE_NO_WARNINGS
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
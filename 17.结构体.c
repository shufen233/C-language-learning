//结构体
//结构体是C语言中特别重要的知识点，结构体使得C语言有能力描述复杂类型。
//比如描述学生，学生包含：名字 + 年龄 + 性别 + 学号这几项信息。
//这里只能使用结构体来描述了。
//例如：
#include <stdio.h>
//struct stu
//{
//	char name[20];//名字
//	int age;      //年龄
//	char sex[5];  //性别
//	char tele[15];//电话号码
//};
//
//void print(struct stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	//->
//	// 结构体指针变量->成员名
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//
//int main()
//{
//	struct stu s = { "zhangsan", 20, "nan", "13122224444" };
//	//结构体对象.成员名
//	printf("%s %d %s %s\n",s.name,s.age,s.sex,s.tele);
//	print(&s);
//	return 0;
//}

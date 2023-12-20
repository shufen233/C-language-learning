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
#define _CRT_SECURE_NO_WARNINGS 1 //使scanf strcpy strlen能够使用
#include <stdio.h>



//int main()//字符串的结束标志
//{
//	char arr[] = { "abc"};
//	printf("%s\n", arr);
//	char arr1[] = { 'a','b','c' };
//	printf("%s\n", arr1);
//	char arr2[] = { 'a','b','c', 0};
//	printf("%s\n", arr2);
//	char arr3[] = { 'a','b','c','\0'};
//	return 0;
//}


//int main() //判断两个函数的大小
//{
//	int num1 = 0;
//	int num2 = 0;
//	int MAX = 0;
//	scanf("%d%d", &num1, &num2);
//	if (num1 > num2)
//		printf("MAX=%d\n", num1);
//	else
//		printf("MAX=%d\n",  num2);
//	return 0;
//}

//int MAX(int x, int y)  //输入两个数值，输出最大值
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//	}
//int main()
//{
//	int num1 = 10;
//	int num2 = 0;
//	int max = 0;
//	scanf("%d%d" ,& num1, &num2);
//	max = MAX(num1, num2);
//	printf("max=%d\n", max);
//	return 0;
//}


//int main() //sizeof的使用
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6, };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));//不能去括号，直接计算int的
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(arr));//6个整型元素，每个整型4个字节，一共4*6=24个字节
//	printf("%d\n", sizeof(arr) /sizeof(arr[1]));//后面一个arr[]里面可以填0-5中的任意一个，意思是整个arr/arr其中的一个元素
//	return 0;
//}

//int main()//补码 反码 原码，~的取反
//{
//	int a = 0;
//	int b = ~a;		//'~'--按（2进制）位取反   000000变成111111
//	//补码减一得到反码，反码符号位不变，其他按位取反得到原码
//	//原码：100000000  变成反码：111111111   变成补码：1000000000
//	printf("%d\n", b);//2进制的最高位表示符号位，最高位为1为负数，0为正数 
//	return 0;
//}


//int main()//++的前置后置
//{
//	int a = 10;
//	int b = a++;//后置++，先使用再+1
//	int c = ++a;//++前置，先++，再使用
//	printf("a=%d\n b=%d\n c=%d\n", a, b,c);//这里有两个++，故这里打印a=12
//	return 0;
//}


//int main()//--的前置后置
//{
//	int a = 10;
//	int b = a--;//后置先赋值再运算，此时a=9,b=10
//	int c = --a;//前置先运算再赋值, 此时a=8,c=8
//	printf("a=%d\n b=%d\n c=%d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//强制类型转换 double转换成int
//	printf("%d\n", a);
//	return 0;
//}

//关系操作符 >=  !=(不等于) ==（判断相等）
//逻辑操作符 &&(逻辑与) ||（逻辑或）

//int main()		//&&逻辑与的解释
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;	//a为真b也为真，c既为真(非0既为真)，若其中一个不为真（0），c=0
//	printf("%d\n", c);//c为真，1
//	return 0;
//}
//int main()		//||逻辑或的解释
//{
//	int a = 0;
//	int b = 0;
//	int c = a || b;	//a为真或b也为真，c既为真(非0既为真)，只需其中任一为真（1），c=1；两个都为假（0），c=0
//	printf("%d\n", c);//c为真，1
//	return 0;
//}



//int  main()		//条件操作符  exp1 ? exp2:exp3(exp里面的条件是否成立，成立输出exp2，不成立输出exp3)
//{				//也叫3目操作符
//	int a = 100;
//	int b = 20;
//	int max = 0;
//	//max = (a > b ? a : b);//判断ab的大小关系，和下面的if语句同义
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	printf("max=%d\n", max);
//	return 0;
//}



//int main()//[]引用操作符
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr) / sizeof(arr[1]));	//[]下标引用操作符 ,此处引用下标为一的内存长度
//	return 0;
//}


//int Add(int x, int y)		//（）的意义
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);	//这里的（）是函数调用操作符
//	printf("%d\n", sum);
//	return 0;
//}


//只要是整数，内存中存储的都是2进制的补码  第一位就是符号位
//正数--原码，反码，补码相同
//负数：
//原码    -------->    反码    -------->    补码
//直接按照正负		原码的符号位不变		反码+1
//写出的二进制序列  其他位按位取反得到

//-2
//10000000000000000000000000000010 --原码
//11111111111111111111111111111101 --反码
//11111111111111111111111111111110 --补码


//int main()		//关键字
//{
//	//register int a = 10;  //把a定义为寄存器变量
//	int a = 10;	//int 定义的变量是有符号的
//	a = -2;		//int = signed int
//	unsigned int a = 1;	//定义无符号的a
//	//struct	结构体关键字
//	//union		联合体/共用体
//	//typedf	类型定义  类型重定义
//	unsigned int num = 20;		
//	typedef unsigned int u_int;//将unsigned int 重新定义为u_int ,后面就不用打unsigned int了，可以直接用u_int 来代替unsigned int
//	u_int num2 = 20;
//	return 0;
//}





//void test()			//static修饰局部变量
//{						
//	static int a = 0;		//a是一个静态的局部变量
//	 a++;					//static 修饰局部变量时，局部变量的生命周期边长
//	printf("a=%d\n",a);
//	}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//int main()//static修饰全局变量
//{	//extern -申明外部符号
//	extern int g_val;		//当static修饰全局变量时，
//	printf("%d\n", g_val);	//改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就无法使用
//	return 0;
//}

//extern int Add(int, int);
//int main()		//static修饰函数
//{				//改变了函数的链接属性（普通的函数具有外部链接属性）
//	int a = 10;	//static修饰函数后，函数只具有内部链接属性
//	int b = 20;
//	int sum =Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//#define MAX 100	//#define定义了MAX之后，只要后面有MAX，值就是100
//int main()	//#define 定义常量和宏
//{
//	int a = MAX;
//	return 0;
//}

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}//宏的定义方式
//#define  MAX(X,Y) (X>Y ? X : Y)
//int main()
//{
//	int a = 11;
//	int b = 10;
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}


//int main()		//指针（地址）*的意义
//{
//	int a = 10;//向内存申请四个字节取一个变量a=10
//	&a;//取出a的地址
//	printf("%p\n", &a);//%p打印地址
//	//int *p;			//p为一个整型指针变量 
//	int* p = &a;	//把a的地址放到p里面p=a的地址
//	printf("%p\n", p);
//	printf("%p\n", &p);//取p的存放地址
//	//*p=20;				//*-解引用操作//把a的值改成20，a的地址也随之改变
//	//printf("a=%d\n", a);
//	return 0;
// }

//
//int main()//指针变量的大小
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%p\n", &ch);
//	printf("%d\n", ch);
//	printf("%c\n", ch);
//	printf("%d\n", sizeof(pc));		//指针变量p的大小  32位的平台是4个byte字节（32个bit位），64位的平台是8个byte字节（64bit）
//	return 0;
//}
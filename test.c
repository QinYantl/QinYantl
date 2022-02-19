#include <stdio.h>				// 使用stdio.h里面的东西就需要这个代码
//打印函数printf				//stdio=std标准  stabdard input output 标准输入/输出
int main	()					//主函数-函数的入口-main函数有且仅有一个
{								//int是整型的意思
								//main前面的int表示main函数调用返回一个整型值
								//void main （）是已过时的写法
								//这里开始进行任务
	printf("hello world\n");	 //屏幕上打印-print function =frintf-打印函数
	printf("hello world\n");	//printf使用格式：peintf("需要打印的内容\n");
	printf("hello world\n");	//printf是库函数，c语言本身提供给我们的函数
	printf("hello world\n"); 
	printf("李开怀 world\n");	//在屏幕上输出李开怀world
	return 0;		//返回0//
}


//变量的使用
// char		char		字符数据类型
//%d		short		短整型 =short int
//%d		int			整型
//%d		long		长整型
//%d		long long	更长的整型
//%f		float		单精度浮点型
//		double		双精度浮点型 
//%p					以地址形式打印
//%o					打印十六进制的数字
//int	main()
//{
//	char ch = 'A';//内存
//	printf("%c\n",ch);		//%c--打印字符格式的数据
//	int age = 20;
//	printf("%d\n", age);		//%d--打印整型十进制数据
//	long num = 100;			
//	printf("%d\n", num);		//打印长整型
//	float f = 0.98;			//打印浮点型
//	printf("%f\n", f);
//	double d = 3.1415;		//打印双精度浮点型
//	printf("%lf\n", d);
//		return	0;
//}


////变量所占的内存大小 sizeof函数
// int main()
//{				//sizeof 不是函数名，而是运算符
				//sizeof 计算 变量类型，或某一变量占内存 大小 的字节数。			
	//printf("%d\n", sizeof(char));		//所占内存 1
	//printf("%d\n", sizeof(int));		//所占内存 4
	//printf("%d\n", sizeof(short));	//所占内存 2
	//printf("%d\n", sizeof(long));		//所占内存 4/8
	//printf("%d\n", sizeof(long long));//所占内存 8
	//printf("%d\n", sizeof(float));	//所占内存 4
	//printf("%d\n", sizeof(double));	//所占内存 8
	//return 0;
				//右边的数字代表字节
				//计算机中的最小单位：bit（只能容纳一个二进制位 1/0）
				//byte（1字节 8个bit位） 	 	 	 	
				//kb（1024个byte）
				//mb（1024个kb）
				//gb（1024个mb）
				//tb（1024个gb）	 
				//pb（1024个tb）
//}


////局部变量和全局变量
// int num2 = 21;				//全局变量，定义在{}之外的变量
//int main()
//{
//	short age = 25;			//向内存申请2个字节=16个bit来存放20
//	float weight = 71.3f;		//向内存申请4个字节=32个bit来存放71.3
//	int num1 = 10;			//age/weight/num1,为局部变量，定义在{}之内
//	printf("%d\n",age);		//局部变量和全局变量的名字尽量不要相同
//	printf("%f\n", weight);	//局部变量和全局变量的名字相同时，局部变量优先
//	printf("age=25\n");		//局部变量只能在{}局部内使用，全局变量不限条件、
//	return 0;
//}


//	//计算两个变量的和，scanf输入函数
//	int main()					
//	{
//	int num1 = 1;	
//	int num2 = 10;
//	int sum = 0;				//c语言规定，变量要定义在代码块的最前面			
//	scanf_s("%d%d", &num1, &num2);//&取地址符号	 输入数据使用输入函数scanf
//	sum = num1 + num2;			
//	printf("sum=%d\n", sum);
//		return 0;
//}


////局部变量和全局全局变量的作用域
// int global = 2020;
//int main()
//{ {
//	}
//	printf("%d\n",global);	//当把global定义在上面那个{}内时则无法打印出2020
//	return 0;				//局部变量的作用域是变量所在的局部范围（{}外无法作用）
//}							//全局变量的作用域是整个工程



////生命周期和extern运算
// int main()
//{	
//	extern int g_val;			//extern声明外部定义的变量
//	printf("g_val=%d\n", g_val);//没有上面一排，就有未声明的变量
//	return 0;
//}

////生命周期
//int main()
//{
//	{	int val = 20220212;
//		printf("v=%d\n", val);	//正确，定义了val
//	}
//		//printf("v=%d\n", val);	//错误，未定义val
//	return 0;//局部变量的生命周期：进入作用域生命周期开始，出作用域生命周期结束
//			 //全局定义的生命周期：整个程序的生命周期	
//}


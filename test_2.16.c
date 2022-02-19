#define _CRT_SECURE_NO_WARNINGS 1 //使scanf strcpy strlen能够使用
#include<stdio.h>					//上面一句话必须加在源文件第一行
//int main()
//{
//	int num1=0;
//	int num2=0;
//	int sum=0;
//	scanf("%d%d", &num1, &num2);	//scanf是c语言提供的
//	sum = num1 + num2;				//scanf_s不是标准c语言提供的，是vs编译器提供的
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()//常量
//{	//3；10；3.14；				//字面常量
//	const int num = 4;			//const-常属性 
//	printf("%d\n", num);		//上面加上const，num就无法再赋值改变
//	//num = 8;
//	//printf("%d\n", num);
//	return 0;
//}


//int main()//const修饰的常变量没有变量的属性，无法改变
//{
//	const int n = 10;		//n是变量，但是又有常属性，所以n是常变量
//	int arr[10] = { 0 };	//arr里面有10个整型变量 
//	
//	return 0;
//}

//#define MAX 10
//int main()//define定义的标识符常量
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//
//}

////枚举关键字 - enum
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET,
//};
//enum Color {
//	red,
//	yellow,
//	green,
//};
//int main()				//枚举常量
//{						//枚举--一一列举：性别（男女保密）
//	enum Sex s = FEMALE;
//	//printf("%d\n", MALE);			//0
//	//printf("%d\n", FEMALE);		//1
//	//printf("%d\n", SECRET);		//2
//	enum Color color = green;
//	return 0;
//}


//int main()//字符串
//{
//	//"abcdsfas";					//双引号引起得为字符串
//	char arr1[] = "abc";			//"abc"---'a','b','c','\0'
//	printf("%s\n", arr1);			//'\0'表示字符串的结束标志
//	char arr2[] = { 'a','b','c' };	//这个没有0为结束，就会出现乱码
//	printf("%s\n", arr2);
//	char arr3[] = { 'a','b','c',0 };//这里可以是‘\0’也可以是0，都可
//	printf("%s\n", arr3);
//	char arr4[] = { 'a','b','c','\0' };
//	printf("%s\n", arr4);
//	return 0;						//CTRL+f5试试看
//}				//\0是转义字符		//\0是字符串的结束标志


//int main()//strlen,字符串长度计算
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	char arr3[] = { 'a', 'b', 'c' ,'\0'};
//	printf("%d\n", strlen(arr1));	//strlen- string lenght - 计算字符串长度
//	printf("%d\n", strlen(arr2));	//打印出来是随机值，上下两个都是3
//	printf("%d\n", strlen(arr3));
//	return 0;					
//}


//int main()	//转义字符
//{
	//printf("abc\n");
	//printf("abc");
	//printf("abc\n");				//"\n"的意思是换行
	//printf("李开怀\t李开怀");		//"\t"水平制表符
	//printf("\n");
	//printf("李开怀t李开怀");
	//printf("(are you ok??)\n");		
	//printf("likai\\");			//"\\"打出一个斜杠
	//printf("%c\n",'\'');			//"\'"打印‘
	//printf("%s\n", "\"");			//"\""打印"
	//return 0;
//}



//int main()	//转义字符  strlen 长度计算
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));//13
//	printf("c:\test\32\test.c\132");	//\32--32是两个8进制数字
//	printf("%c\n", '\x61');				//61作为8进制代表的那个十进制数字所代表的ASCⅡ码所表示的值
//	return 0;//32=3*8^1+2*8^0=26    132=1*8^2+3*8^1+2*8^0=90
//}



//int main()  //循环语句
//{	
//	int input = 0;
//	printf("你要考研吗？");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("那你要好好学习\n不用担心，T会回来的\n");
//	else
//		printf("那T会永远离你而去\n");
//	return 0;
//}


//int main()	//while循环
//{
//	int line = 0;
//	int input = 0;
//	printf("你想考研吗？\n");
//	
//		printf("那就好好学习吧\n");
//		while (line < 10) {
//			printf("学习学习，%d\n", line);
//			line++;
//		}
//		if (line >= 10)
//			printf("T会回来的，加油");
//	
//
//	return 0;
//}


//add(int x, int y)	//函数，这个没写完，还无法运行
//{
//	int z = x + y;
//	return z;
//}
//	int main()
//	{
//		int sum = 0;
//		int a = 0;
//		int b = 0;
//		int num1 = 0;
//		int num2 = 0;
//		sum = add(num1, num2);
//		sum = add(a, b);
//		printf("sum=%d\n", sum);
//	return 0;
//}


//int main()		//数组的定义和使用
//{
//		//int arr[10];	//定义一个存放10个整数数字的数组
//		//char arrch[20];	//定义一个存放20个字符的数组
//		//float arr2[5];	//定义一个存放5个浮点型的数组
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//左边对应的下标0123456789
//	//printf("%d\n", arr[9]);		//打印下标为9的数
//	//全部打印怎么办？
//	int i = 0;
//	while (i <  10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}


//int main()	//算数运算符
//{
//	int a = 5 / 2;		//"/"除商
//	printf("%d\n",a);
//	int b = 5 % 2;
//	printf("%d\n", b);	//"%"取模
//	return 0; 
//}
////2:57:22


//int main()		//<<左移；>>右移，位移操作符
//{				//int整型的内存是4个字节，32个bit位
//	int a = 10;	//a=1的内存表示：00000000000000000000000000000001	
//	a << 1;
//	printf("%d\n", a );		//此时打印出来的是1，因为a<<1,没有保存
//	int b = a << 1;			//此时因为a左移了一位，就变成了十进制的2
//	printf("%d\n", b);		//a<<2的话，此时a就变成了十进制的4
//	return 0;
//}

//int main()		//位操作	&按位与，|按位或，^按位异或
//{
//	int a = 3;		  //3的2进制011
//	int b = 5;		  //5的2进制101
//	int c = a & b;
//	printf("%d\n", c);//1的2进制001   不同为0（&按位与）
//	int d = a | b;
//	printf("%d\n", d);//7的2进制111   有1为1（|按位或）
//	int e = a ^ b;
//	printf("%d\n", e);//6的2进制110	不同为1（^按位异或）
//	return 0;
//}


//int main()	//赋值
//{	
//	int a = 20;		//下面都是复合赋值（+= -= *=）
//	a = a + 10;		a += 10;//两种表示方法一样
//	a = a - 10;		a -= 10;//两种表示方法一样
//	a = a & 2;		a &= 2;	//两种表示方法一样
//	return 0;
//}


//int main()		//单目操作符
//{
//	int a = 5;
//	int b = 7;
//	a + b;		//+是双目操作符，将两个值相加
//	printf("%d\n", a);
//	printf("%d\n", !a);//!是单目操作符，将a真假交换，将假变成真，将真变成假
//	int a = -2;//-单目操作符，将2变成-2
//	return 0;
//}

//int main()		//sizeof 计算的是变量/类型所占空间大小，单位是字节	
//{
//	int a = 4;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof int);无法省略（）
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//10*sizeof[int]=40
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[10]);//arr的空间大小除以每个元素的大小
//	printf("%d\n", sz);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1 //ʹscanf strcpy strlen�ܹ�ʹ��
#include<stdio.h>					//����һ�仰�������Դ�ļ���һ��
//int main()
//{
//	int num1=0;
//	int num2=0;
//	int sum=0;
//	scanf("%d%d", &num1, &num2);	//scanf��c�����ṩ��
//	sum = num1 + num2;				//scanf_s���Ǳ�׼c�����ṩ�ģ���vs�������ṩ��
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()//����
//{	//3��10��3.14��				//���泣��
//	const int num = 4;			//const-������ 
//	printf("%d\n", num);		//�������const��num���޷��ٸ�ֵ�ı�
//	//num = 8;
//	//printf("%d\n", num);
//	return 0;
//}


//int main()//const���εĳ�����û�б��������ԣ��޷��ı�
//{
//	const int n = 10;		//n�Ǳ������������г����ԣ�����n�ǳ�����
//	int arr[10] = { 0 };	//arr������10�����ͱ��� 
//	
//	return 0;
//}

//#define MAX 10
//int main()//define����ı�ʶ������
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//
//}

////ö�ٹؼ��� - enum
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
//int main()				//ö�ٳ���
//{						//ö��--һһ�о٣��Ա���Ů���ܣ�
//	enum Sex s = FEMALE;
//	//printf("%d\n", MALE);			//0
//	//printf("%d\n", FEMALE);		//1
//	//printf("%d\n", SECRET);		//2
//	enum Color color = green;
//	return 0;
//}


//int main()//�ַ���
//{
//	//"abcdsfas";					//˫���������Ϊ�ַ���
//	char arr1[] = "abc";			//"abc"---'a','b','c','\0'
//	printf("%s\n", arr1);			//'\0'��ʾ�ַ����Ľ�����־
//	char arr2[] = { 'a','b','c' };	//���û��0Ϊ�������ͻ��������
//	printf("%s\n", arr2);
//	char arr3[] = { 'a','b','c',0 };//��������ǡ�\0��Ҳ������0������
//	printf("%s\n", arr3);
//	char arr4[] = { 'a','b','c','\0' };
//	printf("%s\n", arr4);
//	return 0;						//CTRL+f5���Կ�
//}				//\0��ת���ַ�		//\0���ַ����Ľ�����־


//int main()//strlen,�ַ������ȼ���
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	char arr3[] = { 'a', 'b', 'c' ,'\0'};
//	printf("%d\n", strlen(arr1));	//strlen- string lenght - �����ַ�������
//	printf("%d\n", strlen(arr2));	//��ӡ���������ֵ��������������3
//	printf("%d\n", strlen(arr3));
//	return 0;					
//}


//int main()	//ת���ַ�
//{
	//printf("abc\n");
	//printf("abc");
	//printf("abc\n");				//"\n"����˼�ǻ���
	//printf("���\t���");		//"\t"ˮƽ�Ʊ��
	//printf("\n");
	//printf("���t���");
	//printf("(are you ok??)\n");		
	//printf("likai\\");			//"\\"���һ��б��
	//printf("%c\n",'\'');			//"\'"��ӡ��
	//printf("%s\n", "\"");			//"\""��ӡ"
	//return 0;
//}



//int main()	//ת���ַ�  strlen ���ȼ���
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));//13
//	printf("c:\test\32\test.c\132");	//\32--32������8��������
//	printf("%c\n", '\x61');				//61��Ϊ8���ƴ�����Ǹ�ʮ���������������ASC��������ʾ��ֵ
//	return 0;//32=3*8^1+2*8^0=26    132=1*8^2+3*8^1+2*8^0=90
//}



//int main()  //ѭ�����
//{	
//	int input = 0;
//	printf("��Ҫ������");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("����Ҫ�ú�ѧϰ\n���õ��ģ�T�������\n");
//	else
//		printf("��T����Զ�����ȥ\n");
//	return 0;
//}


//int main()	//whileѭ��
//{
//	int line = 0;
//	int input = 0;
//	printf("���뿼����\n");
//	
//		printf("�Ǿͺú�ѧϰ��\n");
//		while (line < 10) {
//			printf("ѧϰѧϰ��%d\n", line);
//			line++;
//		}
//		if (line >= 10)
//			printf("T������ģ�����");
//	
//
//	return 0;
//}


//add(int x, int y)	//���������ûд�꣬���޷�����
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


//int main()		//����Ķ����ʹ��
//{
//		//int arr[10];	//����һ�����10���������ֵ�����
//		//char arrch[20];	//����һ�����20���ַ�������
//		//float arr2[5];	//����һ�����5�������͵�����
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//��߶�Ӧ���±�0123456789
//	//printf("%d\n", arr[9]);		//��ӡ�±�Ϊ9����
//	//ȫ����ӡ��ô�죿
//	int i = 0;
//	while (i <  10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}


//int main()	//���������
//{
//	int a = 5 / 2;		//"/"����
//	printf("%d\n",a);
//	int b = 5 % 2;
//	printf("%d\n", b);	//"%"ȡģ
//	return 0; 
//}
////2:57:22


//int main()		//<<���ƣ�>>���ƣ�λ�Ʋ�����
//{				//int���͵��ڴ���4���ֽڣ�32��bitλ
//	int a = 10;	//a=1���ڴ��ʾ��00000000000000000000000000000001	
//	a << 1;
//	printf("%d\n", a );		//��ʱ��ӡ��������1����Ϊa<<1,û�б���
//	int b = a << 1;			//��ʱ��Ϊa������һλ���ͱ����ʮ���Ƶ�2
//	printf("%d\n", b);		//a<<2�Ļ�����ʱa�ͱ����ʮ���Ƶ�4
//	return 0;
//}

//int main()		//λ����	&��λ�룬|��λ��^��λ���
//{
//	int a = 3;		  //3��2����011
//	int b = 5;		  //5��2����101
//	int c = a & b;
//	printf("%d\n", c);//1��2����001   ��ͬΪ0��&��λ�룩
//	int d = a | b;
//	printf("%d\n", d);//7��2����111   ��1Ϊ1��|��λ��
//	int e = a ^ b;
//	printf("%d\n", e);//6��2����110	��ͬΪ1��^��λ���
//	return 0;
//}


//int main()	//��ֵ
//{	
//	int a = 20;		//���涼�Ǹ��ϸ�ֵ��+= -= *=��
//	a = a + 10;		a += 10;//���ֱ�ʾ����һ��
//	a = a - 10;		a -= 10;//���ֱ�ʾ����һ��
//	a = a & 2;		a &= 2;	//���ֱ�ʾ����һ��
//	return 0;
//}


//int main()		//��Ŀ������
//{
//	int a = 5;
//	int b = 7;
//	a + b;		//+��˫Ŀ��������������ֵ���
//	printf("%d\n", a);
//	printf("%d\n", !a);//!�ǵ�Ŀ����������a��ٽ��������ٱ���棬�����ɼ�
//	int a = -2;//-��Ŀ����������2���-2
//	return 0;
//}

//int main()		//sizeof ������Ǳ���/������ռ�ռ��С����λ���ֽ�	
//{
//	int a = 4;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof int);�޷�ʡ�ԣ���
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//10*sizeof[int]=40
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[10]);//arr�Ŀռ��С����ÿ��Ԫ�صĴ�С
//	printf("%d\n", sz);
//	return 0;
//}
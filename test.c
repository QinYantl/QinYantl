#include <stdio.h>				// ʹ��stdio.h����Ķ�������Ҫ�������
//��ӡ����printf				//stdio=std��׼  stabdard input output ��׼����/���
int main	()					//������-���������-main�������ҽ���һ��
{								//int�����͵���˼
								//mainǰ���int��ʾmain�������÷���һ������ֵ
								//void main �������ѹ�ʱ��д��
								//���￪ʼ��������
	printf("hello world\n");	 //��Ļ�ϴ�ӡ-print function =frintf-��ӡ����
	printf("hello world\n");	//printfʹ�ø�ʽ��peintf("��Ҫ��ӡ������\n");
	printf("hello world\n");	//printf�ǿ⺯����c���Ա����ṩ�����ǵĺ���
	printf("hello world\n"); 
	printf("��� world\n");	//����Ļ��������world
	return 0;		//����0//
}


//������ʹ��
// char		char		�ַ���������
//%d		short		������ =short int
//%d		int			����
//%d		long		������
//%d		long long	����������
//%f		float		�����ȸ�����
//		double		˫���ȸ����� 
//%p					�Ե�ַ��ʽ��ӡ
//%o					��ӡʮ�����Ƶ�����
//int	main()
//{
//	char ch = 'A';//�ڴ�
//	printf("%c\n",ch);		//%c--��ӡ�ַ���ʽ������
//	int age = 20;
//	printf("%d\n", age);		//%d--��ӡ����ʮ��������
//	long num = 100;			
//	printf("%d\n", num);		//��ӡ������
//	float f = 0.98;			//��ӡ������
//	printf("%f\n", f);
//	double d = 3.1415;		//��ӡ˫���ȸ�����
//	printf("%lf\n", d);
//		return	0;
//}


////������ռ���ڴ��С sizeof����
// int main()
//{				//sizeof ���Ǻ����������������
				//sizeof ���� �������ͣ���ĳһ����ռ�ڴ� ��С ���ֽ�����			
	//printf("%d\n", sizeof(char));		//��ռ�ڴ� 1
	//printf("%d\n", sizeof(int));		//��ռ�ڴ� 4
	//printf("%d\n", sizeof(short));	//��ռ�ڴ� 2
	//printf("%d\n", sizeof(long));		//��ռ�ڴ� 4/8
	//printf("%d\n", sizeof(long long));//��ռ�ڴ� 8
	//printf("%d\n", sizeof(float));	//��ռ�ڴ� 4
	//printf("%d\n", sizeof(double));	//��ռ�ڴ� 8
	//return 0;
				//�ұߵ����ִ����ֽ�
				//������е���С��λ��bit��ֻ������һ��������λ 1/0��
				//byte��1�ֽ� 8��bitλ�� 	 	 	 	
				//kb��1024��byte��
				//mb��1024��kb��
				//gb��1024��mb��
				//tb��1024��gb��	 
				//pb��1024��tb��
//}


////�ֲ�������ȫ�ֱ���
// int num2 = 21;				//ȫ�ֱ�����������{}֮��ı���
//int main()
//{
//	short age = 25;			//���ڴ�����2���ֽ�=16��bit�����20
//	float weight = 71.3f;		//���ڴ�����4���ֽ�=32��bit�����71.3
//	int num1 = 10;			//age/weight/num1,Ϊ�ֲ�������������{}֮��
//	printf("%d\n",age);		//�ֲ�������ȫ�ֱ��������־�����Ҫ��ͬ
//	printf("%f\n", weight);	//�ֲ�������ȫ�ֱ�����������ͬʱ���ֲ���������
//	printf("age=25\n");		//�ֲ�����ֻ����{}�ֲ���ʹ�ã�ȫ�ֱ�������������
//	return 0;
//}


//	//�������������ĺͣ�scanf���뺯��
//	int main()					
//	{
//	int num1 = 1;	
//	int num2 = 10;
//	int sum = 0;				//c���Թ涨������Ҫ�����ڴ�������ǰ��			
//	scanf_s("%d%d", &num1, &num2);//&ȡ��ַ����	 ��������ʹ�����뺯��scanf
//	sum = num1 + num2;			
//	printf("sum=%d\n", sum);
//		return 0;
//}


////�ֲ�������ȫ��ȫ�ֱ�����������
// int global = 2020;
//int main()
//{ {
//	}
//	printf("%d\n",global);	//����global�����������Ǹ�{}��ʱ���޷���ӡ��2020
//	return 0;				//�ֲ��������������Ǳ������ڵľֲ���Χ��{}���޷����ã�
//}							//ȫ�ֱ���������������������



////�������ں�extern����
// int main()
//{	
//	extern int g_val;			//extern�����ⲿ����ı���
//	printf("g_val=%d\n", g_val);//û������һ�ţ�����δ�����ı���
//	return 0;
//}

////��������
//int main()
//{
//	{	int val = 20220212;
//		printf("v=%d\n", val);	//��ȷ��������val
//	}
//		//printf("v=%d\n", val);	//����δ����val
//	return 0;//�ֲ��������������ڣ������������������ڿ�ʼ�����������������ڽ���
//			 //ȫ�ֶ�����������ڣ������������������	
//}


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//enum Day//星期
//{
//	Mon,//0
//	Tues,//1
//	Wed,//2
//	Thur,//3
//	Fri,//4
//	Sat,//5
//	Sun//6
//};
//
//enum Day//星期
//{
//	//枚举常量
//	Mon=1,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//
////#define Mon 1
////#define Tues 2
////....
//
//#define M 100
//
//int main()
//{
//	enum Day d = Fri;
//	int m = M;
//
//	/*printf("%d\n", Mon);
//	printf("%d\n", Tues);
//	printf("%d\n", Wed);
//	printf("%d\n", Thur);
//	printf("%d\n", Fri);
//	printf("%d\n", Sat);
//	printf("%d\n", Sun);*/
//	return 0;
//}
//

//struct Stu
//{
//	int a;
//	char c;
//};
//struct St
//{
//	int a;
//	char c;
//};
//
//union Un
//{
//	int a;//4
//	char c;//1
//};
//
//
////共用
//int main()
//{
//	union Un u;
//	u.a = 0x11223344;
//	u.c = 0x00;
//	//printf("%d\n", sizeof(u));//?
//
//	//printf("%p\n", &u);
//	//printf("%p\n", &(u.a));
//	//printf("%p\n", &(u.c));
//
//	return 0;
//}

//判断当前计算机的大小端存储

//1
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//int check_sys()
//{
//	union
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//返回1是小端，返回0是大端
//	return u.c;
//}
//int main()
//{
//	//int a = 1;//0x 00 00 00 01
//	//低-------> 高
//	//01 00 00 00 -- 小端
//	//00 00 00 01 -- 大端
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}
//

//union Un
//{
//	char arr[5];//5
//	int i;//4
//};
//
//union Un
//{
//	short arr[7];//14
//	int i;//4
//};
//
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//
//	return 0;
//}
//
//
//union Un
//{
//	char arr[5];
//	int i;//4
//};
//
//union Un1
//{
//	char c1;
//	char c2;
//	char c3;
//	char c4;
//	char c5;
//
//	int i;//4
//};


//int main()
//{
//	int a = 10;//4个字节
//	int arr[10];//40个字节
//
//	return 0;
//}


//100
//120
//20
#include <errno.h>
#include <string.h>
#include <stdlib.h>

//
//变长数组
//c99标准支持的变长数组
//int n = 0;
//scanf("%d", &n);
//int arr2[n];
//
//int main()
//{
//	int arr[10] = {0};
//	//动态内存开辟
//	int*p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//没有free
//	//并不是说内存空间就不回收了
//	//当程序退出的时候，系统会自动回收内存空间的
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	//动态内存开辟
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	
//	free(p);
//	p = NULL;
//
//	return 0;
//}



//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//....
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	//malloc
//	int* p = NULL;
//	free(p);
//
//	return 0;
//}

//开辟10个整型的空间
//int main()
//{
//	int*p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//打印
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	int*p = (int*)malloc(40);
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	//1 2 3 4 5 6 7 8 9 10
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//扩容
//	int* ptr = (int*)realloc(p, 8000);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	//使用
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//

//int main()
//{
//	realloc(NULL, 40);//malloc(40);
//	return 0;
//}





#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stddef.h>
//
//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//
//struct S2
//{
//	char c1;//1
//	char c2;//1
//	int i;//4
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	//struct S1 s1;
//	//struct S2 s2;
//
//	//printf("%d\n", sizeof(struct S1));//
//	//printf("%d\n", sizeof(struct S2));//
//	printf("%d\n", sizeof(struct S3));//
//	printf("%d\n", sizeof(struct S4));//
//
//
//	/*printf("%d\n", offsetof(struct S1, c1));
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));
//
//	printf("%d\n", offsetof(struct S2, c1));
//	printf("%d\n", offsetof(struct S2, c2));
//	printf("%d\n", offsetof(struct S2, i));*/
//
//	return 0;
//}

//#pragma once
//头文件中使用，功能是：防止头文件被多次引用
//
//#pragma pack(4)
//struct S
//{
//	int i;//4 4 4 0~3
//	//4
//	double d;//8 4 4 4~11
//};
//#pragma pack()
//
//#pragma pack(1)
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));//
//
//	return 0;
//}
//

//
//struct S
//{
//	int data[1000];
//	int num;
//};
//
//void print1(struct S ss)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", ss.data[i]);
//	}
//	printf("%d\n", ss.num);
//}
//
//void print2(const struct S* ps)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", ps->data[i]);
//	}
//	printf("%d\n", ps->num);
//}
//
//int main()
//{
//	struct S s = { {1,2,3}, 100 };
//	print1(s);  //传值调用
//	print2(&s); //传址调用
//
//	return 0;
//}

//
//struct A
//{
//	//4byte-32bit
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	//15
//	//4byte-32bit
//	int _d : 30;
//};
//
////
////47 bit
////6byte - 48bit
////8byte - 64bit
////
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//
//	return 0;
//}
//


struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(struct S));

	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;

	return 0;
}








#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//
//int main()
//{
//	//指针数组
//	int* arr[4];
//	char* ch[5];
//	int** p = arr;
//
//	//数组指针
//	int arr2[5];
//	int (*pa)[5] = &arr2;
//
//	char* arr3[6];
//	char* (*p3)[6] = &arr3;
//
//	//
//
//	return 0;
//}



//int test(const char* str)
//{
//	printf("test()\n");
//	return 0;
//}
//
//int main()
//{
//	//函数指针 - 也是一种指针，是指向函数的指针
//	//printf("%p\n", test);
//	//printf("%p\n", &test);
//	//int (* pf)(const char*) = test;
//	//(*pf)("abc");
//	////pf 和 test
//	//test("abc");
//	//pf("abc");
//
//	return 0;
//}
//

//typedef unsigned int uint;

//typedef void(* pf_t)(int) ;//把void(*)(int)类型重命名为pf_t
//
//int main()
//{
//	//( *( void (*)() )0 )();
//	void (* signal( int, void(*)(int) ) )(int);
//	
//	pf_t signal(int, pf_t);
//	return 0;
//}
//

//函数指针的用途

//写一个计算器
//加法、减法、乘法、除法

//
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("****   1. add   2. sub  *****\n");
//	printf("****   3. mul   4. div  *****\n");
//	printf("****   0. exit          *****\n");
//	printf("*****************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
////
////计算
////回调函数
////
//
//void calc(int (*pf)(int , int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	printf("请输入2个操作数:>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//


//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//int main()
//{
//	int (*pf)(int, int) = Add;//pf是函数指针
//	int (*arr[4])(int, int) = { Add, Sub, Mul, Div };//arr就是函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = arr[i](8, 4);
//		printf("%d \n", ret);
//	}
//
//	return 0;
//}
//



//x&y
//x^y
//x|y
//x&&y
//x||y
//x>>y
//x<<y
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("****   1. add   2. sub  *****\n");
//	printf("****   3. mul   4. div  *****\n");
//	printf("****   0. exit          *****\n");
//	printf("*****************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	//函数指针的数组
//	//转移表
//	int (*pfArr[])(int, int) = {0, Add, Sub, Mul,  Div};
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//
//	} while (input);
//
//	return 0;
//}

//
//
//int main()
//{
//	//函数指针数组
//	int (*pfArr[])(int, int) = { 0, Add, Sub, Mul,  Div };
//
//	//指向【函数指针数组】的指针
//	int (*(*ppfArr)[5])(int, int) = &pfArr;
//
//	return 0;
//}
//

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设数组是排好序
//		//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}

//
//qsort -这个函数可以排序任意类型的数据
//

//void qsort(void* base,//你要排序的数据的起始位置
//	       size_t num,//待排序的数据元素的个数
//	       size_t width,//待排序的数据元素的大小（单位是字节）
//	       int(* cmp)(const void* e1, const void* e2)//函数指针-比较函数
//          );

//__cdecl - 函数调用约定

#include <stdlib.h>

//比较2个整型元素
//e1指向一个整数
//e2指向另外一个整数

int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}

void test1()
{
	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	//0 1 2 3 4 5 6 7 8 9
	//把数组排成升序
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr, sz);

	qsort(arr, sz, sizeof(arr[0]), cmp_int);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

struct Stu
{
	char name[20];
	int age;
};

void Swap(char*buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void*base, int sz, int width, int(*cmp)(const void*e1, const void*e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//假设数组是排好序
		//一趟冒泡排序的过程
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base+j*width, (char*)base+(j+1)*width)>0)
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

//abbdef
//abbqwerttt
//
int cmp_stu_by_name(const void* e1, const void* e2)
{
	//strcmp --> >0 ==0 <0
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void test2()
{
	//测试使用qsort来排序结构数据
	struct Stu s[] = { {"zhangsan", 15}, {"lisi", 30}, {"wangwu", 25} };
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}
//
void test3()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//0 1 2 3 4 5 6 7 8 9
	//把数组排成升序
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr, sz);

	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void test4()
{
	//测试使用qsort来排序结构数据
	struct Stu s[] = { {"zhangsan", 15}, {"lisi", 30}, {"wangwu", 25} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}

int main()
{
	//test1();
	//test2();
	//test3();
	test4();
	return 0;
}

//int main()
//{
//	int a = 10;
//	//char* pa = &a;//int*
//	void* pv = &a;//void*是无具体类型的指针，可以接受任意类型的地址
//	//void*是无具体类型的指针，所以不能解引用操作，也不能+-整数
//	//
//	return 0;
//}
//
















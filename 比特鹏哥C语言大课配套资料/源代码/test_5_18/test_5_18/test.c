#define _CRT_SECURE_NO_WARNINGS
#include <assert.h>
#include <stdio.h>

//求字符串长度的

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hello bit";
//	int len = my_strlen(arr);//char*
//	printf("%d\n", len);
//
//	return 0;
//}

//
//编程常见的错误
//1. 编译型错误(语法错误)
//2. 链接型错误(出现在链接期间) - 找不到符号（1. 不存在，2. 写错了）
//3. 运行时错误（最难受，调试来解决运行时错误）
//

//int ADD(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 10;
//
//	int c = Add(a, b);
//	
//	printf("%d\n", c);
//
//	return 0;
//}


//
//ctrl+f
//
//
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (scanf("%d %d %d", &a, &b, &c) == 3)
//    {
//        //判断
//        if ((a + b > c) && (a + c > b) && (b + c > a))
//        {
//            if (a == b && b == c)//等边
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else if ((a == b && b != c) || (a == c && c != b) || (b == c && b != a))//等腰
//            {
//                printf("Isosceles triangle!\n");
//            }
//            else//普通
//            {
//                printf("Ordinary triangle!\n");
//            }
//        }
//        else
//        {
//            printf("Not a triangle!\n");
//        }
//    }
//
//    return 0;
//}
//
//
//

//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
//
//	return 0;
//}
//


//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//
//    return 0;
//}
//


//写一个函数打印arr数组的内容，不使用数组下标，使用指针。


//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}


//int main()
//{
//	char arr[10] = { 0 };
//	//scanf("%s", arr);
//	gets(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}
//

//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//2
//2*10+2=22
//22*10+2 = 222

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);//2 5
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}
//


//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#include <math.h>
//
//int is_narcissistic_number(int i)
//{
//	//判断i是否为“水仙花数”
//		//1234
//		//1. 计算i是几位数 -> n
//	int n = 1;//任何一个数至少是一位数
//	int tmp = i;
//	int sum = 0;
//	while (tmp / 10)
//	{
//		n++;
//		tmp /= 10;
//	}
//	//2. 得到i每一位，计算他的n次方之和
//	tmp = i;
//	while (tmp)
//	{
//		sum += pow(tmp % 10, n);
//		tmp /= 10;
//	}
//	return sum == i;
//
//	/*if (sum == i)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}*/
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		if (is_narcissistic_number(i))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}
//
//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//上
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印一行
//		//空格
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下
//	for (i = 0; i < line-1; i++)
//	{
//		//打印一行
//		//空格
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j <2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
//
//#include < stdio.h >
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n", __________);
//	return 0;
//}
//
//
//struct stu
//{
//    int num;
//    char name[10];
//    int age;
//};
//void fun(struct stu* p)
//{
//    printf("%s\n", (*p).name);
//    return;
//}
//int main()
//{
//    struct stu students[3] = { {9801,"zhang",20},
//                               {9802,"wang",19},
//                               {9803,"zhao",18}
//    };
//    fun(students + 1);
//    return 0;
//}
//

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	//int total = money;
//	//int empty = money;
//
//	////置换
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//
//	if (money > 0)
//		printf("%d\n", 2 * money - 1);
//	else
//		printf("%d\n", 0);
//
//	return 0;
//}
//









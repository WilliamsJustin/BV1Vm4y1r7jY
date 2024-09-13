#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
//
//void* my_memcpy(void* dest, const void* src, size_t num)//1
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//
//	return ret;
//}
//
////memcpy函数是不用来处理重叠的内存之间的数据拷贝的
////使用memmove函数来实现，重叠内存之间的数据拷贝
//
//void test1()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	my_memcpy((char*)arr2, (char*)arr1, 20);
//	int i = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//}
////
////60分，100分
////
//void test2()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//my_memcpy(arr1+2, arr1, 20);
//	//1 2 1 2 3 4 5 8 9 10
//	//memmove(arr1+2, arr1, 20);
//	//memcpy(arr1 + 2, arr1, 20);
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//}
//
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//
//	if (dest < src)
//	{
//		//前->后
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//后->前
//		while (num--)
//		{
//			*((char*)dest+num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//void test3()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr1, arr1+2, 20);
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//}
//
//int main()
//{
//	test3();
//	return 0;
//}
//


//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
//	int arr2[] = { 1,3,2 };    //01 00 00 00 03 00 00 00 02 00 00 00
//	int ret = memcmp(arr1, arr2, 12);
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//
//int main()
//{
//	//char arr[] = "hello bit";
//	//memset(arr, 'x', 5);
//	//memset(arr+6, 'x', 3);
//	//printf("%s\n", arr);
//	int arr[10] = { 0 };
//	//把arr初始化为全1
//	memset(arr, 1, 40);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}
//
//
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    int input = 0;
//    int sum = 0;
//    //输入
//    scanf("%d", &input);//123
//    int i = 0;
//    while (input)
//    {
//        int bit = input % 10;
//        if (bit % 2 == 1)
//        {
//            bit = 1;
//        }
//        else
//        {
//            bit = 0;
//        }
//        sum += bit * pow(10, i++);
//        input /= 10;
//    }
//    printf("%d\n", sum);
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (i + j < n - 1)
//                {
//                    printf("  ");
//                }
//                else
//                {
//                    printf("* ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//    //输入
//    double price = 0.0;
//    int m = 0;
//    int d = 0;
//    int flag = 0;
//    scanf("%lf %d %d %d", &price, &m, &d, &flag);
//    //计算
//    if (m == 11 && d == 11)
//    {
//        price = price * 0.7 - flag * 50;
//    }
//    else if (m == 12 && d == 12)
//    {
//        price = price * 0.8 - flag * 50;
//    }
//
//    //输出
//    if (price < 0.0)
//        printf("%.2lf\n", 0);
//    else
//        printf("%.2lf\n", price);
//
//    return 0;
//}

//
//int main()
//{
//	//char  -128~127
//	//unsigned char 0~255
//	unsigned char a = 200;
//	//00000000000000000000000011001000
//	//11001000 -a 截断
//	unsigned char b = 100;
//	//00000000000000000000000001100100
//	//01100100 - b 截断
//	unsigned char c = 0;
//
//	c = a + b;
//	//整型提升
//	//00000000000000000000000011001000
//	//00000000000000000000000001100100
//	//00000000000000000000000100101100
//	//00101100-c 截断
//	//00000000000000000000000000101100
//	//
//	printf("%d %d", a + b, c);
//	//300 44
//	return 0;
//}
//
//
//int main()
//{
//	unsigned int a = 0x1234; 
//	unsigned char b = *(unsigned char*)&a;
//	printf("%x\n", b);
//
//	return 0;
//}
//

//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1))
//						{
//							//1 2 3 4 5
//							if(a+b+c+d+e == 15 && a*b*c*d*e==120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		//判断
//		if ((killer != 'a') + (killer == 'c')
//			+ (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//
//	return 0;
//}
//

//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//














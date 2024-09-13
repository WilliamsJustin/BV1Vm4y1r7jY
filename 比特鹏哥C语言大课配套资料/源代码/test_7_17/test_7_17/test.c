#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//

#include <stdio.h>
#include <windows.h>
//VS2013 WIN10环境测试
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//先将代码放在输出缓冲区
//	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
//	//注：fflush 在高版本的VS上不能使用了
//	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//	Sleep(10000);
//	fclose(pf);
//	//注：fclose在关闭文件的时候，也会刷新缓冲区
//	pf = NULL;
//	return 0;
//}
//


//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//extern int Add(int x, int y);

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}
//
//


//int main()
//{
//	int i = 0;
//	FILE* pf = fopen("log.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return EXIT_FAILURE;
//		//EXIT_SUCCESS;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf, "file:%s line=%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", __STDC__);
//	return 0;
//}

//dev c++

//oj 
//gcc  clang
//

//#define MAX 1000
//#define STR "hello bit"
//#define print printf("hehe\n")
//
//
//int main()
//{
//	int m = 1000;;
//	printf("%d\n", 1000);
//	printf("%s\n", STR);
//	print;
//	return 0;
//}

//
//int main()
//{
//	switch ()
//	{
//	case 1:
//		break;
//	case 2:
//		break;
//
//	}
//	return 0;
//}
//
//
//#define CASE break;case 
//
//int main()
//{
//	switch ()
//	{
//	case 1:
//	CASE 2 :
//	CASE 3 :
//	CASE 4 :
//	}
//	return 0;
//}
//
//
//#define DEBUG_PRINT printf("file:%s\tline:%d\t date:%s\ttime:%s\n" ,\
//__FILE__,\
//__LINE__ ,\ 
//__DATE__,__TIME__ ) 



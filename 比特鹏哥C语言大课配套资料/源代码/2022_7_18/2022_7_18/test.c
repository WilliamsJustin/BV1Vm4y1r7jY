#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//#define SQUARE(X) ((X)*(X))
//
//int main()
//{
//	int r = SQUARE(5+1);
//	//int r = ((5 + 1) * (5 + 1));
//	//int r = 5 + 1 * 5 + 1;//11
//
//	printf("%d\n", r);
//
//	return 0;
//}


//#define DOUBLE(X) ((X)+(X))
//
//int main()
//{
//	int r = 10*DOUBLE(3);
//	//int r = 10 * (3) + (3);//33
//	//int r = (3 * 2) + (3 * 2);
//
//	printf("%d\n", r);
//
//	return 0;
//}

//#define M 100
//#define DOUBLE(X) ((X)+(X))
//int main()
//{
//	//"M";
//	//"DOUBLE(3)";
//	DOUBLE(100+2);
//	((100 + 2)+(100 + 2));
//	return 0;
//}
//

//void print(int n)
//{
//	printf("the value of n %d\n", n);
//}

//#define PRINT(N) printf("the value of "#N" is %d\n", N)
//#define PRINT(N, FORMAT) printf("the value of "#N" is "FORMAT"\n", N)
//int main()
//{
//	/*printf("hello world\n");
//	printf("hello ""world\n");*/
//
//	int a = 10;
//	PRINT(a, "%d");
//	//PRINT(a);
//	//printf("the value of ""a"" is %d\n", a);
//	//print(a);
//	//printf("the value of a is %d\n", a);
//
//	float f = 3.14f;
//	PRINT(f, "%lf");
//	//int b = 20;
//	//PRINT(b);
//	//printf("the value of ""b"" is %d\n", b);
//	//print(b);
//	//printf("the value of b is %d\n", b);
//
//
//	return 0;
//}


//#define CAT(Class, Num) Class##Num
//
//int main()
//{
//	int Class106 = 100;
//	printf("%d\n", CAT(Class, 106));
//	//printf("%d\n", Class106);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = a + 1;
//
//	int b = ++a;
//
//	return 0;
//}

//#define MAX(x,y) ((x)>(y)?(x):(y))


//int main()
//{
//	//int m = MAX(2, 3);
//	int a = 5;//6 7
//	int b = 4;//5
//	int m = MAX(a++, b++);
//	//int m = ((a++) > (b++) ? (a++) : (b++));
//	   //6   //5    >  4    ? 6
//	printf("m=%d ", m);//6
//	printf("a=%d b=%d\n", a, b);//7 5
//	return 0;
//}


//宏和函数

//宏
//#define MAX(x, y) ((x)>(y)?(x):(y))
//
////函数
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	//int m = MAX(2, 3);
//	int m = ((2) > (3) ? (2) : (3));
//
//	int m = Max(2, 3);
//
//	return 0;
//}
//

//#define MALLOC(num, type) (type*)malloc((num)*sizeof(type))
//
//int main()
//{
//	//malloc(40);
//	//malloc(10, int);
//	int*p = MALLOC(10, int);
//
//	int* p = (int*)malloc((10) * sizeof(int));
//
//	return 0;
//}
//MAX
//Max
//
//#define M 100
//
//int main()
//{
//	printf("%d\n", M);
//#undef M
//	printf("%d\n", M);
//
//	return 0;
//}

#include <stdio.h>
//#define __DEBUG__
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#ifdef __DEBUG__
//		printf("%d\n", arr[i]);//为了观察数组是否赋值成功。
//#endif //__DEBUG__
//	}
//	return 0;
//}

#if 0
int main()
{
	printf("hehe\n");
	return 0;
}
#endif

//#define M 6
//
//int main()
//{
//#if M<5
//	printf("hehe\n");
//#elif M==5
//	printf("haha\n");
//#else 
//	printf("heihei\n");
//#endif
//
//	return 0;
//}

//#define MAX 100
//
//int main()
//{
//#ifndef MAX
//	printf("max\n");
//#endif
//
//	return 0;
//}

//int main()
//{
//#if !defined(MAX)
//	printf("max\n");
//#endif
//
//	return 0;
//}
//
//#include <stddef.h>
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//#define OFFSETOF(type, m_name)    (size_t)&(((type*)0)->m_name)
//
//int main()
//{
//	struct S s = {0};
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, i));
//	printf("%d\n", OFFSETOF(struct S, c2));
//
//	//printf("%d\n", offsetof(struct S, c1));
//	//printf("%d\n", offsetof(struct S, i));
//	//printf("%d\n", offsetof(struct S, c2));
//
//	return 0;
//}
//
//

#include <stdio.h>

int main()
{
    int n = 0;
    while (scanf("%d", &n) == 1)
    {
        //打印图案
        //上n行
        int i = 0;
        for (i = 0; i < n; i++)
        {
            //空格
            int j = 0;
            for (j = 0; j < n - i; j++)
            {
                printf("  ");
            }
            //*
            for (j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        //下n+1行
        for (i = 0; i < n + 1; i++)
        {
            //空格
            int j = 0;
            for (j = 0; j < i; j++)
            {
                printf("  ");
            }
            //*
            for (j = 0; j < n + 1 - i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}


#include <stdio.h>

int main()
{
    int score = 0;
    int n = 0;
    int max = 0;
    int min = 100;
    int sum = 0;
    while (scanf("%d", &score) == 1)
    {
        n++;
        if (score > max)
            max = score;
        if (score < min)
            min = score;
        sum += score;

        if (n == 7)
        {
            printf("%.2lf\n", (sum - max - min) / 5.0);
            n = 0;
            max = 0;
            min = 100;
            sum = 0;
        }
    }
    return 0;
}


















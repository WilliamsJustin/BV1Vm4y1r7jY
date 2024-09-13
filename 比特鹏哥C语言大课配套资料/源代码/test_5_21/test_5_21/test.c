#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int cnt = 0;
//int fib(int n) {
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//void main()
//{
//	fib(8);
//	printf("%d", cnt);
//}
//
//


//int x = 1;
//do {
//    printf("%2d\n", x++);//1 x=2
//} while (x--);//x=1



#include <stdio.h>
#include <stdlib.h>

//int a = 1;
//void test() {
//    int a = 2;
//    a += 1;
//}
//
//int main() {
//    test();
//    printf("%d\n", a);
//    return 0;
//}

//int
//注释是程序员看的
//编译器怎么看到注释呢？在编译器编译的时候，直接就删除了
//

//
//for (x = 0, y = 0; (y = 123) && (x < 4); x++)
//	;


#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    //计算a和b的最小公倍数
    int m = (a > b ? a : b);
    while (1)
    {
        if (m % a == 0 && m % b == 0)
        {
            break;
        }
        m++;
    }
    //打印
    printf("%d\n", m);
    return 0;
}

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    //计算a和b的最小公倍数
    int i = 1;
    while (a * i % b)
    {
        i++;
    }
    //打印
    printf("%d\n", i * a);

    return 0;
}

#include <stdio.h>
#include <assert.h>

void reverse(char* left, char* right)
{
    assert(left);
    assert(right);

    while (left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

int main()
{
    char arr[101] = { 0 };
    //输入
    gets(arr);//I like beijing.
    //逆置
    int len = strlen(arr);
    //1. 逆序整个字符串
    reverse(arr, arr + len - 1);
    //2. 逆序每个单词
    char* start = arr;

    while (*start)
    {
        char* end = start;
        while (*end != ' ' && *end != '\0')
        {
            end++;
        }
        reverse(start, end - 1);
        if (*end != '\0')
            end++;
        start = end;
    }

    //输出
    printf("%s\n", arr);

    return 0;
}








#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>


//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);//休眠1000毫秒
//	}
//
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//
//	//arr[i] --> char   -128~127
//	//-1 -2 -3 -4 ... -1000
//	//-1 -2 ... -128 127 126 125 .. 3 2 1 0 -1 ...
//	//128+127 = 255
//	printf("%d", strlen(a));//255
//	//strlen 是求字符串的长度，关注的是字符串中'\0'（数字0）之前出现多少字符
//
//	return 0;
//}

#include <stdio.h>
unsigned char i = 0;
//unsigned char 类型的取值范围是0~255
//
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}
//
#include <assert.h>
#include <string.h>
//
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	//int len = strlen("abcdef");
//	//printf("%d\n", len);
//	//size_t -> unsigned int
//	//
//	if ((int)strlen("abc") - (int)strlen("abcdef")>0)
//		printf(">\n");
//	else
//		printf("<\n");
//
//	return 0;
//}


//
//int main()
//{
//	int n = 9;
//	//[00000000000000000000000000001001]
//	//0 00000000 00000000000000000001001
//	//E=-126
//	//M=0.00000000000000000001001
//	//+ 0.00000000000000000001001* 2^-126
//	//
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);//9
//	printf("*pFloat的值为：%f\n", *pFloat);//0.000000
//
//	*pFloat = 9.0;
//
//	//1001.0
//	//1.001*2^3
//	//S=0 E=3 M=1.001
//	//[01000001000100000000000000000000]
//	//
//	printf("num的值为：%d\n", n);//
//	printf("*pFloat的值为：%f\n", *pFloat);//9.0
//	return 0;
//}
//



//int main()
//{
//	float f = 5.5f;
//	//5.5
//	//101.1
//	//1.011*2^2
//	//s=0 m=1.011 e=2
//	//0 10000001 01100000000000000000000
// //(-1)^0 * 1.01100000000000000000000 * 2^2
//	//0x40 b0 00 00
//	//2+127 =129
//	return 0;
//}

//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//
//void move_odd_even(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<right)
//	{
//		//从左向右找一个偶数，停下来
//		while ((left<right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//从右向左找一个奇数，停下来
//		while (((left < right)) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//交换奇数和偶数
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	//输入
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		//scanf("%d", &arr[i]);
//		scanf("%d", arr+i);
//	}
//	//1 2 3 4 5 6 7 8 9 10
//	//调整
//	move_odd_even(arr, sz);
//
//	//输出
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//


#include <stdio.h>
/*
int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int arr1[n];//c99 - 变长数组
    int arr2[m];
    //输入n个整数
    int i= 0;
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    //输入m个整数
    for(i=0; i<m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    //合并打印
    int j = 0;
    int k = 0;
    while(j<n && k<m)
    {
        if(arr1[j] < arr2[k])
        {
            printf("%d ", arr1[j]);
            j++;
        }
        else
        {
            printf("%d ", arr2[k]);
            k++;
        }
    }
    if(j<n)
    {
        for(; j<n; j++)
        {
            printf("%d ", arr1[j]);
        }
    }
    else
    {
        for(; k<m; k++)
        {
            printf("%d ", arr2[k]);
        }
    }

    return 0;
}
*/



#include <stdio.h>

int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int arr1[n];//c99 - 变长数组
    int arr2[m];
    int arr3[m + n];
    //输入n个整数
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    //输入m个整数
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    //合并打印
    int j = 0;
    int k = 0;
    int r = 0;
    while (j < n && k < m)
    {
        if (arr1[j] < arr2[k])
        {
            arr3[r++] = arr1[j];
            j++;
        }
        else
        {
            arr3[r++] = arr2[k];
            k++;
        }
    }
    if (j < n)
    {
        for (; j < n; j++)
        {
            arr3[r++] = arr1[j];
        }
    }
    else
    {
        for (; k < m; k++)
        {
            arr3[r++] = arr2[k];
        }
    }
    //打印
    for (i = 0; i < m + n; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}





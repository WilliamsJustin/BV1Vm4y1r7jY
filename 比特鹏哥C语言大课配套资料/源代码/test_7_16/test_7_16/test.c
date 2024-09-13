#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//struct S
//{
//	int n;
//	int arr[];//柔性数组成员
//};
//
//int main()
//{
//	//int sz = sizeof(struct S);
//	//printf("%d\n", sz);
//	//struct S s;//4
//
//	//柔性数组的使用
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 40);
//	if (ps == NULL)
//	{
//		//....
//		return 1;
//	}
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S)+80);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//		ptr = NULL;
//	}
//	//...
//	//释放
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}


struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S*ps = (struct S*)malloc(sizeof(struct S));
	if (ps == NULL)
	{
		return 1;
	}
	ps->n = 100;
	ps->arr = (int*)malloc(40);
	if (ps->arr == NULL)
	{
		//....
		return 1;
	}
	//使用
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}

	//扩容
	int*ptr = (int*)realloc(ps->arr, 80);
	if (ptr == NULL)
	{
		return 1;
	}
	else
	{  
		ps->arr = ptr;//补充：如果扩容成功，这里要讲ptr的值赋值给ps->arr，空间依然由ps->arr维护
	}
	//使用
	
	//释放
	free(ps->arr);
	free(ps);
	ps = NULL;

	return 0;
}



//FILE
#include <string.h>
#include <errno.h>
//
//int main()
//{
//	FILE* pf = fopen("C:\\Users\\zpeng\\Desktop\\test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//...
//	//读文件
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//写一个字符
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//写文件
//	char i = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, pf);
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//读字符
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读文件
//	//int ch = fgetc(pf);
//	//printf("%c\n", ch);
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//写一行数据
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	//写一行数据
//	fputs("hello bit\n", pf);
//	fputs("hello bit\n", pf);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//
//	//读一行数据
//	char arr[20];
//	fgets(arr, 20, pf);
//	
//	printf("%s\n", arr);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//
//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = {0};
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//
//	fscanf(pf, "%s %d %f", s.arr, &(s.age), &(s.score));
//	//printf("%s %d %f\n", s.arr, s.age, s.score);
//	fprintf(stdout, "%s %d %f\n", s.arr, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//
//int main()
//{
//	struct S s = { "zhangsan", 25, 50.5f };
//
//	FILE*pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//
//	fprintf(pf, "%s %d %f", s.arr, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//流
//FILE*
//
//printf
//scanf
//
//任何一个C程序，只要运行起来就会默认打开3个流：
//FILE* stdin - 标准输入流（键盘） 
//FILE* stdout - 标准输出流（屏幕）
//FILE* stderr - 标准错误流（屏幕）
//



//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};

//
//int main()
//{
//	struct S s = { 0 };
//	//以二进制的形式写到文件中
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//二进制的方式读
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f\n", s.arr, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { "zhangsan", 25, 50.5f };
//	//以二进制的形式写到文件中
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//二进制的方式写
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { "zhangsan", 20, 55.5f };
//	struct S tmp = { 0 };
//	char buf[100] = { 0 };
//	//把s中的格式化数据转化成字符串放到buf中
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.score);
//
//	//"zhangsan 20 55.500000";
//	printf("字符串：%s\n", buf);
//
//	//从字符串buf中获取一个格式化的数据到tmp中
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.score));
//	printf("格式化：%s %d %f\n", tmp.arr, tmp.age, tmp.score);
//	return 0;
//}
//


//读字符
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读文件
//	//定位文件指针
//	fseek(pf, 2, SEEK_SET);
//	int ch = fgetc(pf);//c
//	printf("%c\n", ch);
//	printf("%d\n", ftell(pf));//3
//
//	//fseek(pf, 2, SEEK_CUR);
//	fseek(pf, -1, SEEK_END);
//	ch = fgetc(pf);//f
//	printf("%c\n", ch);	
//	printf("%d\n", ftell(pf));//6
//
//	rewind(pf);
//	ch = fgetc(pf);//a
//	printf("%c\n", ch);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	
//
//	return 0;
//}

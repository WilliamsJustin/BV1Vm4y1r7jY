class Solution {
public:
    //str   指向了要修改的字符串
    //length 要修改的字符串的长度
    void replaceSpace(char* str, int length) {
        char* cur = str;
        int space_count = 0;
        while (*cur)
        {
            if (*cur == ' ')
                space_count++;
            cur++;
        }
        int end1 = length - 1;
        int end2 = length + space_count * 2 - 1;

        while (end1 != end2)
        {
            if (str[end1] != ' ')
            {
                str[end2--] = str[end1--];
            }
            else
            {
                end1--;
                str[end2--] = '0';
                str[end2--] = '2';
                str[end2--] = '%';
            }
        }
    }
};



#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int a = 0;
    int b = 1;
    int c = 0;

    while (1)
    {
        if (n == b)
        {
            printf("0\n");
            break;
        }
        else if (n < b)
        {
            if (abs(a - n) > abs(b - n))
            {
                printf("%d\n", abs(b - n));
            }
            else
            {
                printf("%d\n", abs(a - n));
            }
            break;
        }
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
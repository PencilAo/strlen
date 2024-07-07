#define _CRT_SECURE_NO_WARNINGS
//编写函数不允许创建临时变量，求字符串长度
//int my_strlen(char* str)//arr是一个数组，传过来的只是一个地址，所以要用指针变量
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        count++;//记录一共有多少个字符
//        str++;//找下一个字符
//    }
//    return count;
//}
//int main()
//{
//    char arr[] = "abcsadf";
//    int len = my_strlen(arr);
//    return 0;
//}
//递归求解
//int my_strlen(char* str)
//{
//    if (*str != '\0')
//    {
//        return 1 + my_strlen(str+1);
//    }
//    else
//        return 0;
//}
//int main()
//{
//    char arr[] = "adsf";
//    int len = my_strlen(arr);
//    printf("%d\n", len);
//    return 0;
//}
//int main()
//{
//    int n, i, j,a;
//    int b = -1;
//    int arr[] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//        int count = 0;
//        for (j = 0; j < n; j++)
//        {
//            if (arr[i] == arr[j])
//            {
//                count++;
//            }
//        }
//        if (count > b)
//        {
//            b = count;
//            a = arr[i];
//        }
//        if (count == b)
//        {
//            if (arr[i] < a)
//            {
//                a = arr[i];
//            }
//        }
//    }
//    printf("%d", a);
//    return 0;
//}
//int main()
//{
//    int n, i,a;
//    scanf("%d", &n);
//    int arr[10000];
//    int b[9500];
//    for (i = 0; i < 9500; i++)
//    {
//        b[i] = 0;
//    }
//    for (i = 0; i <= n; i++)
//    {
//        scanf("%d", &arr[i]);
//        b[arr[i]]++;
//    }
//    int max = b[0];
//    for (i = 0; i < 9500; i++)
//    {
//        if (b[i] > max)
//        {
//            max = b[i];
//            a = i;
//        }
//    }
//    printf("%d\n", a);
//    return 0;
//}
//int main()
//{
//    char arr[100];
//    int i = 0;
//    int j;
//    int max = -1;
//    int min = 100;
//    do
//    {
//        scanf("%s", &arr[i]);
//        i++;
//    } while (getchar() != '\n');
//    int n = strlen(arr);
//    for (i = 0; i < n; i++)
//    {
//        int count = 0;
//        for (j = 0; j < n; j++)
//        {
//            if (arr[i] == arr[j])
//            {
//                count++;
//            }
//        }
//        if (count > max)
//        {
//            max = count;
//        }
//        if (count < min)
//        {
//            min = count;
//        }
//    }
//    int b = max - min;
//    int c = 1;
//    for (i = 2; i <= b - 1; i++)
//    {
//        if (b % i == 0)
//        {
//            c = 0;
//            break;
//        }
//    }
//    if (c == 1 && b != 0 && b != 1)
//    {
//        printf("Lucky\n");
//        printf("%d\n", b);
//    }
//    else
//    {
//        printf("No Answer\n");
//        printf("0");
//    }
//    return 0;
//}
//int main()
//{
//    int arr[100000] = { 0 };
//    arr[0] = 7;
//    arr[1] = 11;
//    int n;
//    int i = 0;
//    do
//    {
//        scanf("%d\n", &n);
//        if (n == 1)
//        {
//            arr[n] = 11;
//        }
//        else
//        {
//            for (i = 2; i <= n; i++)
//            {
//                arr[i] = arr[i - 1] + arr[i - 2];
//            }
//        }
//    }while (n == 0);
//    return 0;
//}
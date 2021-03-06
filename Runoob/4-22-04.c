/* 
指针的算术运算 

可以对指针进行四种算术运算：++、--、+、-。

假设 ptr 是一个指向地址 1000 的整型指针，是一个 32 位的整数，让我们对该指针执行下列的算术运算：

ptr++

在执行完上述的运算之后，ptr 将指向位置 1004，因为 ptr 每增加一次，它都将指向下一个整数位置，即当前位置往后移 4 字节。

指针的每一次递增，它其实会指向下一个元素的存储单元。

指针的每一次递减，它都会指向前一个元素的存储单元。

指针在递增和递减时跳跃的字节数取决于指针所指向变量数据类型长度，比如 int 就是 4 个字节。
*/

#include <stdio.h>
const int MAX = 3;
int main()
{
    int arr[] = {10,
                 100,
                 200};

    int i, *ptr1, j, *ptr2, k, *ptr3; //指针中第一个元素的地址
    ptr1 = arr;                       //指针中的数组地址
    printf("%d\n", *ptr1);
    for (i = 0; i < MAX; i++)
    {
        printf("储存地址:arr[%d]=%p\n", i, ptr1);
        printf("储存值:arr[%d]=%d\n", i, *ptr1);
        ptr1++; //指向下一个位置
    }
    ptr2 = &arr[MAX - 1]; //指针中最后一个元素的地址
    for (j = MAX; j > 0; j--)
    {
        printf("储存地址:arr[%d]=%p\n", j - 1, ptr2);
        printf("储存值:arr[%d]=%d\n", j - 1, *ptr2);
        ptr2--;
    }

    // 指针可以用关系运算符进行比较，
    // 如 ==、<和>。如果 p1 和 p2 指向两个相关的变量，比如同一个数组中的不同元素，则可对 p1 和 p2 进行大小比较。 ptr3 = arr;
    k = 0;
    while (ptr3 <= &arr[MAX - 1])
    {
        printf("储存地址:arr[%d]=%p\n", k, ptr3);
        printf("储存值:arr[%d]=%d\n", k, *ptr3);
        ptr3++;
        k++;
    }
    return 0;
}
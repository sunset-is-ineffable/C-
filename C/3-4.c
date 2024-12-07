#include <stdio.h>
#include <stdlib.h>
int b[100], a[100], c[200];
int main()
{
    int n, m;
    // 输入第一个数组的长度
    printf("输入第一个数组的长度：\n");
    scanf("%d", &n);
    // 输入第一个数组的元素，采用降序输入
    printf("按降序依次输入第一个数组的 %d 个元素：\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // 输入第二个数组的长度
    printf("请输入第二个数组的长度：\n");
    scanf("%d", &m);
    // 输入第二个数组的元素，采用降序输入
    printf("请按降序依次输入第二个数组的 %d 个元素：\n", m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    int i = 0, j = 0, k = 0;
    // 比较两个数组当前位置元素大小，将较大的放入合并数组c
    while (i < n && j < m)
    {
        if (a[i] >= b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }
    // 将剩余的a数组元素放入合并数组c（如果有剩余的话）
    for (; i < n; i++)
    {
        c[k++] = a[i];
    }
    // 将剩余的b数组元素放入合并数组c（如果有剩余的话）
    for (; j < m; j++)
    {
        c[k++] = b[j];
    }
    // 输出合并后的数组
    printf("合并后的有序数组为：\n");
    for (int i = 0; i < m + n; i++)
    {
        if (i!= m + n - 1)
            printf("%d ", c[i]);
        else
            printf("%d", c[i]);
    }
    return 0;
}
#include <stdio.h>
int main() {
    int n, i, j;
    // 输入杨辉三角的行数
    printf("输入杨辉三角行数:");
    // 获取输入的行数，并存储到变量n中
    scanf("%d", &n);
    int a[n][n];
    // 外层循环控制杨辉三角的行数
    for (i = 0; i < n; i++)
        // 内层循环控制每行的元素个数，每行元素个数与行数相等
            for (j = 0; j <= i; j++)
                // 根据杨辉三角的规律来计算并赋值
                    // 如果是每行的开头（j == 0）或者结尾（j == i），元素值为1
                        // 否则，元素值等于上一行对应位置的两元素之和（a[i - 1][j - 1] + a[i - 1][j]）
                            a[i][j] = (j == 0 || j == i)? 1 : a[i - 1][j - 1] + a[i - 1][j];
    // 外层循环用于逐行输出杨辉三角
    for (i = 0; i < n; i++) {
        // 内层循环用于输出当前行的每个元素
        for (j = 0; j <= i; j++)
            printf("%d ", a[i][j]);
        // 每输出完一行后进行换行操作
        printf("\n");
    }
    return 0;
}
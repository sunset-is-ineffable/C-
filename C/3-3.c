#include <stdio.h>
#define MAX_SIZE 100 // 定义最大矩阵大小
int main() {
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], C[MAX_SIZE][MAX_SIZE];
    int n, m, p; // 分别代表矩阵A的行数，矩阵B的列数，以及矩阵C的行数和列数

    // 输入矩阵A的行数和列数
    printf("输入矩阵A的行数和列数（n m）: ");
    scanf("%d %d", &n, &m);
    // 输入矩阵A的元素
    printf("输入矩阵A的元素：\n");
    for (int i = 0; i < n; i++) { // 遍历矩阵A的每一行
        for (int k = 0; k < m; k++) { // 遍历矩阵A的每一列
            scanf("%d", &A[i][k]); // 读取矩阵A的元素
        }
    }
    // 输入矩阵B的行数和列数
    printf("请输入矩阵B的行数和列数（m p）: ");
    scanf("%d %d", &m, &p);
    // 输入矩阵B的元素
    printf("请输入矩阵B的元素：\n");
    for (int k = 0; k < m; k++) { // 遍历矩阵B的每一行
        for (int j = 0; j < p; j++) { // 遍历矩阵B的每一列
            scanf("%d", &B[k][j]); // 读取矩阵B的元素
        }
    }
    // 初始化矩阵C的所有元素为0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }
    // 计算矩阵C的元素
    for (int i = 0; i < n; i++) { // 遍历矩阵C的每一行
        for (int j = 0; j < p; j++) { // 遍历矩阵C的每一列
            for (int k = 0; k < m; k++) { // 遍历矩阵A的列数
                C[i][j] += A[i][k] * B[k][j]; // 计算矩阵C的元素
            }
        }
    }
    // 输出矩阵C
    printf("矩阵C的结果为：\n");
    for (int i = 0; i < n; i++) { // 遍历矩阵C的每一行
        for (int j = 0; j < p; j++) { // 遍历矩阵C的每一列
            printf("%d ", C[i][j]); // 输出矩阵C的元素
        }
        printf("\n"); // 每输出一行后换行
    }
    return 0;
}

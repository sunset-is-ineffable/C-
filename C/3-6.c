#include <stdio.h>
int main() {
    int arr[2][3][4];  // 定义一个三维数组
    int i, j, k;
    int count = 0;
    // 给三维数组元素赋值，简单按照顺序赋值，方便观察存储情况
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 4; k++) {
                arr[i][j][k] = count++;
            }
        }
    }
    // 输出三维数组各元素的地址，观察其连续性
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 4; k++) {
                printf("元素arr[%d][%d][%d]地址：%p\n", i, j, k, &arr[i][j][k]);
            }
        }
    }
    return 0;
}
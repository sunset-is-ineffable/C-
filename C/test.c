#include <stdio.h>

int main() {
    char upper_char;
    // 获取用户输入的大写字母
    scanf("%c", &upper_char);
    // 将大写字母转换为小写字母，在ASCII码中，小写字母比大写字母的ASCII值大32
    char lower_char = upper_char + 32;
    // 输出小写字母
    printf("%c\n", lower_char);

    return 0;
}
#include <stdio.h>
int main()

{
	int ji();
	int yuan();
	int jisuan();
    jisuan();
    printf("\n");

    ji();
    printf("\n");

    yuan();
	printf("\n");
    int  i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
            printf(" ");
        for (k = 1; k <= 2 * i - 1; k++)
            printf("*");
        printf("\n");

    }
}

int ji() {
	int i, j, l, ji;
	ji = 0;
	for (i = 0; i <= 20; i++) {
		for (j = 0; j <= 33; j++) {
			for (l = 0; l <= 300; l += 3) {
				if (((5 * i + 3 * j + l / 3) == 100) && (i + l + j == 100)) {
					printf("公鸡%d只 母鸡%d只 小鸡%d只\n", i, j, l);
					ji++;
				}


			}
		}

	}
	printf("共有%d种组合", ji);
	return 0;

}

int yuan() {
    int x, y, r;
    printf("请输入x");
    scanf_s("%d", &x);
    printf("请输入y");
    scanf_s("%d", &y);
    printf("请输入r");
    scanf_s("%d", &r);

    if ((x * x + y * y) == r * r)
        printf("M点在圆上");
    else if ((x * x + y * y) > r * r)
        printf("M点在圆外");
    else if ((x * x + y * y) < r * r)
        printf("M点在圆内");


    return 0;
}

int jisuan() {
    float x, y, z;
    char c;
    printf("请输入计算例如 5/8 \n");
    scanf_s("%f", &x);
    scanf_s("%c", &c, 1);
    scanf_s("%f", &y);
    switch (c) {
    case'+': z = x + y;
        printf("x+y=%.4f", z);
        break;
    case'-': z = x - y;
        printf("x-y=%.4f", z);
        break;
    case'*': z = x * y;
        printf("x*y=%.4f", z);
        break;
    case'/': z = x / y;
        if (y == 0)
            printf("除数不能为0");
        else

            printf("x/y=%.4f", z);
        break;

    default:
        printf("请输入正确的运算符");
        break;
    }
    return 0;
}
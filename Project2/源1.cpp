#include<stdio.h>

int Ji() {
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
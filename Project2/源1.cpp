#include<stdio.h>

int Ji() {
	int i, j, l, ji;
	ji = 0;
	for (i = 0; i <= 20; i++) {
		for (j = 0; j <= 33; j++) {
			for (l = 0; l <= 300; l += 3) {
				if (((5 * i + 3 * j + l / 3) == 100) && (i + l + j == 100)) {
					printf("����%dֻ ĸ��%dֻ С��%dֻ\n", i, j, l);
					ji++;
				}


			}
		}

	}
	printf("����%d�����", ji);
	return 0;

}
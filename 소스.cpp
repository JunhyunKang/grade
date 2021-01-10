#include <stdio.h>
#define DT 5
int sv(int score[], int size);
int main()
{
	int score[DT] = { 88, 96, 75, 81, 99 };
	int sum = 0;
	double avg;

	printf("score = { 88, 96, 75, 81, 99 }; \n");
	sum = sv(score, DT);
	avg = sum / 5.0;
	printf("5개과목의 총점 : [% 5d] \n", sum);
	printf("5개과목의 평균 : [% 5.2f] \n", avg);
	for (int n = 0; n < DT; n++)
		printf("score[% d] 의 값은 = % d \n", n, score[n]);
	return 0;
}

int sv(int score[], int size)
{
	int cnt, total = 0;
	for (cnt = 0; cnt < size; cnt++)
		total += score[cnt];

	
	return total;
}

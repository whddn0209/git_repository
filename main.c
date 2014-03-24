// main.c	 //
// main function //

#include <stdio.h>
int main()
{
	int A[10];
	int n=10;
	int i;
	
	printf("Quick_sort를 사용한 정렬\n"); // branch 확인을 위해 추가된 부분 
	printf("정렬하고 싶은 숫자 10개를 입력\n");
	
	for (i=0; i<n; i++) // 10개의 숫자 입력받기
	{
		printf("%d : ", i+1);
		scanf("%d", &A[i]);
	}

	quick_sort(A, n); // quick_sort 함수 호출

	for(i=0; i<n; i++) // 정렬된 숫자 출력하기
		printf("%d ", A[i]);
		printf("\n\n");

		return 0;
}

// main.c	 //
// main function //

#include <stdio.h>
int main()
{
	int A[10];
	int n=10;
	int i;
	
	printf("Quick_sort�� ����� ����\n"); // branch Ȯ���� ���� �߰��� �κ� 
	printf("�����ϰ� ���� ���� 10���� �Է�\n");
	
	for (i=0; i<n; i++) // 10���� ���� �Է¹ޱ�
	{
		printf("%d : ", i+1);
		scanf("%d", &A[i]);
	}

	quick_sort(A, n); // quick_sort �Լ� ȣ��

	for(i=0; i<n; i++) // ���ĵ� ���� ����ϱ�
		printf("%d ", A[i]);
		printf("\n\n");

		return 0;
}

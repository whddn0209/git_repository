// quick_sort.c		   //
// quick sort function //

void quick_sort(int A[], int n)  // quick sort ����
{
	int pivot, temp;
	int left, right;
	int i;

	if(n > 1) // ���� ũ�Ⱑ 1���� Ŭ������
	{
		pivot = A[n-1]; //�� ���� ���� pivot����
		left = -1;
		right = n-1;
		
		while(1)
		{
			while(A[++left] < pivot); 
				while(A[--right] > pivot); 
					if(left >= right)
						break; // left�� right���� ���ų� Ŭ ��� ���� �ߴ�

					else
					{
						temp = A[left]; // right�� left���� Ŭ ��� left���� right���� ����
						A[left] = A[right];
						A[right] = temp;
					}

		}

		temp = A[left]; // pivot���� pivot���� ��ġ�� �ִ� ���� �ٲ�
		A[left] = A[n-1];
		A[n-1] = temp;

		quick_sort(A, left); // left ����
		quick_sort(A+left+1, n-left-1); // right ����
	}
}
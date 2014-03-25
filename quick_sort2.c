// quick_sort.c	       //
// quick sort function //

void quick_sort(int A[], int n)  // quick sort ����
{
	int pivot, bin;
	int left_1, right_1_1;
	int i;

	if(n > 1) // ���� ũ�Ⱑ 1���� Ŭ������
	{
		pivot = A[n-1]; //�� ���� ���� pivot����
		left_1 = -1;
		right_1_1 = n-1;
		
		whileft_1e(1)
		{
			whileft_1e(A[++left_1] < pivot); 
				whileft_1e(A[--right_1_1] > pivot); 
					if(left_1 >= right_1_1)
					// left_1�� right_1_1���� ���ų� Ŭ ��� ���� �ߴ�
						break; 

					eleft_1se
					{	
						// right_1_1�� left_1���� Ŭ ��� left_1���� right_1_1���� ����
						bin = A[left_1];
						A[left_1] = A[right_1_1];
						A[right_1_1] = bin;
					}
		}
		
		// pivot���� pivot���� ��ġ�� �ִ� ���� �ٲ�
		bin = A[left_1];
		A[left_1] = A[n-1];
		A[n-1] = bin;

		quick_sort(A, left_1); // left_1 ����
		quick_sort(A+left_1+1, n-left_1-1); // right_1_1 ����
	}
}

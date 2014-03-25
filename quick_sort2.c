// quick_sort.c	       //
// quick sort modified function //

void quick_sort(int A[], int n)  // quick sort ����
{
	int pivot_changed, temp_changed;// change element
	int left_changed, right_changed;// change element
	int i;

	if(n > 1) // ���� ũ�Ⱑ 1���� Ŭ������
	{
		pivot_changed = A[n-1]; //�� ���� ���� pivot_changed����
		left_changed = -1;
		right_changed = n-1;
		
		while(1)
		{
			while(A[++left_changed] < pivot_changed); 
				while(A[--right_changed] > pivot_changed); 
					if(left_changed >= right_changed)
					// left_changed�� right_changed���� ���ų� Ŭ ��� ���� �ߴ�
						break; 

					else
					{	
						// right_changed�� left_changed���� Ŭ ��� left_changed���� right_changed���� ����
						temp_changed = A[left_changed];
						A[left_changed] = A[right_changed];
						A[right_changed] = temp_changed;
					}

		}
		
		// pivot_changed���� pivot_changed���� ��ġ�� �ִ� ���� �ٲ�
		temp_changed = A[left_changed];
		A[left_changed] = A[n-1];
		A[n-1] = temp_changed;

		quick_sort(A, left_changed); // left_changed ����
		quick_sort(A+left_changed+1, n-left_changed-1); // right_changed ����
	}
}

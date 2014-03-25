// quick_sort.c	       //
// quick sort modified function //

void quick_sort(int A[], int n)  // quick sort 구현
{
	int pivot_changed, temp_changed;// change element
	int left_changed, right_changed;// change element
	int i;

	if(n > 1) // 분할 크기가 1보다 클때까지
	{
		pivot_changed = A[n-1]; //맨 우측 값을 pivot_changed으로
		left_changed = -1;
		right_changed = n-1;
		
		while(1)
		{
			while(A[++left_changed] < pivot_changed); 
				while(A[--right_changed] > pivot_changed); 
					if(left_changed >= right_changed)
					// left_changed가 right_changed보다 같거나 클 경우 분할 중단
						break; 

					else
					{	
						// right_changed가 left_changed보다 클 경우 left_changed값과 right_changed값을 변경
						temp_changed = A[left_changed];
						A[left_changed] = A[right_changed];
						A[right_changed] = temp_changed;
					}

		}
		
		// pivot_changed값과 pivot_changed값의 위치에 있는 값을 바꿈
		temp_changed = A[left_changed];
		A[left_changed] = A[n-1];
		A[n-1] = temp_changed;

		quick_sort(A, left_changed); // left_changed 정렬
		quick_sort(A+left_changed+1, n-left_changed-1); // right_changed 정렬
	}
}

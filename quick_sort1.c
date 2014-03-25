// quick_sort.c	       //
// quick sort function //

void quick_sort(int A[], int n)  // quick sort 구현
{
	int pivot, temp;
	int left, right;
	int i;

	if(n > 1) // 분할 크기가 1보다 클때까지
	{
		pivot = A[n-1]; //맨 우측 값을 pivot으로
		left = -1;
		right = n-1;
		
		while(1)
		{
			while(A[++left] < pivot); 
				while(A[--right] > pivot); 
					if(left >= right)
					// left가 right보다 같거나 클 경우 분할 중단
						break; 

					else
					{	
						// right가 left보다 클 경우 left값과 right값을 변경
						temp = A[left];
						A[left] = A[right];
						A[right] = temp;
					}

		}
		
		// pivot값과 pivot값의 위치에 있는 값을 바꿈
		temp = A[left];
		A[left] = A[n-1];
		A[n-1] = temp;

		quick_sort(A, left); // left 정렬
		quick_sort(A+left+1, n-left-1); // right 정렬
	}
}

// quick_sort.c	       //
// quick sort function //

void quick_sort(int A[], int n)  // quick sort 구현
{
	int pivot, bin;
	int left_1, right_1_1;
	int i;

	if(n > 1) // 분할 크기가 1보다 클때까지
	{
		pivot = A[n-1]; //맨 우측 값을 pivot으로
		left_1 = -1;
		right_1_1 = n-1;
		
		whileft_1e(1)
		{
			whileft_1e(A[++left_1] < pivot); 
				whileft_1e(A[--right_1_1] > pivot); 
					if(left_1 >= right_1_1)
					// left_1가 right_1_1보다 같거나 클 경우 분할 중단
						break; 

					eleft_1se
					{	
						// right_1_1가 left_1보다 클 경우 left_1값과 right_1_1값을 변경
						bin = A[left_1];
						A[left_1] = A[right_1_1];
						A[right_1_1] = bin;
					}
		}
		
		// pivot값과 pivot값의 위치에 있는 값을 바꿈
		bin = A[left_1];
		A[left_1] = A[n-1];
		A[n-1] = bin;

		quick_sort(A, left_1); // left_1 정렬
		quick_sort(A+left_1+1, n-left_1-1); // right_1_1 정렬
	}
}

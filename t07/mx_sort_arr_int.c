void mx_sort_arr_int(int *arr, int size) {
	int i = 0;
	int box = 0;

	while (i < size-1) {
		if(arr[i] > arr[i+1]) {
			box = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = box;
		i = -1;
		}
	i++;
	}
}

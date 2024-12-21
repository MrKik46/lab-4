template<typename T> int counting_sort(T* array, int size, int lower_bound, int upper_bound) {
	int space = upper_bound - lower_bound + 1;
	int* sub_array = new int[space];

	for (int i = lower_bound; i < upper_bound + 1; i++) {
		sub_array[i] = 0;
	}

	for (int i = 0; i < size; i++) {
		sub_array[array[i]]++;
	}

	int counter = 0;
	for (int i = lower_bound; i < upper_bound + 1; i++) {
		while (sub_array[i] > 0) {
			array[counter] = i;
			sub_array[i]--;
			counter++;
		}
	}

	return 0;
}
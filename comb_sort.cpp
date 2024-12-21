template<typename T> int comb_sort(T* array, int size) {
	
	int step = size;
	
	while (step != 1) {
		for (int i = 0; i + step < size; i++) {
			if (array[i] > array[i + step]) {
				T temp = array[i];
				array[i] = array[i + step];
				array[i + step] = temp;
			}
		}
		
		step /= 1.247;
		
		if (step < 1) { 
			step = 1; 
		}
	}
	
	for (int i = 0; i + step < size; i++) {
		if (array[i] > array[i + step]) {
			T temp = array[i];
			array[i] = array[i + step];
			array[i + step] = temp;
		}
	}

	return 0;
}
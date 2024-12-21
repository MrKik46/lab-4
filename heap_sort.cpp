template<typename T> void heap_sort(T* array, int size) {
	T temp;
	int end_index = size - 1;

	while (end_index != 1) {
		for (int i = size / 2 - 1; i > 0; i--) {
			
			if (end_index < i) { 
				i = end_index; 
			}
			
			if (array[0] < array[i]) {
				temp = array[0];
				array[0] = array[i];
				array[i] = temp;
			}
		}

		temp = array[0];
		array[0] = array[end_index];
		array[end_index] = temp;
		end_index--;
	}
}
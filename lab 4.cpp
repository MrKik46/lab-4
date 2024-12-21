#include <iostream>
#include "comb_sort.cpp"
#include "counting_sort.cpp"
#include "heap_sort.cpp"
#include "graph.cpp"

int main()
{
   /* int arr[] = {8, 7, 6, 5, 4, 3, 2, 1};
    int array_size = 8;

    heap_sort(arr, array_size);

    for (int i = 0; i < array_size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;*/

    graph gr(100);

    gr.AddEdge(0, 5);
    gr.AddEdge(1, 3);
    gr.AddEdge(3, 2);
    gr.AddEdge(0, 4);
    gr.AddEdge(4, 1);
    gr.AddEdge(4, 5);
    gr.AddEdge(1, 3);
    gr.AddEdge(3, 2);
    gr.AddEdge(2, 0);

    gr.DFS(0, true);

    std::cout << std::endl;
    std::cout << gr.BFS(0, 3);

}


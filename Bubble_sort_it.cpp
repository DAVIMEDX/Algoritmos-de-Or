#include <iostream>

void bubble_it(int vet[], int n){

    for (int i = 0; i < n-1; i++)
	{
        for (int j = n - 1; j > i; j--)
		{
            if (vet[j] < vet[j-1])
			{
                int aux = vet[j];
                vet[j] = vet[j-1];
                vet[j-1] = aux;
            }
        }
	}
} //Complexidade O(n^2) no pior caso.



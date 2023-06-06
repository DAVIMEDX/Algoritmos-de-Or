#include <iostream>

void swap(int vet[], int a, int j)
{
    int aux = vet[a];
    vet[a] = vet[j];
    vet[j] = aux;
}

void selection_sortIt(int vet[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int t = i;
		for (int j = i + 1; j < n; j++)
		{
			if (vet[j] < vet[t]){
                t = j;
            }
				
		}
       swap(vet,t,i);
	}

}
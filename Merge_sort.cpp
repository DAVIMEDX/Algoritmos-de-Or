#include <iostream>



void mergeSort(int vet[], int a, int n)
{
    if (a < n)
    {
         
        int aux = a + (n - a) / 2;
        mergeSort(vet, a, aux);
        mergeSort(vet, aux + 1, n);
        merge(vet, a, aux, n);
    }
}
 
// Função intercala;

void merge(int vet[], int l, int m, int r)
{
    int k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    // Cria-se arrays temporários
    int L[n1], R[n2];
 
    // Copia dados para arrays temporários L[] e R[]
    for(int i = 0; i < n1; i++)
        L[i] = vet[l + i];
    for(int j = 0; j < n2; j++)
        R[j] = vet[m + 1+ j];
 
    
    // Mescla os arrays temporários
    // voltando para vet[l..r]
    int i = 0;
    int j = 0;
    k = l;
     
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            vet[k] = L[i];
            i++;
        }
        else
        {
            vet[k] = R[j];
            j++;
        }
        k++;
    }
 
    // Copia os elementos restantes
    // de L[], se houver
    while (i < n1)
    {
        vet[k] = L[i];
        i++;
        k++;
    }
 
    
    // Copia os elementos restantes
    // de R[], se houver
    while (j < n2)
    {
        vet[k] = R[j];
        j++;
        k++;
    }
}
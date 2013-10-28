#include <iostream> 
#include <cstdlib> 
using namespace std; 
 
void select(int *A, int u, int v, int k) 
{ 
    int s = rand()%(v-u+1)+u; 
    int a = A[s]; 
    A[s] = A[u]; 
    A[u] = a; 
    int i, j=u; 
    for (i=u; i<=v; i++) 
        if (A[i] > a) 
        { 
            int tmp = A[++j]; 
            A[j] = A[i]; 
            A[i] = tmp; 
        } 
    A[u] = A[j]; 
    A[j] = a; 
    if (j == k) return; 
    else if (j < k) 
        select(A, j+1, v, k); 
    else 
        select(A, u, j-1, k); 
} 
 
int main() 
{ 
    int n, k, i, j; 
    cin >> n >> k; 
    int A[n];
    for (i=0; i<n; i++) 
        cin >> A[i]; 
    select(A, 0, n-1, k-1); 

    cout << A[k - 1] << endl; 
} 

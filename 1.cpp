#include <iostream>
using namespace std;
int busca(int x, int *v, int n);
int main(){
    int n,x;
    cout << "TAMANHO DO VETOR: ";
    cin >> n;
    int vetor[n];
    for(int i=0;i<n;i++){
        vetor[i]=i;
    }
    int *ptr=vetor;
    cout << "SELECIONE A BUSCA: ";
    cin >> x;
    cout << "INDICE: " << busca(x,ptr,n);
}
int busca(int x, int *v, int n){
   for(int j=0;j<n-1;j++){
    if(v[j]<x && v[j+1]>=x){
        return j;
    }
   }
    return -1;
}
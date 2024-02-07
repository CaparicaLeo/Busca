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
    if(n==-1){
        return -1;
    }
    else{
        int i=n;
        if(v[i]==x){
            return i-1;
        }
        busca(x,v,i-1);
    }
}
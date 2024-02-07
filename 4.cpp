#include <iostream>
using namespace std;
int buscaBin(int x, int*v, int n);
int main(){
    int n;
    cin >> n;
    int vetor[n];
    for(int j=0;j<n;j++){
        vetor[j]=j;
    }
    int x;
    cin >> x;
    cout << buscaBin(x,vetor,n)<< endl;
    return 0;
}
int buscaBin(int x, int*v, int n){
    int ini=0,fim= n-1;
    while(ini<=fim){
        int i=(ini+fim)/2;
        if(v[i]>=x){
            return i;
        }
        if(v[i]<x){
            ini = i+1;
        }
        else{
            fim =i;
        }
    }
    return -1;
}
#include <iostream>
using namespace std;
void buscaInd(int alvo, int*v, int n, int &indUm, int &indDois);
int main(){
    int n,alvo;
    cin >> n;
    int vetor[n];
    for(int i=0;i<n;i++){
        vetor[i]=i+1;
    }
    cin >> alvo;
    int indUm=0,indDois=0;
    buscaInd(alvo,vetor,n,indUm,indDois);
    if(indUm!=-1 && indDois!=-1){
        cout << "Indices: " << indUm << "   " << indDois << endl;
        cout << "Valores: " << vetor[indUm] << " + " << vetor[indDois] << " = " << alvo << endl;
    }
    else{
        cout << "Nao foram encontrado valores para a soma!"<< endl;
    }
    return 0;
}
void buscaInd(int alvo, int*v, int n, int &indUm, int &indDois){
    indUm = -1;
    indDois = -1;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (v[i] + v[j] == alvo) {
                indUm = i;
                indDois= j;
                return;
            }
        }
    }
}

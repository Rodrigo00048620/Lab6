#include <iostream>
using namespace std;
int main(){
    int A[10],B[10],C[10],i,n;
    cout << "Ingresar limite de array A y B (limite 5):"<< endl;
    cin >> n;
    if (n <= 5){
        cout<<"Elementos del arreglo A:"<<endl;
        for(i=0;i<n;i++){
        cout<<"Elemento ["<<i<<"]:";
        cin>>A[i];
        }
        cout<<"Los elementos del arreglo B:"<<endl;
            for(i=0;i<n;i++){
            cout<<"Elemento ["<<i<<"]:";
            cin>>B[i];
            }
            for(i=0;i<n;i++)
            C[i]=A[i]+B[i];
            cout<<"La suma de arreglo es:";
            for(i=0;i<n;i++)
            cout<<" "<<C[i];
    }else{
        cout << "No sigue indicaciones :(" << endl;
    }
    
    
}
#include <iostream>
#include "pilha.h"
using namespace std;
int main(){
    int resposta;
    pilha pilha1;
    TipoItem item; 
    cout << "SEJA BEM VINDO AO PROGRAMA DE ESTRUTURA DE PILHA(COM VETOR)" << endl;
    cout << "SIGA AS INSTRUÇÕES DO MENU ABAIXO PARA COMEÇAR" << endl;
    do{
        cout << "DIGITE 1 PARA INSERIR UM ELEMENTO NA PILHA" << endl;
        cout << "DIGITE 2 PARA REMOVER UM ELEMENTO DA PILHA" << endl;
        cout << "DIGITE 3 PARA VER O TAMANHO DA PILHA" << endl;
        cout << "DIGITE 4 PARA IMPRIMIR TODOS OS ELEMENTOS DA PILHA" << endl;
        cout << "DIGITE 5 PARA DESTRUIR A PILHA" << endl;
        cout << "DIGITE 0 PARA SAIR DO PROGRAMA" << endl;
        cin >> resposta;
        
        if(resposta == 1){
            cout << "DIGITE O VALOR QUE DESEJA COLOCAR NA PILHA" << endl;
            
            cin >> item;
            pilha1.push(item);
        }
        else if(resposta == 2){
            if(pilha1.estaVazio()){
                cout << "ERRO" << endl;
            }
            else{item = pilha1.pop();
            cout << "ELEMENTO REMOVIDO: " << item << endl;
            } 
        }
        else if(resposta == 3){
            cout << pilha1.printTamanho() << endl;
        }
        else if(resposta == 4){
            pilha1.imprimir();
        }
      //  else if(resposta == 5){
        //    pilha1.~pilha();
        //}
        else if(resposta == 0){
            cout << "DESLIGANDO O PROGRAMA" << endl;
        }

    }while (resposta != 0);
    return 0;
}
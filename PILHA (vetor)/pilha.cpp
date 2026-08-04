#include <iostream>
#include "pilha.h"
using namespace std;
    pilha::pilha(){
        tamanho = 0;
        estrutura = new TipoItem[max_itens];
    }
    pilha::~pilha(){
        delete[] estrutura;
    }
    bool pilha::estaCheio(){
        return (tamanho == max_itens);
    }
    bool pilha::estaVazio(){
        return (tamanho == 0);
    }
    void pilha::push(TipoItem item){
        if(estaCheio()){
            cout << "a pilha está cheia" << endl;
        }else{
            estrutura[tamanho] = item;
            tamanho++;
        }
    }
    TipoItem pilha::pop(){
        if(estaVazio()){
            cout << "A pilha está vazia" << endl;
            return -1;
        }else{
            tamanho--;
            return estrutura[tamanho - 1];
        }
    }
    void pilha::imprimir(){
        for(int i = 0; i < tamanho; i++){
            cout << estrutura[i] << " ";
        }
        cout << endl;
    }
    int pilha::printTamanho(){
        return tamanho;
    }
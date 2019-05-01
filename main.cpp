#include <iostream>
#include <stdio.h>
#include <cstring>
#include <math.h>

using namespace std;

// K) Valor N�merico, Dado uma String S (que represente um inteiro), retorne um n�mero que represente S.
// defini��o recursiva, sa�da, exemplo, algoritmo recursivo em c++, algoritmo iterativo em c++, comparacao de implementa��o
// entrada: string (de n�meros) -> CONST CHAR*
// sa�da: INTEIRO
// EXEMPLO:
// ENTRADA: "123456"
// SA�DA: 123456


int algoritmoIterativo(const char* entrada){ // CONST nao deixa alterar a tipagem da vari�vel
    int valor = 0; // valor a ser mostrado para o usu�rio
    int posicao = 1;
    for(int i = strlen(entrada) - 1; i >= 0; i--){ // pega o tamanho da vari�vel entrada e meche com ela
            // STRLEN pega o valor do tamanho da entrada
        if(entrada[i] >= '0' && entrada[i] <= '9'){ // se a entrada for maior que '0' e menor que '9'
            valor += posicao * (entrada[i] - '0'); // valor recebe posicao * entrada
            posicao *= 10;
        }else{
            return 0;
        }
    }
    return valor; // retorna o valor
}

int algoritmoRecursivo(const char * entrada){
    if(strlen(entrada) == 0){
        return 0;
    }else{
        return (entrada[0] - '0') *pow(10,(strlen(entrada)-1)) + algoritmoRecursivo(entrada + 1);
    }
}
int main()
{
    cout << "Algoritmo Iterativo: ";
    cout << algoritmoIterativo("123456");
    cout << endl;
    cout << "Algoritmo Recursivo: ";
    cout << algoritmoRecursivo("123456");
    return 0;
}

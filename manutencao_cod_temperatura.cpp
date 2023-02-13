/*
4. Escreva as seguintes funções:
    a. CparaF – faz a conversão de uma temperatura em graus C para graus F.
    b. CparaK – faz a conversão de uma temperatura em C para Kelvin (C=K-273)
    c. KparaC – faz a conversão de K para C.
    d. KparaF – faz a conversão de K para F (dica: utilize as funções anteriores)
    e. FparaK – faz a conversão de F para K.

A seguir, faça um programa que apresente continuamente um menu na tela com
todas as opções de conversão que você implementou. Uma vez feita a opção, o
programa lê do teclado o valor a ser convertido e imprime o resultado.
-----------------------------

MANUTENÇÃO

objetivo: atualizar funções e reduzir linhas de código


Registre quanto tempo você demorou para entender o programa
- alguns minutos para relembrar quais os objetivos iniciais do programa

Escolha uma alteração a ser feita e registre quanto tempo você demorou para planejar como ela será feita
- substituir if por switch, diminuir o número de linhas das funções

Registre quanto tempo você demorou para efetuar a alteração
- 5 minutos para substituição do IF por switch e para remover alguams variáveis das funções e manter somente o return

Registre quanto tempo você demorou para verificar se a alteração foi feita corretamente
- Os teste foram feitos inserindo um valor e verificando se eles eram compatíveis com valores reais.

*/


#include<iostream>
using namespace std;

float fparac(float Fc){
    return (Fc-32) / 1.8;
}

float fparak(float Fk){
    return (Fk-32) /1.8 + 273;
}

float cparaf(float Cf){	
	return 32 + Cf *1.8;
}

float cparak(float Ck){
	return Ck +273;
}
	
float kparac(float Kc){
	return Kc - 273;
}

float kparaf(float Kf){
	return 32 + (Kf - 273) / 1.8;
}

int main()
{
	int comando;
	
	float Fc, Fk, Cf, Ck, Kc, Kf, temperatura;
	
	while(comando != 7)	{	
        cout << "\n * 1 - F --> C";
        cout << "\n * 2 - F --> K";
        cout << "\n * 3 - C --> F";
        cout << "\n * 4 - C --> K";
        cout << "\n * 5 - K --> C";
        cout << "\n * 6 - K --> F";
        cout << "\n * 7 - SAIR" << endl;
        
        cout << "\n - SELECIONE UMA COMANDO - \n\n"<< endl;
        cin >> comando;	

        cout << "\nTEMPERATURA: "<< endl;
        
        switch(comando){
            case 1:
                cin >> Fc;
                cout << "\n\nTEMPERATURA EM CELSIUS: %.2f C" << fparac(Fc) << endl;
            break;

            case 2:
                cin >> Fk;
                cout << "\n\nTEMPERATURA EM KELVIN: %.2f K" << fparak(Fk) << endl;
            break;

            case 3:
                cin >> Cf;
                cout << "\n\nTEMPERATURA EM FAHRENHEIT: %.2f F" << cparaf(Cf) << endl;
            break;

            case 4:
				cin >> Fk;
                cout << "\n\nTEMPERATURA EM KELVIN: %.2f K" << cparak(Ck) << endl;
            break;

            case 5:
                cin >> Kc;
                cout << cout << "\n\nTEMPERATURA EM CELSIUS: %.2f C" << kparac(Kc) << endl;
            break;

            case 6:
                cin >> Kf;
                cout << "\n\nTEMPERATURA EM FAHRENHEIT: %.2f F" << kparaf(Kf) << endl;
            break;

            default:
                cout << "\n\nSaindo...";
        }
	}
}

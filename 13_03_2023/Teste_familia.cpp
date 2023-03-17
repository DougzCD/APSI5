#include <iostream>
#include <string>


class Pai
{
    private:
       void Dirige(){};
    public:
        float casa, carro, nome, sobrenome;

        void UsaCarro(){
            printf("Ele Dirige");
        };

        Pai(float a, float b, float c, float d) { // Constructor with parameters
        casa = a;
        carro = b;
        nome = c;
        sobrenome = d;
        }
        
};

class Filho: public Pai
{
    int mesada;
    private:

       void PegaCarona(){};

    public:

        void UsaCarro(){
            printf("Ele pega carona");
        };

        Filho(float a, float b, float c, float d, int e) { // Constructor with parameters
        casa = a;
        carro = b;
        nome = c;
        sobrenome = d;
        mesada = e;
        }
};

void main(){
    pai = new Pai;
    pai.Pai(Seila, Honda, Antonio, CD);
    filho = new Filho;
    filho.Filho(Seila, n, Douglas, CD, 100);

    printf(pai.casa, pai.carro, pai.nome, pai.sobrenome);
    pai.UsaCarro();

    printf(filho.casa, filho.carro, filho.nome, filho.sobrenome, filho.mesada);
    filho.UsaCarro();
}


#include <stdio.h>

class Usuario
{
    string nome;
    virtual void uploadvideo()
    {
        Video* v = new ProduzidoPorUsuario();
        v.pularDuracao();
        delete v;
    }
    vector<Video> listaVideos;
}

class CriadorVideo: Usuario
{
    void uploadvideo();
}

class MenorDeIdade: Usuario
{
    void uploadvideo();
}

class Plataforma
{
    vector<Usuario> listaUsuarios;
    void procuraVideo(int idVideo);
}

class Video
{
    int id;
    float duracao;
    int classificacao;
    virtual void pularDuracao() = 0;
}

class ProduzidoPorUsuario: Video
{
    void pularDuracao();
}

class Propaganda: Video
{
    void pularDuracao();
}

class Filme: Video
{
    void pularDuracao();
}

int main()
{
    Usuario u1;
    u1.uploadvideo();
   
    Usuario* u2 = new CriadorVideo();
    u2.pularDuracao();
    delete u2;

    return 0;
}


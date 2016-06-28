#include "cliente.h"
#include <queue>
using namespace std;
vector<cliente> vetcliente;

void leitura(){
    ifstream infile;
    infile.open("cliente.txt");
    while(infile)
    {
        cliente cli;
        string s;
        if (!getline( infile, s )) break;
        istringstream ss( s );
        getline(ss,cli.cpf,';');
        getline(ss,cli.nome,';');
        vetcliente.push_back(cli);
    }
    infile.close();
}

void salva(){
    ofstream outfile;
    outfile.open("cliente.txt");
    for(unsigned i=0;i<vetcliente.size();i++)
        outfile<<vetcliente[i].cpf<<";"<<vetcliente[i].nome<<endl;
    outfile.close();
}

void cadastro(cliente novo_cli){
    vetcliente.push_back(novo_cli);
}

vector<cliente> carrega_clientes(){
    return vetcliente;
}


bool myfunction (cliente i,cliente j) { return (i.cpf<j.cpf); }

cliente PesquisaBinaria (string chave, int &meio)
{
     int inf = 0; //Limite inferior
     int sup = vetcliente.size()-1; //Limite superior

     sort(vetcliente.begin(),vetcliente.end(),myfunction);

     while (inf <= sup)
     {
          meio = inf + (sup-inf)/2;
          if (chave == vetcliente[meio].cpf)
               return vetcliente[meio];
          else if (chave < vetcliente[meio].cpf)
               sup = meio-1;
          else
               inf = meio+1;
     }
     cliente cli;
     return cli;   // não encontrado
}

void alterar(cliente cli,int indice){
    vetcliente[indice] = cli;
}

void remover(int indice){
    vetcliente.erase(vetcliente.begin()+indice);
}

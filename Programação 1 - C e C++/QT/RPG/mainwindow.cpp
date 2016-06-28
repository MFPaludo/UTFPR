/*Regras do programa
 * Não podem existir duas aventuras com o mesmo nome*/

#include "mainwindow.h" //biblioteca da janela principal
#include "ui_mainwindow.h" //janela do qt
#include<string> //strings são cadeias de caracteres
#include<vector> //biblioteca de vetores
#include<fstream> //manipulador de fluxo de dados, baseado em arquivos. Ex.: << >> read write
//abre o arquivo e deixa ele aberto, pegando as informações linha por linha
#include<sstream> //mesma coisa do fstream, porém, palavra por palavra. Baseado no delimitador início/fim
// ";"
#include<QString> //converte o texto de string para Qstring
#include<QMessageBox> //caixa de mensagem do QT

using namespace std; //namespaces são definidos para evitar que páginas com o mesmo nome entrem em
//conflito. O namespace foi nomeado std por padrão do QT creator
typedef struct __rpg{ //structs são usadas para trabalhar com variáveis de maneira mais fácil e organizada
    string aventura; //vetor string que define o nome da aventura (as principais ações
    //vão ser realizadas utilizando o nome da aventura. Ex.: A busca utiliza somente o nome da aventura
    string narrador; //vetor string que define o nome do narrador
    string personagem[5]; //vetor string que define o nome dos 5 personagens
    string inimigo[3]; //vetor string que define o nome dos 3 inimigos
    }rpg; //rpg é o nome da estrutura
vector<rpg> aventura; //vetor da struct rpg, nomeado de aventura
int indice; //não é necessário um double, pois não usaremos valores "quebrados", portanto usamos int

void leitura(){ //void, pois int retorna valor, não precisa-se retornar valor - Início da função de leitura
    ifstream infile; //ifstream é utilizado para criar o objeto/função de leitura que será utilizado
    //pelo usuário - infile será o nome do objeto
    infile.open("aventura.txt"); //abre o "objeto" infile, e dá a ele o nome de aventura.txt
    while(infile) //enquanto não encontrar o final do arquivo, dentro do programa, o nome do arquivo é
                 //infile, fora do programa, o nome do arquivo é aventura.txt
    {   rpg r; //variável r de RPG
        string s; // variável s de String
        if (!getline( infile, s )) break; //verifica se consegue pegar a linha
        istringstream ss( s ); //inicia o passo e quebra a linha s em vários passos
        getline(ss,r.aventura,';'); //pega os dados da linha aventura
        getline(ss,r.narrador,';'); //pega os dados da linha narrador
        getline(ss,r.personagem[0],';'); //pega os dados da linha personagem 1
        getline(ss,r.personagem[1],';'); //pega os dados da linha personagem 2
        getline(ss,r.personagem[2],';'); //pega os dados da linha personagem 3
        getline(ss,r.personagem[3],';'); //pega os dados da linha personagem 4
        getline(ss,r.personagem[4],';'); //pega os dados da linha personagem 5
        getline(ss,r.inimigo[0],';'); //pega os dados da linha inimigo 1
        getline(ss,r.inimigo[1],';'); //pega os dados da linha inimigo 2
        getline(ss,r.inimigo[2],';'); //pega os dados da linha inimigo 3
        aventura.push_back(r);} //é inserido sempre no final de uma informação
    infile.close();} //fecha o objeto infile

void salva(){ //Início da função de leitura
    ofstream outfile; //ofstream é utilizado para gravação de arquivos (salvar o arquivo)
    //outfile é o nome dado à função
    outfile.open("aventura.txt"); //pega o arquivo aberto e aplica o ofstream chamado de outfile em aventura.txt
    for(unsigned i=0;i<aventura.size();i++) //determina o tamanho do arquivo
        outfile<<aventura[i].aventura<<";"<<aventura[i].narrador<<";"<<aventura[i].personagem[0]<<";"<<aventura[i].personagem[1]<<";"<<aventura[i].personagem[2]<<";"<<aventura[i].personagem[3]<<";"<<aventura[i].personagem[4]<<";"<<aventura[i].inimigo[0]<<";"<<aventura[i].inimigo[1]<<";"<<aventura[i].inimigo[2]<<";"<<endl;
    //faz a mesma coisa que é feita na função leitura, mas joga todos os elementos em uma só linha
    //separando-os por ";", que é a delimitação de início/fim da biblioteca sstream
    outfile.close();} //fecha o arquivo

bool myfunction (rpg i,rpg j) { return (i.aventura<j.aventura);}//função que será usada para setar
//foi utilizado bool pois pesquisa binária, como o próprio nome diz, é uma pesquisa que se baseia
//em binários, e bool trabalha dessa forma, com binários
//o início e o fim da pesquisa
/* pesquisa sequencial funciona comparando cada valor procurado com cada um dos valores do vetor em
 * sequência porém não é muito eficiente para vetores grandes
 * a pesquisa binária só funciona se seu vetor estiver ordenado
 *são utilizadas 2 variáveis auxiliares, início e fim
 * a pesquisa começa do meio e os valores auxiliares mudam conforme o valor
 * se o valor for maior, o início vai para depois do meio e o fim continua onde está
 * se for menor, o fim vai para antes do meio*/

rpg PesquisaBinaria (string chave) //pesquisa binária da struct rpg
//chave é a string que será utilizada na pesquisa
//na função pesquisa binária, indice é o que eu estou procurando
{    int inf = 0; //Limite inferior
     int sup = aventura.size()-1; //Limite superior
     sort(aventura.begin(),aventura.end(),myfunction);//seta(do verbo to set) início e fim do vetor
      //aventura utilizando a função myfunction
     while (inf <= sup){//enquanto o limite inferior for menor ou igual ao superior
          indice = inf + (sup-inf)/2;//utiliza a variável indice do tipo int para realizar o cálculo
          if (chave == aventura[indice].aventura) //se a string chave for igual ao vetor aventura na
              //posição de valor indice eu encontrei o que quero
               return aventura[indice]; //o programa retorna o nome da aventura
          else if (chave < aventura[indice].aventura) //se o valor ainda não foi encontrado e a chave
              //for menor que o desejado
               sup = indice-1;//eu subtraio 1 do valor indice
          else //caso contrário, ou seja, se for maior
               inf = indice+1;}//eu somo 1
     rpg r; //declaro r como minha struct rpg
     return r;}   //o retorno disso tudo é r

MainWindow::MainWindow(QWidget *parent) ://MainWindow é o construtor da classe, que é igual ao nome da classe
    //construtores são as funções de inicialização de uma classe, eles ordenam a classe e a executam
    //classe é o objeto
    //parent é a janela que comanda
    QMainWindow(parent),//pega a informação da janela anterior(parent)
    ui(new Ui::MainWindow)//abre uma nova janela
{   ui->setupUi(this);//selecina a classe atual
    setWindowTitle("The Division RPG 1.0");//determina o nome da janela
    leitura();}//lê as informações do arquivo com a função leitura

MainWindow::~MainWindow()//Na janela MainWindow
{   salva();//salva o arquivo pela função salvar
    delete ui;}//limpa as informações flutuantes
void MainWindow::on_actionAventura_2_triggered()//seleciona aventura_2 como construtor da classe
{    ui->stackedWidget->setCurrentWidget(ui->aventura);}//abre a janela aventura2
void MainWindow::limpar()//limpa a janela
{   ui->nomeaventura->clear();//limpa o nome da aventura
    ui->narrador->clear();//limpa o narrador
    ui->personagem1->clear();//limpa o personagem 1
    ui->personagem2->clear();//limpa o personagem 2
    ui->personagem3->clear();//limpa o personagem 3
    ui->personagem4->clear();//limpa o personagem 4
    ui->personagem5->clear();//limpa o personagem 5
    ui->inimigo1->clear();//limpa o inimigo 1
    ui->inimigo2->clear();//limpa o inimigo 2
    ui->inimigo3->clear();}//limpa o inimigo 3

void MainWindow::on_pushButton_clicked()//pushButton é o botão cadastrar
//quando o botão cadastrar for pressionado, as ações a seguir serão executadas
{   rpg r;//na estrutura rpg r
    r.aventura=ui->nomeaventura->text().toStdString();//passa as informações da linha nomeaventura
    //para o vetor aventura da estrutura r em formato de StdString texto
    r.narrador=ui->narrador->text().toStdString();//passa as informações da linha narrador
    //para o vetor narrador da estrutura r em formato de texto
    r.personagem[0]=ui->personagem1->text().toStdString();//passa as informações da linha personagem1
    //para o vetor personagem[0] da estrutura r em formato de texto
    r.personagem[1]=ui->personagem2->text().toStdString();//passa as informações da linha personagem2
    //para o vetor personagem[1] da estrutura r em formato de texto
    r.personagem[2]=ui->personagem3->text().toStdString();//passa as informações da linha personagem3
    //para o vetor personagem[2] da estrutura r em formato de texto
    r.personagem[3]=ui->personagem4->text().toStdString();//passa as informações da linha personagem4
    //para o vetor personagem[3] da estrutura r em formato de texto
    r.personagem[4]=ui->personagem5->text().toStdString();//passa as informações da linha personagem5
    //para o vetor personagem[4] da estrutura r em formato de texto
    r.inimigo[0]=ui->inimigo1->text().toStdString();//passa as informações da linha inimigo1
    //para o vetor inimigo[0] da estrutura r em formato de texto
    r.inimigo[1]=ui->inimigo2->text().toStdString();//passa as informações da linha inimigo2
    //para o vetor inimigo[1] da estrutura r em formato de texto
    r.inimigo[2]=ui->inimigo3->text().toStdString();//passa as informações da linha inimigo3
    //para o vetor inimigo[2] da estrutura r em formato de texto
    aventura.push_back(r);
    limpar();}//executa a função limpar

void MainWindow::on_pushButton_4_clicked()//Button_4 é o botão alterar
//quando o botão alterar for pressionado, as ações a seguir serão executadas
//as ações executadas são muito parecidas com as do botão cadastrar
{   rpg r;//na estrutura rpg r
    r.aventura=ui->nomeaventura->text().toStdString();//passa as informações da linha nomeaventura
    //para o vetor aventura da estrutura r em formato de StdString texto
    r.narrador=ui->narrador->text().toStdString();//passa as informações da linha narrador
    //para o vetor narrador da estrutura r em formato de texto
    r.personagem[0]=ui->personagem1->text().toStdString();//passa as informações da linha personagem1
    //para o vetor personagem[0] da estrutura r em formato de texto
    r.personagem[1]=ui->personagem2->text().toStdString();//passa as informações da linha personagem2
    //para o vetor personagem[1] da estrutura r em formato de texto
    r.personagem[2]=ui->personagem3->text().toStdString();//passa as informações da linha personagem3
    //para o vetor personagem[2] da estrutura r em formato de texto
    r.personagem[3]=ui->personagem4->text().toStdString();//passa as informações da linha personagem4
    //para o vetor personagem[3] da estrutura r em formato de texto
    r.personagem[4]=ui->personagem5->text().toStdString();//passa as informações da linha personagem5
    //para o vetor personagem[4] da estrutura r em formato de texto
    r.inimigo[0]=ui->inimigo1->text().toStdString();//passa as informações da linha inimigo1
    //para o vetor inimigo[0] da estrutura r em formato de texto
    r.inimigo[1]=ui->inimigo2->text().toStdString();//passa as informações da linha inimigo2
    //para o vetor inimigo[1] da estrutura r em formato de texto
    r.inimigo[2]=ui->inimigo3->text().toStdString();//passa as informações da linha inimigo3
    //para o vetor inimigo[2] da estrutura r em formato de texto
    aventura[indice] = r;//cadastra as informações no meu vetor aventura de número indice para a estrutura r
    limpar();}//executa a função limpar

void MainWindow::on_pushButton_5_clicked()//Button_5 é o botão remover
//quando o botão remover for pressionado, as ações a seguir serão executadas
{   aventura.erase(aventura.begin()+indice);//apaga as informações de aventura desde o início(begin)
    QMessageBox::information(NULL, "Removido!", "Excluido!");//exibe a mensagem Excluído na janela removido
    //para confirmar que a ação foi executada com sucesso
    limpar();}//limpa os dados da tela

void MainWindow::on_pushButton_2_clicked()//Button_2 é o botão buscar
//quando o botão buscar for pressionado, as ações a seguir serão executadas
{   rpg r = PesquisaBinaria(ui->nomeaventura->text().toStdString());//realiza a pesquisa binária
    //definida anteriormente, na função rpg
    if (r.aventura!="")//se a busca for encontrada:
        //a busca é feita pelo nome da aventura da struct r
        //após ser encontrada a aventura, o programa pega todas as informações da struct e exibe na tela
    {   ui->narrador->setText(QString::fromStdString(r.narrador));//pega e exibe as informações do vetor
        //narrador na linha narrador
        ui->personagem1->setText(QString::fromStdString(r.personagem[0]));//pega e exibe as informações
        //do vetor personagem[0] na linha personagem1
        ui->personagem2->setText(QString::fromStdString(r.personagem[1]));//pega e exibe as informações
        //do vetor personagem[1] na linha personagem2
        ui->personagem3->setText(QString::fromStdString(r.personagem[2]));//pega e exibe as informações
        //do vetor personagem[2] na linha personagem3
        ui->personagem4->setText(QString::fromStdString(r.personagem[3]));//pega e exibe as informações
        //do vetor personagem[3] na linha personagem4
        ui->personagem5->setText(QString::fromStdString(r.personagem[4]));//pega e exibe as informações
        //do vetor personagem[4] na linha personagem5
        ui->inimigo1->setText(QString::fromStdString(r.inimigo[0]));//pega e exibe as informações
        //do vetor inimigo[0] na linha inimigo1
        ui->inimigo2->setText(QString::fromStdString(r.inimigo[1]));//pega e exibe as informações
        //do vetor inimigo[1] na linha inimigo2
        ui->inimigo3->setText(QString::fromStdString(r.inimigo[2]));}//pega e exibe as informações
    //do vetor inimigo[2] na linha inimigo3
    else//caso contrário, ou seja, caso não encontre
    {       QMessageBox::information(NULL, "Nao encontrado!", "Erro!");}}//o programa exibe uma mensagem
//de erro informando que a aventura não foi encontrada

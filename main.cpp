#include <iostream>
# include <string>
using namespace std;

void dd(string b);

int main() { 
  string palavra;
  string y = "y";
  cout<< "todos os caracteres que nao sao LETRAS serao considerados como espaco\n";
  while (y=="y"){
    cout << "Escreva uma palavra\n";
    getline(cin,palavra);
    if(palavra.length()>50){
      cout<< "Erro: a cadeia de caracteres superou o maximo de (50).Entre uma nova valida\n";
    }else{
      dd(palavra);
      cout<< "\nDeseja de continuar ? (y/n)\n";
      getline(cin,y);
      if (y=="y"){
        cout<<"----------------------------\n";
      }else{
        cout<<"\n"<<"Boa Prova";
      }
    }      
  }  
}

void dd (string b){
  int j =0;
  int i =0;
  string celular [2][27] = {
    {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","Erro"},
    {"2=1","2=2","2=3","3=1","3=2","3=3","4=1","4=2","4=3","5=1","5=2","5=3","6=1","6=2","6=3","7=1","7=2","7=3","7=4","8=1","8=2","8=3","9=1","9=2","9=3","9=4","Erro"}
  };
  j= b.length();
  string sp = "OK";
  for(int n=0;n<j;n++){
    string aux(1,b[n]);
    while (aux != celular[0][i] && i<26){
      i=i+1;
    }
    if(celular[0][i] == "Erro"){
      sp = "Erro";
    }else{
      if(sp == "Erro"){
        cout <<"\n#"<< celular[1][i] << " " << celular[0][i] <<"\n";
        sp="OK";
      }else{
        cout <<"#"<< celular[1][i] << " " << celular[0][i] <<"\n";
      }
    }
    i=0;
  } 
}
#include <iostream>
using namespace std;
int tabla(int);
int negacion(char);
int main(){
  int z;
  char expresion[]={};
  cout<<"ingrese el numero de variables";//se pide el numero de variables para llamar a la funcion tabla
  cin>>z;
  cout<<"ingrese su expresion";//aqui se pide al usuario ingresar la expresion booleana para resolver
  cin>>expresion;
  for (int i=0;i<10;i++){//este for recorrera cada uno de los elementos del arreglo para identificar los operadores. Al no saber como obtener el tamaño del arreglo, le di una condicion aleatoria de iteraciones
    if(expresion[i]=='~'){
      if(expresion[i+1]=='(' or expresion[i+1]!=')'){
        cout<<negacion(expresion[i+1])<<"\n";
      }
    }
    
  }
  cout<<tabla(z);
}
int tabla(int a){
    for (int j=0;j<2;j++){
        for(int y=0;y<2;y++){
          for(int x=0;x<2;x++){
            for(int v=0;v<2;v++){
              cout<<j<<y<<x<<v<<"\n";
            }
          }
        }
      }
    return true;
  }//Funcion que imprimira la tabla de todos los valores usados
int negacion(char){// esta funcion es para poder negar alguna variable, pero no se como rastrear que variable es la que tiene la negacion.:c
  for (int j=1;j>-1;j--){
        for(int y=1;y>-1;y--){
          for(int x=1;x>-1;x--){
            for(int v=1;v>-1;v--){
              if (char=='a'){
                cout<<j;//estos condicionales son solo para imprimir la variable negada requerida
              }
              else if(char=='b'){
                cout<<y;
              }
              else if(char=='c'){
                cout<<x;
              }
              else if(char=='d'){
                cout<<v;
              }
            }
          }
        }
      }
    return true; 
}

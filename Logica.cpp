#include<iostream>
using namespace std;
int main(){
  int i;
  char as[]={};
  cin>>as;
  for ( i=0;i<6;i++){
    if(as[i]=='~'){
      cout<<"operador identificado"<<as[i]<<"\n";
      
    }
    else if(as[i]=='&'){
      cout<<"operador identificado"<<as[i]<<"\n";
    }
    else if(as[i]=='|'){
      cout<<"operador identificado"<<as[i]<<"\n";
    }
    else if(as[i])
 
    else if(as[i]=='~'){
      for (int j=0;j<2;j++){
        for(int y=0;y<2;y++){
          for(int x=0;x<2;x++){
            if(as[i]=='~'){
              for(int v=1;v>-1;v--){
                cout<<j<<y<<x<<v<<"\n";
              }
            }
            else{
              for(int v=0;v<2;v++){
                cout<<j<<y<<x<<v<<"\n";
              }
            }
          }
        }
      }
    }
  }
  for (int j=0;j<2;j++){
    for(int y=0;y<2;y++){
      for(int x=0;x<2;x++){
        if(as[3]=='~'){
          for(int v=1;v>-1;v--){
            cout<<j<<y<<x<<v<<"\n";
          }
        }
        else{
          for(int v=0;v<2;v++){
            cout<<j<<y<<x<<v<<"\n";
          }
        }
      }
    }
  }
    
  
  
}

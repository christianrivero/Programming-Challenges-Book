//Where_is_Waldorf
#include<iostream>
#include<cstring>
#include<string>
#include<math.h>
using namespace std;

int obtener_m(string mxn)
{
   bool espacio=false; 
   char c;
   string resultado="";

   for(int i=0; i<mxn.length(); i++)
   {
      c = mxn[i];
      resultado = resultado+c;

      if(mxn[i+1]==' ')//Si el siguiente es espacio.
         i=mxn.length();//A manera de break.
   }
   
   return stoi(resultado);//Casting de string a int.
}

int obtener_n(string mxn)
{
   string resultado="";
   bool espacio=false; 
   char c;

   for(int i=0; i<mxn.length(); i++)
   {
      if(mxn[i+1]==' ')
         espacio=true;
      
      else//Sin este else, el espacio se concatenaria tambien.
      {
         if(espacio)
         {
            c = mxn[i];
            resultado = resultado+c;
         }
      }
   }
   return stoi(resultado);//Casting de string a int.
}

int validarEnteroPositivo()
{
   float n;

   do{
      cin>>n;
      if(n!=floor(n) || (n<=0))
         cout<<"Debe ser entero positivo"<<endl;
   }while(n!=int(n) || (n<=0));

   return int(n);
}


main()
{
   string mxn, linea_blanco, palabra_fila;
   int cases, m, n, i;

   cases = validarEnteroPositivo();

   cout<<endl;
   getline(cin, linea_blanco);

   do{
      getline(cin, mxn);

      m = obtener_m(mxn);
      n = obtener_n(mxn);

      if(1>n || n>50 || 1>m || m>50)
         cout<<"Los valores de m y n deben estar entre 1 y 50."<<endl;
   }while(1>n || n>50 || 1>m || m>50);
   
   for(i=0; i<m; i++)
   {
      cout<<"palabra_fila ";
      getline(cin, palabra_fila);
   }

   for(i=0; i<m; i++)
   {
      cout<<palabra_fila<<endl;
   }
}
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

int validar_entre(int minimo, int maximo)
{
   float n;

   do{
      cin>>n;
      if(minimo>=n || (n>=maximo))
         cout<<"Debe ser un valor entre "<<minimo<<" y "<<maximo<<"."<<endl;
   }while(minimo>=n || (n>=maximo));

   return int(n);
}


main()
{
   string mxn, linea_blanco, fila;
   int cases, m, n, i, j, k;//k: cantidad de palabras a buscar.

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

   //Creacion de la matriz:
   char matriz[m][n];
   
   //Asignando cada palabra a cada fila de la matriz:
   for(i=0; i<m; i++)
   {
      cout<<"fila["<<i<<"]: ";
      getline(cin, fila);

      for(j=0; j<n; j++)
      {
         matriz[i][j] = toupper(fila[j]);//pasar a mayúscula para estandarizar.
      }
   }

   //Imprimir Matriz:
   for(i=0; i<m; i++)
   {
      for(j=0; j<n; j++)
      {
         cout<<matriz[i][j]<<" ";
      }
      cout<<endl;
   }

   k = validar_entre(1, 20);

   cin.get();//Para evitar que se quede la tecla enter en el buffer.

   //Crear arreglo de palabras a buscar en la matriz:
   string palabras[k];

   for(i=0; i<k; i++)
   {
      cout<<"palabras["<<i<<"]: ";
      getline(cin, palabras[i]);
   }

   //Imprimir lista de palabras a buscar:
   for(i=0; i<k; i++)
   {
      cout<<palabras[i]<<endl;
   }
}
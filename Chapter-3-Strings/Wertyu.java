public class Wertyu
{
	public static void main(String[] args)
	{
		decodificarMensaje("O S, GOMR YPFSU/");
	}

	static char retornaCaracterAnterior(char original)
	{
	   String filas[] = {"`1234567890-=", "QWERTYUIOP[]\\", "ASDFGHJKL;'", "ZXCVBNM,./"};
	   int i, j, palabra=0, caracter=0;//Almacena posiciones de palabra y caracter; deben inicializarse para no mostrar error.
		char salida;

		if(original=='`' || original=='Q' || original=='A' || original=='Z' || original==' ')
			salida = original;
		else
		{
			for(i=0; i<filas.length; i++)
			{
				for(j=0; j<filas[i].length(); j++)
				{
					if(original==filas[i].charAt(j))
					{
						palabra=i;
						caracter=j;
					}
				}
			}

			salida = filas[palabra].charAt(caracter-1);
		}
		return salida;
	}

	static void decodificarMensaje(String texto)
	{
		String resultado="";

		for(int i=0; i<texto.length(); i++)
		{
			resultado = resultado+retornaCaracterAnterior(texto.charAt(i));
		}

		System.out.println(resultado);
	}
}
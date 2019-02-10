public class Wertyu
{
	public static void main(String[] args)
	{
	   String filas[] = {"`1234567890-=", "QWERTYUIOP[]\\", "ASDFGHJKL;'", "ZXCVBNM,./"};
		char x='A';

		System.out.println(retornaCaracterAnterior(x));
	}

	static char retornaCaracterAnterior(char original)
	{
		String filas[] = {"`1234567890-=", "QWERTYUIOP[]\\", "ASDFGHJKL;'", "ZXCVBNM,./"};
		int i, j, palabra=0, caracter=0;//Almacena posiciones de palabra y caracter; deben inicializarse para no mostrar error.
		char anterior;

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

		anterior = filas[palabra].charAt(caracter-1);

		return anterior;
	}

}

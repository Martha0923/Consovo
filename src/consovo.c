#include <stdio.h>

int main() {
   /*
    * Las variables tipo char almacenan solo un caracter, primero la declaro y luego le doy valores
    * */

    char c; 
    int lowercase_vowel; 
    int uppercase_vowel;
    printf ("Introduzca una letra");
    scanf ("%c", &c ); /*
			*lee datos formateados de la entrada estandar y el %c lee un caracter simple y el & es para obtener
			 la direccion de memoria de una variable.
			* */  
    
    // Le pido que me evalue si la letra introducida es vocal minuscula
    lowercase_vowel = (c=='a' || c=='e' || c=='i' || c=='o' || c== 'u');

    // Le pudo que me evalue si la letra introducida es vocal mayuscula
    uppercase_vowel = (c=='A' || c=='E' || c=='I' || c=='O' || c== 'U');


    if (lowercase_vowel || uppercase_vowel) // si la letra introducida es una vocal
		printf("Es una vocal."); // imprima que es vocal
    else
		printf("Es una consonante." ); // si la letra no es una vocal, imprima que es consonante
    return 0;
}



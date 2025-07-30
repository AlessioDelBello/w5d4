#include <stdio.h>
/*stdio.h e una libreria di C che ci permette di utilizzare tra le altre, la funzione printf che sara il comando per stampare testo e valori e scanf comando che ci
permette di leggere date inseriti dall utente */

#include <math.h>
/*math.h e una libreria di C che ci permette di utilizzare tra le altre, la funzione sqrt che sta ad indicare la radice quadrata di un valore da noi inserito e 
il valore M_PI che sta ad indicare il valore di P greco*/

double area_quadrato(double);
/*questo comando ci permette di definire una funzione, dopo averla definita possiamo, all interno del main, scrivere direttamente
il nome della funzione piuttosto che l operazione da effettuare */

int main (){
    //punto di partenza esecuzione programma
float D;
//D sta ad indicare il valore che noi prenderemo in considerazione
float D1, D2, D3;
//D1, D2, D3 sono variabili di tipo decimale

    printf("Mettimi alla prova, inserisci tre numeri: ");
    //Questo comando ci permette di stampare il testo "Mettimi alla prova, inserisci un numero:"

    scanf("%f %f %f", &D1, &D2, &D3);
    //Questo comando ci permette di leggere i valori inseriti dall utente e salvarli nelle variabili D1, D2 e D3

    printf("Area del quadrato: %.0f %.2f\n", area_quadrato(D),area_quadrato(D));
    /*Questo comando ci permette di usare la funzione da noi definita senza scrivere l operazione matematica, 
    il %.2 ci permette di specificare quante cifre vogliamo dopo la virgola,
    il %.0 sta ad indicare che vogliamo un numero intero,
    f sta ad indicare il tipo di formato del valore preso in considerazione che in  questo caso e un decimale,
    * si usa come simbolo moltiplicatore */

    printf("Area del cerchio: %.0f %.2f\n", D * D /4 * M_PI, D * D /4 * M_PI);
    /*Questo comando ci permette di calcolare l area del cerchio,
    prendendo in considerazione il valore di D che e il diametro,
    il valore M_PI e il valore di P greco, che e una costante matematica,
    il %.2 ci permette di specificare quante cifre vogliamo dopo la virgola 
    il %.0 sta ad indicare che vogliamo un numero intero,
    f sta ad indicare il tipo di formato del valore preso in considerazione, / sta ad indicare la divisione*/
   
   
    printf("Area del triangolo: %.0f %.2f\n", sqrt(3)/4 * D * D, sqrt(3)/4 * D * D);
    /*Questo comando ci permette di calcolare l area del triangolo, prendendo in considerazione il valore di D che e il lato
    il valore sqrt(3) sta ad indicare la radice quadrata di 3, 
    il %.2 ci permette di specificare quante cifre vogliamo dopo la virgola
    il %.0 sta ad indicare che vogliamo un numero intero,
    f sta ad indicare il tipo di formato del valore preso in considerazione, / sta ad indicare la divisione*/

}

double area_quadrato(double lato){

return lato * lato;
/*questa funzione ci permette di calcolare l area del quadrato, 
prendendo in considerazione il lato che e il valore che noi inseriamo*/
}
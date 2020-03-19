package com.CMPP.x00202118;

import java.util.Scanner;

class palindromo2 {

    public boolean espalindromo(String cadena) {
        boolean valor = true;
        int i, ind;
        String cadena2 = "";

        for (int x = 0; x < cadena.length(); x++) {
            if (cadena.charAt(x) != ' ')
                cadena2 += cadena.charAt(x);
        }
        cadena = cadena2;
        ind = cadena.length();

        for (i = 0; i < (cadena.length()); i++) {
            if (!cadena.substring(i, i + 1).equals(cadena.substring(ind - 1, ind))) {

                valor = false;
                break;
            }
            ind--;
        }
        return valor;
    }
}

public class Main {

    public static void main(String[] args) {
        Scanner teclado= new Scanner(System.in);
        String nuevo;
        palindromo2 objclass=new palindromo2();
        System.out.print("Ingresa la palabra o frase: ");
        nuevo = teclado.nextLine();
        if(objclass.espalindromo(nuevo)){
            System.out.println("Es Palindromo");
        }
        else
        {
            System.out.println("No es Palindromo");
        }
    }


}


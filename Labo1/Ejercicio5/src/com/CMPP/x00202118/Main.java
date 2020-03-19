package com.CMPP.x00202118;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String palabra = "";
        System.out.print("Escriba cualquier cosa XD: ");
        palabra = s.nextLine();
        String vocalesMinusculasMayusculas = "aeiouAEIOU";

        System.out.println(palabra);
        ArrayList<String> misVocales = new ArrayList<String>();
        String letra;

        for (int i = 0; i <= palabra.length() -1; i++) {
            letra = palabra.substring(i, i+1);

            if (vocalesMinusculasMayusculas.contains(letra)) {
                misVocales.add(letra);
            }
        }
        for (int i = 0; i <= misVocales.size() -1; i++) {
            System.out.print(misVocales.get(i));
        }
    }
}
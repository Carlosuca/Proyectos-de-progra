package com.CMPP.x00202118;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String cadena = "";
        System.out.print("Digite su oración o palabra: ");
        cadena = s.nextLine();
        System.out.println(cadena.replace("a", "b"));   }
}


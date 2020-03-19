package com.CMPP.x00202118;

import java.util.Scanner;

public class Main {
    public static String esc(int n) {
        return esc(1, n);
    }
    public static String esc(int i, int n) {
        if (i == n) {
            return getDots(i - 1) + i;
        }
        else {
            return getDots(i - 1) + i + "" + esc(i + 1, n) + "" + getDots(i - 1) + i;
        }
    }
    public static String getDots(int n) {
        String dots = " ";
        for (int i = 0; i < n; i++) {
            dots += "";
        }
        return dots;
    }
    public static void main(String args[]) {
        Scanner entrada = new Scanner(System.in);
        int n;
        System.out.print("Digite un numero para la secuencia: ");
        n= entrada.nextInt();

        System.out.print(esc(n));
    }
}
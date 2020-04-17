/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication31;

import java.util.Random;

/**
 *
 * @author Alexis Ayala
 */
public class contador_isbn {

    public contador_isbn() {
    }
    
   public static int generarAleatorio(int limite) {
    //Desde 0 hasta limite-1
    return new Random().nextInt(50);
   }
    
}

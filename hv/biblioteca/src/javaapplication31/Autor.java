package javaapplication31;

//clase autor

import java.util.ArrayList;
import java.util.Iterator;
import java.util.Scanner;
import java.util.stream.IntStream;
import static javaapplication31.JavaApplication31.sc;


public class Autor {
    //atributos
    private String nombre;
    private String email;
    private char genero;

Scanner reader = new Scanner(System.in);
    //constructores

    public Autor(String nombre, String email, char genero) {
        this.nombre = nombre;
        this.email = email;
        this.genero = genero;
    }

    public Autor() {
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public char getGenero() {
        return genero;
    }

    public void setGenero(char genero) {
        this.genero = genero;
    }
    public void agrega_autor( ArrayList ejemploLista2){
         System.out.println("ingrese el nombre");
         nombre = reader.nextLine();
         sc.nextLine();
         ejemploLista2.add(nombre);
          System.out.println("ingrese el email");
          email = reader.nextLine();
          sc.nextLine();
          ejemploLista2.add(email);
          System.out.println("ingrese el genero");
           genero = reader.next().charAt(genero);
           sc.nextLine();
          ejemploLista2.add(genero);
      
          
   }
     public void  mostrar_autor(ArrayList ejemploLista2){
          Iterator iter = ejemploLista2.iterator();
          System.out.println("");
          while (iter.hasNext())
          System.out.println(iter.next());
     }
     public void eliminar_Autor(ArrayList ejemploLista2, String nombre2, String email, char genero2 ){
         for (int i = 0; i <= ejemploLista2.size(); i++) {
             if(nombre.equals(nombre2)){
               ejemploLista2.remove(i);
             }
             else if(email.equals(nombre2)){
             ejemploLista2.remove(i);
             }
             else if(genero == genero2){
             ejemploLista2.remove(i);
             }
             
         }
     }

    void eliminar_Autor(ArrayList arrayList, String nombre2, String email2, IntStream genero) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
}
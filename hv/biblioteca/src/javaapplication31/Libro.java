package javaapplication31;

//clase libro

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Scanner;

public class Libro {
    //atributos
    private int isbn;
    private String nombreLibro;
    private int paginas;
contador_isbn contador= new contador_isbn();
Scanner reader = new Scanner(System.in);
    public Libro() {
    }

    public int getIsbn() {
        return isbn;
    }

    public void setIsbn(int isbn) {
        this.isbn = isbn;
    }

    public String getNombreLibro() {
        return nombreLibro;
    }

    public void setNombreLibro(String nombreLibro) {
        this.nombreLibro = nombreLibro;
    }

    public int getPaginas() {
        return paginas;
    }

    public void setPaginas(int paginas) {
        this.paginas = paginas;
    }

     public void agrega_libro( ArrayList ejemploLista){
         System.out.println("ingresando el ISBN porfavor espere...");
         isbn = contador_isbn.generarAleatorio(isbn);
         ejemploLista.add(isbn);
          System.out.println("ingrese el Nombre del libro");
          nombreLibro = reader.nextLine();
          ejemploLista.add(nombreLibro);
          System.out.println("ingrese el Numero de paginas");
           paginas = reader.nextInt();
          ejemploLista.add(paginas);
      
          
   }
     public void  mostrar_libro(ArrayList ejemploLista){
          Iterator iter = ejemploLista.iterator();
          System.out.println("");
          while (iter.hasNext())
          System.out.println(iter.next());
     }
     public void eliminar_libro(ArrayList ejemploLista, int isbn2, String nombre2, int paginas2 ){
         for (int i = 0; i <= ejemploLista.size(); i++) {
             if(isbn == isbn2){
               ejemploLista.remove(i);
             }
             else if(nombreLibro.equals(nombre2)){
             ejemploLista.remove(i);
             }
             else if(paginas == paginas2){
             ejemploLista.remove(i);
             }
             
         }
     }
}
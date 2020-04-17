
package javaapplication31;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.stream.IntStream;

public class JavaApplication31 {
    static Scanner sc = new Scanner (System.in);
    
    public static void main(String[] args) {
        Libro Libro=new Libro();
        Autor Autor = new Autor();
        List  ejemploLista = new ArrayList();
        List  ejemploLista2 = new ArrayList();
            int opcion = 0;
            do {
                System.out.println("1. Agregar libro");
                System.out.println("2. Agregar autor");
                System.out.println("3. Mostrar lista");
                System.out.println("4. Eliminar libro");
                System.out.println("5. eliminar un autor");
                System.out.println("6. Salir");

                System.out.println("Ingrese una opcion: ");
                opcion = sc.nextInt();

                switch (opcion) {
                    case 1:
                        Libro.agrega_libro((ArrayList) ejemploLista);
                        
                        break;
                    case 2:
                        Autor.agrega_autor((ArrayList) ejemploLista2);
                        break;
                    case 3:
                        Libro.mostrar_libro((ArrayList) ejemploLista);
                        Autor.mostrar_autor((ArrayList) ejemploLista2);        
                        break;
                    case 4:
                          System.out.println("ingrese el isbn");
                         int isbn = sc.nextInt();
                         sc.nextLine();
                         System.out.println("ingrese el nombre");
                         String nombre = sc.nextLine();
                        sc.nextLine();
                         System.out.println("ingrese el numero de paginas");
                         int paginas =sc.nextInt();
                        sc.nextLine();
                         Libro.eliminar_libro((ArrayList) ejemploLista, isbn, nombre, paginas);
                         
                        break;
                    case 5:
                        System.out.println("ingrese el nombre");
                         String nombre2 = sc.nextLine();
                          sc.nextLine();
                         System.out.println("ingrese el email");
                         String email2 = sc.nextLine();
                         sc.nextLine();
                         System.out.println("ingrese el numero de genero");
                         IntStream genero =sc.next().chars();
                         Autor.eliminar_Autor((ArrayList) ejemploLista, nombre2, email2, genero);
                         
                        break;
                    case 6:
                         System.exit(0);
                        break;
                    default:
                        System.out.println("Opcion no valida.");
                        break;
                }

            } while (opcion != 5);

           
    }
    
}

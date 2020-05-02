using System;

namespace CompraVideojuegos
{
    public class ConsolaJuegos
    {
        public static void comprarJuego(){
            Console.Write("Número de tarjeta: ");
            string numero = Console.ReadLine();
            try
            {
                if(Banco.realizarCompras(numero)){
                    Console.Write("Nombre del juego: ");
                    string juego = Console.ReadLine();
            
                    GestorArchivos.Anexar("Juegos.txt", juego);
            
                    Console.WriteLine("Juego comprado exitosamente!");
                }

            }
            catch (FormatException e)
            {
                Console.WriteLine("Digite un valor valido");
                throw;
            }
           
        }
    
        public static void jugar(){
            Console.Write("Nombre del juego: ");
            string juego = Console.ReadLine();
        
            if(GestorArchivos.Buscar("Juegos.txt", juego))
                Console.WriteLine("Listo para jugar!");
            else
                Console.WriteLine("Primero debe comprar el juego :(");
        }
    }
}
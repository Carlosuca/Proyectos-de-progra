using System;

namespace CompraVideojuegos
{
    public class Banco
    {
        public static void registrarTarjeta(){
            try
            {
                Console.Write("Número de tarjeta: ");
                string numero = Console.ReadLine();
                
                GestorArchivos.Anexar("Tarjetas.txt", numero);
                
                Console.WriteLine("Tarjeta creada exitosamente!");

            }
            catch (FormatException ex)
            {
                Console.WriteLine("Digite un valor valido para crear la tarjeta");
            }
                
        }
            
        public static void consultarTarjetas(){
            Console.WriteLine(GestorArchivos.Leer("Tarjetas.txt"));
        }
            
        public static bool realizarCompras(string tarjeta){
            return GestorArchivos.Buscar("Tarjetas.txt", tarjeta);
        }
    }
}
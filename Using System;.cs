Using System;

class program
{
   static Void Main(string [] args)
   {
        Random aleatorio = new Random();
        int valor = aleatorio.Next(1, 60);
        console.WriteLine ($"O valor foi {valor}");
    }
}    
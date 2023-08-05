using System;

namespace Dizzy
{
    internal class Dizzy
    {
        static void Main(string[] args)
        {
            string text = "T4 l16 _36 510 _27 s26 _11 320 414 {6 }39 C2 T0 m28 317 y35 d31 F1 m22 g19 d38 z34 423 l15 329 c12 ;37 19 h13 _30 F5 t7 C3 325 z33 _21 h8 n18 132 k24";
            string[] words = text.Split(' ');

            char[] answer = new char[40];
            
            void PrintFromArray(char[] arr)
            {
                Console.WriteLine(new string(arr));
            }

            foreach (string w in words)
            {
                char c = w[0];
                int index = int.Parse(w.Substring(1));
                answer[index] = c;
            }

            Console.WriteLine("Found the answer!");
            PrintFromArray(answer);
        }
    }
}

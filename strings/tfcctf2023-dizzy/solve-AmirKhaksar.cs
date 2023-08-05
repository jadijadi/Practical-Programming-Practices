/* Author: Amirkhaskar */ 
using System;

namespace Dizzy
{
    internal class Dizzy
    {
        static void Main(string[] args)
        {
            // Input string containing characters and their corresponding indices
            string text = "T4 l16 _36 510 _27 s26 _11 320 414 {6 }39 C2 T0 m28 317 y35 d31 F1 m22 g19 d38 z34 423 l15 329 c12 ;37 19 h13 _30 F5 t7 C3 325 z33 _21 h8 n18 132 k24";

            // Split the input string by spaces to get individual words
            string[] words = text.Split(' ');

            // Initialize an empty character array of size 40 to store the answer
            char[] answer = new char[40];

            // Function to print the character array as a string
            void PrintFromArray(char[] arr)
            {
                Console.WriteLine(new string(arr));
            }

            // Process each word in the 'words' array
            foreach (string w in words)
            {
                // Extract the character from the word (the first character)
                char c = w[0];

                // Extract the index from the word (the remaining characters) and convert it to an integer
                int index = int.Parse(w.Substring(1));

                // Store the character 'c' in the 'answer' array at the specified 'index'
                answer[index] = c;
            }

            // Output the message indicating that the answer has been found
            Console.WriteLine("Found the answer!");

            // Print the 'answer' array as a string
            PrintFromArray(answer);
        }
    }
}

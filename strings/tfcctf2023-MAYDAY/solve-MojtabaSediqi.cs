using System;
using System.Collections.Generic;

namespace MAYDAY
{
    internal class Program
    {
        // MAYDAY string challenge
        static void Main(string[] args)
        {
            // Dictionary of numbers to findout equal number of string
            var numbers = new Dictionary<string, string>()
            {
                {"Zero", "0"}, {"One", "1"}, {"Two", "2"}, {"Three", "3"}, {"Four", "4"}, {"Five", "5"},
                {"Six", "6"}, {"Seven", "7"}, {"Eight", "8"}, {"Nine", "9"}, {"Dash", "-"}
            };

            // Inpout text of practice
            string matchText = "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven";
           
            // split the input text to iterate and also a empty string variable for output
            string[] stringArray = matchText.Split(' ');
            string outputString = "";

            // Iterate into splitted string and checked if it is a number or a string, then concat them
            foreach(string i in stringArray) 
            {
                if (numbers.ContainsKey(i)) outputString += numbers[i];
                else outputString += i[0].ToString();
            }

            // Output
            Console.WriteLine(outputString);

            // Enjoy coding ;)
        }
    }
}

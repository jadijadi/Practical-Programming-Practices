import java.util.Arrays;
/*
 * NIMA BAHRAMI
 * COMPUTER SCIENCE STUDENT
 * THANKS JADI FOR SHARING THIS INTRESTING CODING CHALLANGE
 * I REALIZED WE DONT HAVE THE ANSWER IN JAVA, SO I DECIDED TO WRITE THE EQUAVILANT JAVA CODE
 * COULD'VE JUST PROVIDED THE METHOD, BUT WANTED TO MAKE IT EASIER IF SB IS INRESTED IN TESTING IT WITH 'MAIN' REAL QUICK!
 * BY THE WAY I FELT DIZZY AFTER SOLVING THIS LOL!
 */

public class NimaDizzy {

    public static String[] dizzySolution(String cryptoCode) {
        String[] splitCode = cryptoCode.split(" "); //split the string where see any 
        String[] finalAnswer = new String[splitCode.length]; 
    
        for (int i = 0; i < splitCode.length; i++) {
            String tempString = splitCode[i]; //store each section before "Space" into temporary variable
            String tempFirstChar = Character.toString(tempString.charAt(0));// split first char and store into temporary variable
            String tempSecondChar = tempString.substring(1);// stire the digit in another variable
            int tempSecondCharAsInt = Integer.parseInt(tempSecondChar); //parse the digit to integer
            finalAnswer[tempSecondCharAsInt] = tempFirstChar; //add string to array
        }

        return finalAnswer;
    }

    public static void main(String[] args) {
        String cryptoCode = "T4 l16 _36 510 _27 s26 _11 320 414 {6 }39 C2 T0 m28 317 y35 d31 F1 m22 g19 d38 z34 423 l15 329 c12 ;37 19 h13 _30 F5 t7 C3 325 z33 _21 h8 n18 132 k24";

        System.out.print(Arrays.toString(dizzySolution(cryptoCode)));
    }
}

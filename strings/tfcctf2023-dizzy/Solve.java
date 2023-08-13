public class Solve {
    public static void main(String[] args) {
        String input = "T4 l16 _36 510 _27 s26 _11 320 414 {6 }39 C2 T0 m28 317 y35 d31 F1 m22 g19 d38 z34 423 l15 329 c12 ;37 19 h13 _30 F5 t7 C3 325 z33 _21 h8 n18 132 k24";

        // split input to array of string, each element of this array contains a string including char and index
        String[] strings = input.split(" ");
        char[] resArr = new char[strings.length];

        // fill resArr, this array of characters includes all character of our cipher that placed in correct index
        for (String str : strings) {
            char ch = str.charAt(0);
            int index = Integer.parseInt(str.substring(1));
            resArr[index] = ch;
        }

        // convert array of characters into string, this string is our cipher
        String result = String.valueOf(resArr);
        System.out.println(result);
    }
}

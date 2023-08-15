import java.util.HashMap;

public class MayDay {

    public static void main(String[] args) {
        String text = "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven";

        String[] words = text.split(" ");
        HashMap<String, String> specials = new HashMap<String, String>();
        specials.put("Zero", "0");
        specials.put("One", "1");
        specials.put("Two", "2");
        specials.put("Three", "3");
        specials.put("Four", "4");
        specials.put("Five", "5");
        specials.put("Six", "6");
        specials.put("Seven", "7");
        specials.put("Eight", "8");
        specials.put("Nine", "9");
        specials.put("Dash", "-");

        for (String word : words) {
            if (specials.containsKey(word)) {
                System.out.print(specials.get(word));
            } else {
                System.out.print(word.charAt(0));
            }
        }
    }
}

import java.util.HashMap;
import java.util.Map;

public class solve_mozart {
	public static void main(String[] args) {
		String inputData = "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven";
		String[] splittedString = inputData.split(" ");
		
		//Use map as dictionary 
		Map<String,String> numbers = new HashMap<>();
		numbers.put("Four"	, "4");
		numbers.put("Three"	, "3");
		numbers.put("One"	, "1");
		numbers.put("Zero"	, "0");
		numbers.put("Seven"	, "7");
		numbers.put("Dash"	, "-");
		
		String resultFlag = "";
		for(String str : splittedString) {
			if(!numbers.containsKey(str)) {
				resultFlag += str.charAt(0);
			}
			else {
				resultFlag += numbers.get(str);
			}
		}
		System.out.println(resultFlag);
	}
}

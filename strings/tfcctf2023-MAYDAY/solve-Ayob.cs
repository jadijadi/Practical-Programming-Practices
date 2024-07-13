Dictionary<string, string> number = new Dictionary<string, string>()
{
    {"Zero","0" },
    {"One","1" },
    {"Two","2" },
    {"Three","3" },
    {"Four","4" },
    {"Five","5" },
    {"Six","6" },
    {"Seven","7" },
    {"Eight", "8"},
    {"Nine","9" },
    {"Dash","-" }
};

string str = "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven";
string[] split = str.Split(null);
string anwser = "";

foreach (var item in split)
{
    if (number.ContainsKey(item))
        anwser += number[item];
    else
        anwser += item[0];
}

Console.WriteLine(anwser);
Console.ReadLine();
#include <iostream>
#include <list>
#include <map>

struct code
{
    std::string key;
    char value;
};
int main()
{
    std::list<code> words = {
        {"One", '1'},
        {"Two", '2'},
        {"Three", '3'},
        {"Four", '4'},
        {"Five", '5'},
        {"Six", '6'},
        {"Seven", '7'},
        {"Eight", '8'},
        {"Nine", '9'},
        {"Zero", '0'},
        {"Dash", '-'},

    };

    std::string massage = "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash"
                          " Yankee Oscar Uniform Dash Sierra One November Kilo"
                          " India November Golf Dash Four Bravo Zero Uniform Seven";

    std::string decode_massage;

    // std::getline(std::cin, massage); // get custom message
    massage += " ";

    int last_index = 0;

    for (int i = 0; i < massage.length(); i++)
    {
        if (massage[i] == ' ')
        {
            std::string text = massage.substr(last_index, i - last_index);
            bool flag = false;
            for (code element : words)
            {
                if (element.key == text)
                {
                    decode_massage += element.value;
                    flag = true;
                }
            }
            if (!flag)
            {
                decode_massage += text[0];
            }
            last_index = i + 1;
        }
    }
    std::cout << decode_massage;
    return 0;
}
#include <iostream>
using namespace std;

const int RGB_HEX_LENGTH = 7;
 const char allowed_list [22] = ['A', 'a', 'b','B','C','c','D','d','E','e','F','f','0','1','2','3','4','5','6','7','8','9'];

int main(){
    std::string input;

    do{
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(cin, input);

        if( input.size() != RGB_HEX_LENGTH ){
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
        if(input[0] != '#')
        {
            std::cout << "Must start with a # for the color\n";
        }

    }while( input.size() != RGB_HEX_LENGTH );

    std::cout << "Your hex color is: " << input << std::endl;

    return 0;
}

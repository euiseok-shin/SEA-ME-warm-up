#include <iostream>
#include <string>
#include <algorithm>

// fuction that convert str to upper str
std::string ConvertUpper(const std::string &str){
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;

}
// fuction that convert str to lower str
std::string ConvertLower(const std::string &str){
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

int main(int argc, char *argv[]) {
    if (argc != 3 ){
        std::cerr << "follow the direction: ./convert {command} {string}" << std::endl;
        return 1;
    }
    
    std::string command = argv[1];
    std::string InputString = argv[2];
    std::string ResultString;

    if (command == "up"){
        ResultString = ConvertUpper(InputString);

    }
    else if (command == "down"){
        ResultString = ConvertLower(InputString);
    }
    else {
        std::cerr << "Invalid command. Use 'up' or 'down'." << std::endl;
        return 1;
    }
    std::cout << ResultString << std::endl;
    return 0;
    
    }

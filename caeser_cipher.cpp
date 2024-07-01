#include<bits/stdc++.h>
#include<limits>

std::string encrypt(std::string text, int key){
    std::string result = "";
    for(auto ch : text){
        if(ch == ' '){
            result += ch;
        }else if(std::isupper(ch)){
            result += char(int(ch+key-65)%26+65);
        }else{
            result += char(int(ch+key-97)%26+97);
        }
    }
    return result;
}
std::string decrypt(std::string text, int key){
    return encrypt(text, -key);
}
int main(){
    bool flag = true;
    std::string result,text;
    int key;
    while(flag){
        std::cout << "Enter the option" << std::endl;
        std::cout << "1.Encrypt the Message" << std::endl;
        std::cout << "2.Decrypt the Cipher" << std::endl;
        std::cout << "0.To Exit the program" << std::endl;
        int n; std::cin >> n;

        if(std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "Invalid input, Please enter a number.\n";
            continue;
        }
        switch(n){
            case 1:
                std::cout << "Enter the Message to be Encrypted:";
                std::cin.ignore();
                std::getline(std::cin,text);
                std::cout << "Enter the Shift Key Value:";
                std::cin >> key;

                if(std::cin.fail()){
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                    std::cout << "Invalid input, Please enter a number.\n";
                    flag = false;
                    continue;
                }
                result = encrypt(text,key);
                std::cout << result << std::endl;
                break;
            case 2:
                std::cout << "Enter the Cipher to decrypted:";
                std::cin.ignore();
                std::getline(std::cin,text);
                std::cout << "Enter the shift key value:";
                std::cin >> key;

                if(std::cin.fail()){
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                    std::cout << "Invalid input, Please enter a number.\n";
                    flag = false;
                    continue;
                }
                result = decrypt(text,key);
                std::cout << result << std::endl;
                break;
            case 0:
                std::cout << "Thanks For using the Program" << std::endl;
                flag = false;
                break;
            default:
            std::cout << "Enter the correct option" << std::endl;
        }
    }
    return 0;
}
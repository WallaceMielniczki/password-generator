#include <iostream>
#include <ctime>
#include <vector>
#include <cstring>

using namespace std;

int main(int argc, char *argv[]){

    srand(time(NULL));

    vector<char> password;
    vector<char> chars;

    vector<char> alpha = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
                          'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    vector<char> digit = {'0','1','2','3','4','5','6','7','8','9'};
    vector<char> punct = {'-','!','"','#','$','%','&','(',')','*','+','.','/',':',';','<','=','>','?','@','[',']','_','`','{','|','}','~',',','\''};

    for (int i = 0; i < argc; i++){
        if(!strcmp(argv[i], "-a")){
            chars.insert(chars.end(), alpha.begin(), alpha.end()); 

        }else if(!strcmp(argv[i], "-d")){
            chars.insert(chars.end(), digit.begin(), digit.end()); 

        }else if (!strcmp(argv[i], "-p")){
            chars.insert(chars.end(), punct.begin(), punct.end()); 
        }
    }

    for (int i = 0; i < atoi(argv[1]); i++) {
        password.push_back(chars[rand() % chars.size()]);
    }

    cout << "Your password is: ";
    for (int i = 0; i < password.size(); i++) {
        cout << password[i];
    }
    cout << endl;

    return 0;
}
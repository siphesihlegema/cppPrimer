#include <string>
#include <iostream>

using namespace std;

int main() {
    
    // 3.2.1 Defining and Initializing strings

    // i think i have a fair understanding of the different ways to define and initialise strings but...
    string s(10, 's');
    cout << s << "\n";
    
    // user input, with and without space
    string word;
    while(cin >> word) {
        cout << word << "\n";
        if (word == "bob") { 
            break;
        }
    }

    while (getline(cin, word)) {
        cout << word << "\n";
        if (word == "bob") { 
            break;
        }
    }

    // s.empy and s.size operationsa
    string hello;
    cin >> hello;
    if (!hello.empty())
        cout << hello << '\n';

    // we also have .size operator which i very usefull, we could use it in a lot of thins
    // like for loops while loops...

    // we can concatinate strings using + operand and also literals

    // Range based for loop
    string str("Hello world");
    for (char c: str)
        cout << c << '\n';

}

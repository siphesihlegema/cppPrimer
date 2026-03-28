#include <iostream>
#include <string>
#include <vector>

/* Iterator are basicaly raw pointers but for babies
 * they are cool and usefull because they save time
 * their sole perpose is to abstract away the technicalities of working with pointers
 * the overload pointer operators like (*, ++, !=)
 * they are mostly implimented in the standerd library 
 * a good exemple is with linked lists,
 * when you say i++, whats ectually happening is (current = current->next)
*/

int main() {
    std::string str("Hello world");
    std::vector<int> v1{1, 2, 3, 4, 5};

    for (auto it = str.begin(); it != str.end(); it++)
        std::cout << *it;
        std::cout << "\n";

    for (auto it = v1.begin(); it != v1.end(); it++) {
        *it *= 2;
    }

    for (auto it = v1.begin(); it != v1.end(); it++) {
        std::cout << *it << " ";
    } 
    std::cout << "\n";
}

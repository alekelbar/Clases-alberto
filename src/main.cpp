#include <iostream>
#include "./../include/solution1.hpp"
#include "./../include/solution2.hpp"
#include "./../include/test.hpp"
using namespace std;

int main()
{
    // Tester instance
    Tester<int> tester;
    // Test
    bool result = tester.expected(whiteSpaces("Hola mundo"), 1);
    // result
    std::cout << "\n*** Testing white spaces function..." << std::endl;
    std::cout << (result
                      ? "Prueba completadas exitosamente"
                      : "Prueba completadas con fallos")
              << std::endl;

    result = tester.expected(vowels("Hola mundo"), 4);
    std::cout << "\n*** Testing vowels function..." << std::endl;
    std::cout << (result
                      ? "Prueba completadas exitosamente"
                      : "Prueba completadas con fallos")
              << std::endl;
    return 0;
}

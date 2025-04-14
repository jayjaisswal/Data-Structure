#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    try {
        // Some code that may throw an exception
        throw runtime_error("An error occurred");
    } catch (const runtime_error &e) {
        cerr << "Caught an exception: " << e.what() << endl;
        // Rethrow the same exception
        throw;
    }

    cout << "This line will not be reached." << endl;
    return 0;
}
// #include <iostream>
// #include <stdexcept>

// int main() {
//     try {
//         // Some code that may throw an exception
//         throw std::runtime_error("An error occurred");
//     } catch (const std::runtime_error &e) {
//         std::cerr << "Caught an exception: " << e.what() << std::endl;
//         // Rethrow the same exception
//         throw;
//     }

//     std::cout << "This line will not be reached." << std::endl;
//  return 0;
// }
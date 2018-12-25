#include <iostream>
#include <vector>

int main() {
    try {
        std::string s = "ape";
        bool c = false;

        return 0;
    }
    catch (std::exception& e) {
        std::cerr << "error: " << e.what() << '\n';
        return 1;
    }
    catch (...) {
        std::cerr << "Oops: unknown exception!\n";
        return 2;
    }

}
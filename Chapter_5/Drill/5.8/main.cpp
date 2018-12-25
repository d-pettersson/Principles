#include <iostream>
#include <vector>

int main() {
    try {
        bool c = true;
        if (c)
            std::cout << "Success!\n";
        else
            std::cout << "Fail!\n";
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
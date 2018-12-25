#include <iostream>
#include <vector>

int main() {
    try {
        std::vector<int> v(10);
        v[5] = 5;
        if (v[5] != 7)
            std::cout << "Success!\n";
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
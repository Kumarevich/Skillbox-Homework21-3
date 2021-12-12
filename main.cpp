#include <iostream>
#include <cmath>

struct vec {
    float x;
    float y;
};
void add(vec vec1) {
    std::cout << "Input second vector coordinates (X, Y): ";
    vec vec2;
    std::cin >> vec2.x >> vec2.y;
    std::cout << "Result vector: (" << vec1.x + vec2.x << ", " << vec1.y + vec2.y << ")";
}

void subtract(vec vec1) {
    std::cout << "Input second vector coordinates (X, Y): ";
    vec vec2;
    std::cin >> vec2.x >> vec2.y;
    std::cout << "Result vector: (" << vec1.x - vec2.x << ", " << vec1.y - vec2.y << ")";
}

void scale(vec vec1) {
    std::cout << "Input scalar: ";
    int k;
    std::cin >> k;
    std::cout << "Result vector: (" << vec1.x * k << ", " << vec1.y * k << ")";
}

void length(vec vec1) {
    float result;
    result = sqrt(pow(vec1.x, 2) + pow(vec1.y, 2));
    std::cout << "Your vector length: " << result;
}

void normalize(vec vec1) {
    float length;
    length = sqrt(pow(vec1.x, 2) + pow(vec1.y, 2));
    std::cout << "Normalized vector: (" << vec1.x / length << ", " << vec1.y / length << ")";
}

int main()
{    
    vec vec1;
    std::string action;
    std::cout << "Input your vector coordinates (X, Y): ";
    std::cin >> vec1.x >> vec1.y;
    std::cout << "Which action do you want to do? (add; subtract; scale; length; normalize)";
    std::cin >> action;
    if (action == "add") {
        add(vec1);
    } else if (action == "subtract") {
        subtract(vec1);
    } else if (action == "scale") {
        scale(vec1);
    } else if (action == "length") {
        length(vec1);
    } else if (action == "normalize") {
        normalize(vec1);
    } else {
        std::cout << "Wrong input!";
    }
    return 0;
}

extern "C" {
    double calculateArea(double radius) {
        const double PI = 3.141592653589793;
        return PI * radius * radius;
    }

    double calculateCircumference(double radius) {
        const double PI = 3.141592653589793;
        return 2 * PI * radius;
    }
}

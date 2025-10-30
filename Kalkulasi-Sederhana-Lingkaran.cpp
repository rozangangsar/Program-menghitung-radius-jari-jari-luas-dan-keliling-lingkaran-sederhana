#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double PI = 3.1416;

// a. jarak 2 titik bidang Kartesius
double distance(double x1, double y1, double x2, double y2) {
    return hypot(x2 - x1, y2 - y1); // √((x2-x1)^2 + (y2-y1)^2)
}

// b, radius dari pusat (cx,cy) dan titik pada lingkaran (px,py)
double radius(double cx, double cy, double px, double py) {
    return distance(cx, cy, px, py);
}

// c. keliling lingkaran
double circumference(double r) {
    return 2.0 * PI * r;
}

// d. luas lingkaran
double area(double r) {
    return PI * r * r;
}

int main() {
    cout << "=== Perhitungan Lingkaran dari titik tengah dan titik pada lingkaran ===\n";
    double cx, cy, px, py;

    cout << "Masukkan pusat (cx cy): ";
    cin  >> cx >> cy;
    cout << "Masukkan titik pada lingkaran (px py): ";
    cin  >> px >> py;

    double r = radius(cx, cy, px, py);
    double d = 2.0 * r;
    double c = circumference(r);
    double a = area(r);

    cout << fixed << setprecision(4);
    cout << "\nHasil:\n";
    cout << "Radius (r)       : " << r << '\n';
    cout << "Diameter (2r)    : " << d << '\n';
    cout << "Circumference    : " << c << '\n';
    cout << "Area             : " << a << '\n';
    return 0;
}

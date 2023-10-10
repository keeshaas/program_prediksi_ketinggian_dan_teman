#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int t;
    int s;
    double v;
    double sinA;
    
    cout << "Masukkan nilai t : " ;
    cin >> t;
    cout << "Masukkan nilai s : " ;
    cin >> s;
    cout << "Masukkan nilai v : " ;
    cin >> v;
    sinA = sin((double) (s * 22) / 7 / 180);
    t = (int) (pow(v, 2) * pow(sinA, 2) / 20);
    cout << "Prediksi ketinggian yang dicapai : " ;
    cout << t << endl;
    return 0;
}



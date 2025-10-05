#include <iostream>
using namespace std;

string getLight(int t) {
    int green = 20;
    int yellow = 3;
    int red = 80;
    int cycle = green + yellow + red; // 103 detik

    // sgeser "awal siklus" ke 45 - green = 25
    int startCycle = 25;

    // Posisi dalam siklus
    int pos = (t - startCycle) % cycle;
    if (pos < 0) pos += cycle; // jaga-jaga kalau negatif

    if (pos < green) return "Hijau";
    else if (pos < green + yellow) return "Kuning";
    else return "Merah";
}

int main() {
    int times[] = {80, 85, 150, 212};
    int n = 4;

    for (int i = 0; i < n; i++) {
        cout << "Detik ke-" << times[i] 
             << " : " << getLight(times[i]) << endl;
    }
    return 0;
}

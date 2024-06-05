#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct MerchF1 { //Pointer
    string Team;
    int stock;
};

void Bajuu(MerchF1* Kaos1, int n) {
    for (int i = 0; i < n; ++i) {
        cout << i + 1 << ". Team: " << Kaos1[i].Team << ", Stock: " << Kaos1[i].stock << endl;
    }
}

bool KaosF1(const MerchF1& a, const MerchF1& b) {
    return a.Team < b.Team;
}

int binarySearch(const MerchF1* Kaos2, int l, int r, const string& team) { //Searching Algo
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (Kaos2[mid].Team == team)
            return mid;
        if (Kaos2[mid].Team < team)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

int main() {
    const int numShirts = 3;
    MerchF1 Merch[numShirts] = {
        {"Mercedes", 10}, {"Ferrari", 10}, {"Red Bull Racing", 10}
    };

    sort(Merch, Merch + numShirts, KaosF1); //Sorting Algo

    char Answer;
    do {
        cout << "Daftar Baju Formula 1:" << endl;
        Bajuu(Merch, numShirts);

        int Choice;
        cout << "\nPilih nomor tim Formula 1 yang Anda inginkan: ";
        cin >> Choice;

        int QTTY;
        cout << "Masukkan jumlah baju yang ingin Anda beli: ";
        cin >> QTTY;

        Merch[Choice - 1].stock -= QTTY;

        cout << "\nApakah ingin melanjutkan pembelian? (y/n): ";
        cin >> Answer;
        cout << endl;
        
    } while (Answer == 'y' || Answer == 'Y');

    return 0;
}

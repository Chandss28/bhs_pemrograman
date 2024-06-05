#include <iostream>
using namespace std;

int main() {
    int Pilihan1, Pilihan2, quantity;
    double total = 0.0;

    do {
        cout << "Menu:\n";
        cout << "1. Makanan\n";
        cout << "2. Minuman\n";
        cout << "3. Exit\n";
        cout << "Pilih menu: ";
        cin >> Pilihan1;
        cout << "\n";
		system("CLS");
        

        switch (Pilihan1) {
            case 1:
                cout << "Menu Makanan:\n";
                cout << "1. Pecel - Rp15,000\n";
                cout << "2. Nasi - Rp5,000\n";
                cout << "3. Kembali\n";
                cout << "Pilih menu makanan: ";
                cin >> Pilihan2;
                cout << "\n";
				system("CLS");
        
                if (Pilihan2 == 1 || Pilihan2 == 2) {
                    cout << "Masukkan jumlah yang ingin dipesan: ";
                    cin >> quantity;
                }
                switch (Pilihan2) {
                    case 1:
                        total += quantity * 15000.0; // Harga pecel per porsi
                        break;
                    case 2:
                        total += quantity * 5000.0; // Harga nasi per porsi
                        break;
                    case 3:
                        break;
                    default:
                        cout << "Menu tidak valid!\n";
                        break;
                }
                break;
            case 2:
                cout << "Menu Minuman:\n";
                cout << "1. Teh - Rp5000\n";
                cout << "2. Jeruk - Rp10,000\n";
                cout << "3. Kembali\n";
                cout << "Pilih menu minuman: ";
                cin >> Pilihan2;
                cout << "\n";
				system("CLS");
        
                if (Pilihan2 == 1 || Pilihan2 == 2) {
                    cout << "Masukkan jumlah yang ingin dipesan: ";
                    cin >> quantity;
                }
                switch (Pilihan2) {
                    case 1:
                        total += quantity * 5000.0; // Harga teh per gelas
                        break;
                    case 2:
                        total += quantity * 10000.0; // Harga kopi per gelas
                        break;
                    case 3:
                        break;
                    default:
                        cout << "Menu tidak valid!\n";
                        break;
                }
                break;
            case 3:
                std::cout << "Have a simply lovely day >_<\n";
                break;
            default:
                cout << "Menu tidak valid!\n";
                break;
        }

        cout << endl;
    } while (Pilihan1 != 3);

    cout << "Total pembayaran: Rp" << total << endl;

    return 0;
}

#include <iostream>

int main() {
    // Mendeklarasikan array yang berisi 5 elemen bertipe integer
    int arr[5];

    // Mengisi elemen-elemen array dengan nilai
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    // Mencetak nilai elemen-elemen array
    std::cout << "Elemen array:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }

    return 0;
}

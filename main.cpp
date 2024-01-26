/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <unistd.h>

void typeText(const std::string& text) {
    for (char c : text) {
        std::cout << c << std::flush;
        usleep(100000); 
    }
}

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main() {
    std::string nama;
    std::string umurStr;

    std::cout << "Masukkan nama Anda: ";
    std::getline(std::cin, nama);

    std::cout << "Masukkan umur Anda: ";
    std::getline(std::cin, umurStr);

    int umur = std::stoi(umurStr);

    clearScreen();

    std::cout << "================================================================\n"
              << "  _    _\n"
              << " | |  | |\n"
              << " | || |  _ _   _   _   _\n"
              << " |  __  |/ _ | '_ \\| '_ \\| | | |\n"
              << " | |  | | (_| | |_) | |_) | |_| |\n"
              << " |_|  |_|\\,_| ./| ./ \\, |\n"
              << "              | |   | |     __/ |\n"
              << "              |_|   |_|    |___/\n"
              << "                    ____  _      _   _         _\n"
              << "                   |  _ \\(_)    | | | |       | |\n"
              << "                   | |_) |_ _ | |_| |   | |  _ _   _\n"
              << "                   |  _ <| | '| | '_ \\ / _ |/ _` | | | |\n"
              << "                   | |_) | | |  | |_| | | | (_| | (_| | |_| |\n"
              << "                   |__/|_|_|   \\|_| |_|\\,_|\\,_|\\__, |\n"
              << "                                                        __/ |\n"
              << "                                                       |___/\n"
              << "================================================================\n\n"
              << "===========================Happy-Birthday========================\n\n";

    std::string happyBirthdayText =
        "Happy birthday! Wish you all the best, Sayang.\n"
        "Aku harap kamu jauh lebih baik dan jauh lebih kuat dari yang kemarin.\n"
        "Yang tadinya kamu ngga bisa, sekarang kamu mestinya bisa kan? Buat sampai ke tujuan kamu.\n"
        "You are great. Stay with you, ya? Tetap bertahan seperti ini, \n"
        "jangan runtuhkan diri kamu dengan omongan orang-orang yang jahat.\n"
        "Happy birthdayyy " + nama + "\n";

    typeText(happyBirthdayText);

    std::cout << "\n================================================================\n";
    std::cout << "Tekan Enter....\n";
    std::cin.ignore(); 

    for (int i = 1; i <= umur; ++i) {
        std::cout << "Selamat Ulang Tahun!!!! " + nama + "\n";
        usleep(500000); 
    }

    return 0;
}
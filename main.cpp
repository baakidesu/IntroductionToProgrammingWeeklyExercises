#include <iostream>
#include <windows.h> // WinAPI işlevleri için
#include <thread>    // sleep_for için
#include <chrono>    // zaman işlemleri için

void bilgisayariKapat() {
    // Sistem komutuyla bilgisayarı kapat
    system("shutdown /s /f /t 0");
}

int main() {
    int saat, dakika, secim;

    // Bilgisayarın kapanıp kapanmayacağını sor
    std::cout << "Bilgisayar kapansin mi? (Evet icin 1, Hayir icin 0 girin): ";
    std::cin >> secim;

    // Kullanıcıdan kaç saat ve dakika sonra işlem yapılacağını al
    std::cout << "Kac saat sonra F1 tusuna basilsin? ";
    std::cin >> saat;
    std::cout << "Kac dakika sonra F1 tusuna basilsin? ";
    std::cin >> dakika;

    // Toplam bekleme süresini hesapla (saniye cinsinden)
    int toplamBekleme = (saat * 3600) + (dakika * 60);

    // Bekleme süresini kullanıcıya bildir
    std::cout << saat << " saat ve " << dakika << " dakika sonra F1 tusuna basilacak." << std::endl;

    // Bekleme süresini uygula
    std::this_thread::sleep_for(std::chrono::seconds(toplamBekleme));

    // F1 tuşuna basmak için INPUT yapısını kullan
    INPUT input = {0};
    input.type = INPUT_KEYBOARD;
    input.ki.wVk = VK_F1; // F1 tuşunun sanal kodu

    // F1 tuşuna bas
    std::cout << "F1 tusuna basiliyor..." << std::endl;
    SendInput(1, &input, sizeof(INPUT));

    // F1 tuşunu bırak
    input.ki.dwFlags = KEYEVENTF_KEYUP; // Tuşu bırakma durumu
    SendInput(1, &input, sizeof(INPUT));

    std::cout << "F1 tusuna basildi." << std::endl;

    if (secim == 1) {
        // 1 dakika beklemeden bilgisayarı kapat
        std::cout << "1 dakika bekleniyor, ardindan bilgisayar kapatilacak..." << std::endl;
        std::this_thread::sleep_for(std::chrono::minutes(1));
        std::cout << "Bilgisayar kapatiliyor..." << std::endl;
        bilgisayariKapat();
    } else {
        std::cout << "Bilgisayar kapatilmayacak." << std::endl;
    }

    return 0;
}

#include <iostream>

struct box {
    char manufacturer[40];
    float height;
    float width;
    float length;
    float volume;
};

void showBox(box smallBox);
void setBoxVolume(box * smallBox);

int main() {
    box smallBox = {"Kamil Paradowski", 21.37, 4.76, 3.14, 3.22};
    std::cout << "Oryginalne pudełko wygląda następująco:\n\n";
    showBox(smallBox);
    setBoxVolume(&smallBox);
    std::cout << "\nPudełko po zmianie objętośći wygląda teraz tak:\n\n";
    showBox(smallBox);
}

void showBox(box smallBox) {
    std::cout << "Nazwa producenta: " << smallBox.manufacturer << std::endl;
    std::cout << "Wysokość pudełka: " << smallBox.height << std::endl;
    std::cout << "Szerokość pudełka: " << smallBox.width << std::endl;
    std::cout << "Długość pudełka: " << smallBox.length << std::endl;
    std::cout << "Objętość pudełka: " << smallBox.volume << std::endl;
}

void setBoxVolume(box * smallBox) {
    smallBox->volume = smallBox->height * smallBox->width * smallBox->length;
}

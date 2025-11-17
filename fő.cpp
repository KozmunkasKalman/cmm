#include "cé_meg_meg.h"

űr nyomtat(szabvány::fonal szöveg) {
  szabvány::kimenet << szöveg << szabvány::sorvég;
}

egész fő(egész argc, karakter* argv[]) {
  hogyha (argc != 2){
    szabvány::hiba << "Nem jauh!" << szabvány::sorvég;
    visszatér 1;
  } különben ha (argc == 2) {
    szabvány::karakterfonal szöveg = argv[1];
    nyomtat(szöveg);
    visszatér 0;
  } különben {
    szabvány::hiba << "Irgum burgum, ez meg hogyan sikerülik?" << szabvány::sorvég;
    visszatér 2;
  }
}

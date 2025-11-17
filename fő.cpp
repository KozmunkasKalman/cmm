#include "c_meg_meg.h"

űr nyomtat(szabvány::fonal szöveg) {
  szabvány::kimenet << szöveg << szabvány::sorvég;
}

egész fő(egész argc, karakter* argv[]) {
  hogyha (argc != 2){
    szabvány::hiba << "Még iss mi az faszot csinálol?" << szabvány::sorvég;
    visszatér 1;
  } különben ha (argc == 2) {
    szabvány::karakterfonal szöveg = argv[1];
    nyomtat(szöveg);
    visszatér 0;
  } különben {
    szabvány::hiba << "Dikh, mán he, szitty more, sógór, ez meg hogy sikerült?" << szabvány::sorvég;
    visszatér 2;
  }
}

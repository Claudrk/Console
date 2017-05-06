/*
 * Pruebas de consola
 */

#include "main.h"
#include <iostream>
using std::cout;
using std::endl;
#include <conio.h>
#include <time.h>

/* Funcion inicio() */
void inicio(){
  cout << "************************************" << endl
    << "*                                  *" << endl
    << "*            __      __            *" << endl
    << "*           /  \\    /  \\           *" << endl
    << "*          /    \\  /    \\          *" << endl
    << "*          \\     \\/     /          *" << endl
    << "*           \\          /           *" << endl
    << "*            \\        /            *" << endl
    << "*             \\      /             *" << endl
    << "*              \\    /              *" << endl
    << "*               \\  /               *" << endl
    << "*                \\/                *" << endl
    << "*                                  *" << endl
    << "************************************" << endl
    << " Presione una tecla para continuar  " << endl;
  int animation = 0;
  while (!kbhit()){
    console::getInstance()->setCursor(11, false);
    switch (animation){
      case 0:
        console::getInstance()->setCursorPosition(19, 16);
        cout << "/\\" << endl;
        console::getInstance()->setCursorPosition(19, 17);
        cout << "  " << endl;
        break;
      case 1:
        console::getInstance()->setCursorPosition(19, 16);
        cout << " \\" << endl;
        console::getInstance()->setCursorPosition(19, 17);
        cout << " /" << endl;
        break;
      case 2:
        console::getInstance()->setCursorPosition(19, 16);
        cout << "  " << endl;
        console::getInstance()->setCursorPosition(19, 17);
        cout << "\\/" << endl;
        break;
      case 3:
        console::getInstance()->setCursorPosition(19, 16);
        cout << "/ " << endl;
        console::getInstance()->setCursorPosition(19, 17);
        cout << "\\ " << endl;
        break;
      default:
        break;
    }
    animation += 1;
    if (animation >= 4) animation = 0;
    reloj::getInstance()->delay_ms(1000);
  }
}


/* Funcion inicial
 * @param argc Cantidad de argumentos
 * @param **argv Puntero a los argumentos
 * @return Codigo de salida
 */
int main(int argc, char** argv) {
  console::getInstance()->setTitle("Prueba");
  inicio();

  return 0;
}


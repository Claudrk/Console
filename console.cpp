/*
 * Funciones de manejo de la consola
 */

#include "console.hpp"

console* console::_instance = NULL;

console* console::getInstance(){
  if(_instance == NULL){
    _instance = new console();
  }
  return _instance;
}

console::~console() {
}

console* console::setTitle(string in){
  SetConsoleTitle(in.c_str());
  return _instance;
}

console* console::setCursorPosition(short x, short y){
  COORD dwPos;
  dwPos.X = x;
  dwPos.Y = y;
  SetConsoleCursorPosition(_hcon, dwPos);
  return _instance;
}

console* console::setCursor(long size, bool visible){
  if ((size < 1) || (size > 100)){
    return _instance;
  }
  CONSOLE_CURSOR_INFO cursorInfo;
  cursorInfo.dwSize = size;
  cursorInfo.bVisible = visible;
  return _instance;
}

console::console() {
  _hcon = GetStdHandle(STD_OUTPUT_HANDLE);
}

console::console(const console& orig) {
}

/* Declaracion de la clase clock */
reloj* reloj::_instance = NULL;

reloj* reloj::getInstance(){
  if(_instance == NULL){
    _instance = new reloj();
  }
  return _instance;
}

reloj::~reloj(){
  
}

reloj* reloj::delay_ms(int tiempo){
  clock_t inicio = clock();
  clock_t termino;
  while (termino < tiempo){
    termino = clock() - inicio;
  }
  return _instance;
}

reloj::reloj(){
  
}

reloj::reloj(const reloj& orig) {
  
}

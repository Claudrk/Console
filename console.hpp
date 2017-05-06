/*
 * clase de manejo de la consola
 */

#ifndef CONSOLE_HPP
#define CONSOLE_HPP
#include <windows.h>
#include <string>
using std::string;
#include <time.h>

class console {
public:
  static console* getInstance();
  virtual ~console();
  console* setTitle(string title);
  console* setCursorPosition(short x, short y);
  console* setCursor(long size, bool visible);
private:
  console();
  console(const console& orig);
  static console* _instance;
  HANDLE _hcon;
};

class reloj {
public:
  static reloj* getInstance();
  virtual ~reloj();
  reloj* delay_ms(int tiempo);
private:
  reloj();
  reloj(const reloj& orig);
  static reloj* _instance;
};

#endif /* CONSOLE_HPP */


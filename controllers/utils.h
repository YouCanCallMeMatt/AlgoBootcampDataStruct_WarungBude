#include "./headers.h"

const char *detectOS() {
    #ifdef _WIN32
      return "Windows 32-bit";
    #elif _WIN64
      return "Windows 64-bit";
    #elif __APPLE__ || __MACH__
      return "Mac OSX";
    #elif __linux__
      return "Linux";
    #elif __FreeBSD__
      return "FreeBSD";
    #elif __unix || __unix__
      return "Unix";
    #else
      return "Other";
    #endif
}

void outputLocalTime() {
  time_t localtime;
  time(&localtime);
  printf("%s", ctime(&localtime));
}

void clearScreen() {
  system("@cls||clear");
}

void petc() {
  printf("Press enter to continue...");
  getchar();
}

void sleep() {
  for (int i = 0; i < 1000000000000; i++) {
    ;
  }
}
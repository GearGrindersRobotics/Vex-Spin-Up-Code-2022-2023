
#include <vex.h> // Sorry I had to do it. :(
// Doesn't really matter though because everyone using this is going to be using vex.h

  typedef char *string;
  void printlnColored(string args, color c);
  void printColored(string args, color c);
  void printAtColored(int x, int y, bool opaque, string args, color c);
  void kill(thread current_thread);

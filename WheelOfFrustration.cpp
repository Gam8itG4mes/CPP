#include <iostream>
#include <stdio.h>

int main() {
  fputs("\e[?25l", stdout); /*hide the cursor*/

  std::cout << "INITIALIZING LIST ";
  std::cout << "\033[4;18H"; /*set cursor to line 4 column 18*/

  for(int i = 0; i < 125000; ++i)
  { 
    std::cout << "(|)";
    std::cout << "\033[4;18H";/*set cursor to line 4 column 18*/
    std::cout << "\033[0K"; /*Clear from cursor to end of line*/
    
    std::cout << "(/)";
    std::cout << "\033[4;18H";/*set cursor to line 4 column 18*/
    std::cout << "\033[0K";/*Clear from cursor to end of line*/
    
    std::cout << "(-)";
    std::cout << "\033[4;18H";/*set cursor to line 4 column 18*/
    std::cout << "\033[0K";/*Clear from cursor to end of line*/
    
    std::cout << "(\\)";
    std::cout << "\033[4;18H";/*set cursor to line 4 column 18*/
    std::cout << "\033[0K";/*Clear from cursor to end of line*/
  
  }
  fputs("\e[?25h", stdout); /* show the cursor */
  return 0;
}
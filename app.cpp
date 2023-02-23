#include <iostream>
#include "profile.hpp"

int main() {
 

  Profile sam ("Pam Drakkila", 30, "New York", "USA", "he/him");

  sam.add_hobby("listening to audiobooks and podcast");
  sam.add_hobby("playing rec sports like bowling and kickball");
  sam.add_hobby("writing a speculative fiction novell");
  sam.add_hobby("reading advice columnsl");

  

 std::cout << sam.view_profile();
}

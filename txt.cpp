
// C++ program to replace to replace spaces with %20 for querystring building 
  
#include <cstring> 
#include <iostream>
#include <string> 
using namespace std; 
  
int main() 
{ 
  
    // Get the String
    std::string num, msg;

   std::cout << "Number plz: ";
   std::getline(std::cin, num);

   std::cout << "msg plz: ";
   std::getline(std::cin, msg);
 
    
  
    // Traverse the string character by character. 
    for (int i = 0; i < msg.length(); ++i) { 
  
        // Changing the ith character 
        // to '-' if it's a space. 
        if (msg[i] == ' ') { 
  
            msg[i] = "%20"; 
        } 
    } 
  
    // Print the modified string.
    cout << num << endl; 
    cout << msg << endl; 
  
    return 0; 
} 


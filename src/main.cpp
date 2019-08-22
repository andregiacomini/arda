#include <string>
#include <stdio.h>
#include <iostream>
#include <memory>

#include "Character.h"

int main(){
	std::unique_ptr<Character> god(new Character("Eru"));
	std::string temp;
	
	temp = god->getName();
	std::cout << temp;
}
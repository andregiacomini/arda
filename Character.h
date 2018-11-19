#ifndef CHARACTER_H_
#define CHARACTER_H_

class Character {
	std::string name;
	public:
	  Character (std::string __name ) : name(__name) {};
	  std::string getName() {return name;};
};

#endif

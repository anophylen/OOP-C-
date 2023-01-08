#include <iostream>

class promoted {
public:
	virtual void promotedToHigherRank() = 0;
};

class Player:promoted {
private:
	std::string nickname;
	std::string skill;
	int level;
public:
	void promotedToHigherRank() {
		if (level >= 1 && level <= 10) {
			std::cout << nickname << " got promoted to Silver!"<<std::endl;
		}
		if (level >= 11 && level <= 20) {
			std::cout << nickname << " got promoted to Gold!" << std::endl;
		}
		if (level >= 21 && level <= 30) {
			std::cout << nickname << " got promoted to Platinum!" << std::endl;
		}
		if (level >= 31 && level <= 40) {
			std::cout << nickname << " got promoted to Diamond!" << std::endl;
		}
		if (level >= 41 && level <= 50) {
			std::cout << nickname << " got promoted to Ascendant!" << std::endl;
		}
		if (level >= 51 && level <= 70) {
			std::cout << nickname << " got promoted to Immortal!" << std::endl;
		}
		if (level >= 71 && level <= 100) {
			std::cout << nickname << " got promoted to Radiant!" << std::endl;
		}
	}
	Player(std::string Nick, std::string Skill, int Level) {
		nickname = Nick;
		skill = Skill;
		level = Level;
	}
};
class GameMaster:promoted {
private:
	std::string nickname;
	std::string skill = "super power";
	int level = 999;
public:
	void promotedToHigherRank() {
		std::cout << nickname << " has becoming Game Master";
	}
	GameMaster(std::string Nick) {
		nickname = Nick;
	}
};

int main() {
	Player ano = Player("anophylen", "bow", 67);
	Player nao = Player("deadmanx", "guns", 99);
	Player svernikh = Player("svernikh", "power punch", 56);
	Player blaxy = Player("blaxy", "calling a black guy", 79);

	GameMaster xylinz = GameMaster("xylinz");

	ano.promotedToHigherRank();
	nao.promotedToHigherRank();
	svernikh.promotedToHigherRank();
	blaxy.promotedToHigherRank();

	xylinz.promotedToHigherRank();
}
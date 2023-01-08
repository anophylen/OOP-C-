#include <iostream>

class FavMusic {
private:
	std::string name;
	std::string artist;
	std::string genre;
	int score;
public:
	//setter and getter
	void setName(std::string Name) {
		name = Name;
	}
	std::string getName() {
		return name;
	}
	void setArtist(std::string Artist) {
		artist = Artist;
	}
	std::string getArtist() {
		return artist;
	}
	void setGenre(std::string Genre) {
		genre = Genre;
	}
	std::string getGenre() {
		return genre;
	}
	void setScore(int Score) {
		score = Score;
	}
	int getScore() {
		return score;
	}
	
	void show() {
		std::cout << "Music name: " << name << std::endl;
		std::cout << "Music artist: " << artist << std::endl;
		std::cout << "Music genre: " << genre << std::endl;
		std::cout << "Music score: " << score << std::endl<< std::endl;
	}
	FavMusic(std::string Mname, std::string Martist, std::string Mgenre, int Mscore) {
		name = Mname;
		artist = Martist;
		genre = Mgenre;
		score = Mscore;
	}
};

int main() {
	FavMusic akhdan = FavMusic("Cancer", "MCR", "EMO", 10); akhdan.show();
	FavMusic john = FavMusic("Stand By Me", "Ben E.King", "old song", 9); john.show();
	FavMusic koala = FavMusic("December", "NeckDeep", "EMO", 10); koala.show();

	akhdan.setName("i don't love you");
	std::cout << akhdan.getName() << " - " << akhdan.getArtist() << " - " << akhdan.getGenre() << " - " << akhdan.getScore();
}
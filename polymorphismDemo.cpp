#include <iostream>
using std::string;

class Employee {
private: //cuma bisa diakses di dalem class
	int age;
protected: //bisa diakses di dalem class sama anak" class nya
	string name;
public: //bisa diakses dimana aja
	void setName(string Name) {
		name = Name;
	}
	string getName() {
		return name;
	}
	void setAge(int Age) {
		age = Age;
	}
	int getAge() {
		return age;
	}

	Employee(string Name, int Age) {
		name = Name;
		age = Age;
	}

	void Age() {
		std::cout << name << " is " << age << " yo" << std::endl;
	}

	virtual void Skill() {
		std::cout << name << " developing startup alone";
	}
};

class developer :public Employee { //default Employee class = private, makanya dijadiin public biar bisa ngakses method dari Employee class
private:
	string FavLang;
public:
	void setLang(string lang) {
		FavLang = lang;
	}
	string getLang() {
		return FavLang;
	}
	developer(string Name, int Age, string lang)
		:Employee(Name, Age)
	{
		FavLang = lang;
	}
	void Skill() {
		std::cout << name << " is fixing bug with " << FavLang << std::endl;
	}
};

class UIDesign :public Employee { //public Employee
private:
	string FavTools;
public:
	void setTools(string tools) {
		FavTools = tools;
	}
	string getTools() {
		return FavTools;
	}
	UIDesign(string name, int age, string tools)
		:Employee(name, age)
	{
		FavTools = tools;
	}
	void Skill() {
		std::cout << name << " is designing a character using " << FavTools << std::endl;
	}
};

class CyberSec :public Employee { //private Employee
private:
	string LinuxDistro;
public:
	void setLinux(string linux) {
		LinuxDistro = linux;
	}
	string GetLinux() {
		return LinuxDistro;
	}
	CyberSec(string name, int age, string linux)
		:Employee(name, age)
	{
		LinuxDistro = linux;
	}
	void Skill() {
		std::cout << getName() << " is searching vulnerabilities using " << LinuxDistro << std::endl;
	}
};

int main() {
	developer akhdan = developer("akhdan", 18, "C++");
	UIDesign ujang = UIDesign("ujang", 19, "Blender");
	CyberSec xylinz = CyberSec("xylinz", 15, "Kali Linux");

	Employee* e1 = &akhdan;
	Employee* e2 = &ujang;
	Employee* e3 = &xylinz;
	
	e1->Skill();
	e2->Skill();
	e3->Skill();
}
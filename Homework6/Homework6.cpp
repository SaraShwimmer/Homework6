// Homework6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

//Задание 1

/*Создать программу, которая считывает целое число типа int. И поставить «защиту от дурака»:
если пользователь вводит что-то кроме одного целочисленного значения, нужно вывести сообщение
об ошибке и предложить ввести число еще раз. Пример неправильных введенных строк:
rbtrb
nj34njkn
1n*/



void Task1() {

	int number;
	while (true)
	{
		cout << "Enter number: ";
		cin >> number;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Oops, try again!" << endl;
			continue;
		}
		break;
	}
	cout << "Your number - " << number << endl;
}

//Задание 2

/*Создать собственный манипулятор endll для стандартного потока вывода, который выводит
два перевода строки и сбрасывает буфер.*/

ostream& endll(ostream& os) {
	os << '\n' << '\n';
	os.flush();
	return os;
}

void Task2() {
	cout << "This is" << endll;
	cout << "second task" << endll;;

}
int main()
{
	cout << "Task 1 \n\n";
	Task1();
	cout << "\nTask 2 \n\n";
	Task2();
}

//Задание 3

/*
class Player : public GenericPlayer {

public:
	Player(const string& name = " ");
	virtual ~Player();
	//Проверка на продолжение игры
	virtual bool IsHitting() const;
	//объявление победы
	void Win() const;
	//объявление проигрыша
	void Lose() const;
	//объявляют ничью
	void Push() const;

};

Player::Player(const string& name) :
	GenericPlayer(name)
{}
Player::~Player()
{}
bool Player::IsHitting() const {
	cout << m_name << ", do u want a hit? (Y/N): ";
	char response;
	cin >> response;
	return (response == 'y' || response == 'Y');
}
void Player::Win() const {
	cout << m_name << "wins.\n";
}
void Player::Lose() const {
	cout << m_name << "loses.\n";
}
void Player::Push() const {
	cout << m_name << "pushes.\n";
}
*/
//Задание 4

/*Реализовать класс House, который представляет дилера. Этот класс наследует от класса GenericPlayer.
У него есть 2 метода:
virtual bool IsHitting() const - метод указывает, нужна ли дилеру еще одна карта.
Если у дилера не больше 16 очков, то он берет еще одну карту.
void FlipFirstCard() - метод переворачивает первую карту дилера.*/

/*
class House : public GenericPlayer {
public:
	House(const string& name = "House");
	virtual ~House();
	//Проверка будет ли игрок брать карты
	virtual bool IsHitting()const;
	//переворачивает первую карту
	void FlipFirstCard();
};

House::House(const string& name) :
	GenericPlayer(name) {
}
House::~House() {
}
bool House::IsHitting()const {
	return (GetTotal() <= 16);
}
void House::FlipFirstCard() {
	if (!(m_card.empty()))
		m_card[0]->Flip();

	else
		cout << "No card to flip!\n";
}
*/

//Задание 5

/* Написать перегрузку оператора вывода для класса Card. Если карта перевернута рубашкой вверх
(мы ее не видим), вывести ХХ, если мы ее видим, вывести масть и номинал карты.
Также для класса GenericPlayer написать перегрузку оператора вывода,
который должен отображать имя игрока и его карты, а также общую сумму очков его карт.*/

/*
ostream& operator<<(ostream& os, const Card& aCard) {
	const string RANKS[] = { "0", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
	const string SUITS[] = { "c", "d", "h", "s" };
	if (aCard.m_isFaceUp)
		os << RANKS[aCard.m_rank] << SUITS[aCard.m_suit];
	else
		os << "XX";
	return os;
}

ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer) {
	os << aGenericPlayer.m_name << ":\t";
	vector <Card*>::const_iterator pCard;
	if (!aGenericPlayer.m_cards.empty()) {
		for (pCard = aGenericPlayer.m_cards.begin();
			pCard != aGenericPlayer.m_cards.end();
			++pCard) {
			os << *(*pCard) << "\t";
		}
		if (aGenericPlayer.GetTotal() != 0) {
			cout << "(" << aGenericPlayer.GetTotal() << ")";
		}
	}
	else
		os << "<empty>";
	return os;

}
*/
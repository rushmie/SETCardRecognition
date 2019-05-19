// SETGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <vector>
using namespace std;

enum Shades { stripe, solid, empty };
enum Colors { red, purple, green };
enum Shapes { diamond, squiggle, oval };

const int NUM_ATTRIBUTES = 4;

struct Card {
	int attr[4];
};

struct SET {
	Card aset[3];
};

void printCard(Card card) {

	Shades shade = Shades(card.attr[0]);
	Colors color = Colors(card.attr[1]);
	int num = card.attr[2];
	Shapes shape = Shapes(card.attr[3]);
	for (int i = 0; i < NUM_ATTRIBUTES; i++) {
		cout << card.attr[i] << " ";
	}
	cout << endl;
}

void printSet(SET set) {
	cout << endl;
	for (int i = 0; i < 3; i++) {
		printCard(set.aset[i]);
	}
	cout << endl;
}

void makeCardFile(int numCards) {
	ofstream ostream("cards.txt");
	srand(time(NULL));
	if (ostream.is_open()) {
		for (int i = 0; i < numCards; i++) {
			Shades shade = Shades(rand() % 3);
			Colors color = Colors(rand() % 3);
			Shapes shape = Shapes(rand() % 3);
			int num = rand() % 3;

			ostream << shade << "," << color << "," << shape << "," << num << endl;
		}

	}

}

//Read in cards and store in vector of int arrays
vector<Card> readCards() {
	string shade, color, num, shape;
	int ishade, icolor, inum, ishape;
	vector<Card> cards;
	ifstream infile("cards.txt");
	if (infile.is_open()) {
		while (getline(infile, shade, ',')) {
			getline(infile, color, ',');
			getline(infile, num, ',');
			getline(infile, shape, '\n');

			ishade = atoi(shade.c_str());
			icolor = atoi(color.c_str());
			inum = atoi(num.c_str());
			ishape = atoi(shape.c_str());

			Card card;
			card.attr[0] = ishade;
			card.attr[1] = icolor;
			card.attr[2] = inum;
			card.attr[3] = ishape;

			printCard(card);

			cards.push_back(card);

		}
	}

	return cards;
}

bool checkAttr(Card card1, Card card2, Card card3, int a) {
	if ((card1.attr[a] == card2.attr[a] && card2.attr[a] == card3.attr[a]) ||
		(card1.attr[a] != card2.attr[a] && card2.attr[a] != card3.attr[a] && card1.attr[a] != card3.attr[a])) {
		return true;
	}
	else {
		return false;
	}
}

bool isSet(Card card1, Card card2, Card card3) {
	for (int i = 0; i < NUM_ATTRIBUTES; i++) {
		if (checkAttr(card1, card2, card3, i)) {
			continue;
		}
		else {
			return false;
		}
	}
}

vector<SET> findSet(vector<Card> cards) {
	vector<SET> sets;
	//cout << cards.size();
	for (int i = 0; i < cards.size(); i++) {
		for (int j = i + 1; j < cards.size(); j++) {
			for (int k = j + 1; k < cards.size(); k++) {
				if (isSet(cards[i], cards[j], cards[k])) {
					SET set;
					set.aset[0] = cards[i];
					set.aset[1] = cards[j];
					set.aset[2] = cards[k];

					cout << i << j << k << endl;

					sets.push_back(set);
				}
			}
		}
	}
	return sets;
}

int main()
{
	//makeCardFile(12);
	vector<Card> cards = readCards();
	vector<SET> sets = findSet(cards);

	for (int i = 0; i < sets.size(); i++) {
		printSet(sets[i]);
	}
	
    return 0;
}


#pragma once
#include <SFML\Window.hpp>
#include <SFML\Graphics.hpp>
#include "ProcessText.h"
using namespace std;

/**
* Klasa reprezentująca wiadomość wysłaną przez użytkownika
* do programu
*/
class Question : public ProcessText
{
public:

	/**
	* Wektor słów zawartych w wiadomości
	*/
	vector<string> words;

	/**
	* Konstruktor bezargumentowy
	*/
	Question() = default;

	/**
	* Konstruktor 
	* @param toTokenize
	*/
	Question(string toTokenize);

	/**
	* Wypisz przechowywane wyrazy
	*/
	void printTokens();
};

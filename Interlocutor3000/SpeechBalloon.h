#pragma once
#include <SFML\Window.hpp>
#include <SFML\Graphics.hpp>
#include "ContainText.h"
#include "SettingsContainer.h"

/**
* Enum do odróżniania czy
* dany dymek jest lewo- czu prawostronny
*/
enum class Dir
{
	Left, Right
};

/**
* Klasa reprezentująca dymek czatu
*/
class SpeechBalloon : public ContainText
{
	/**
	* Tekstura dymku
	*/
	sf::Texture balloonTexture;

	/**
	* Obiekt klasy sprite będący
	* graficzną reprezentacją dymku
	*/
	sf::Sprite balloonSprite;
public:

	/**
	* Konstruktor
	* @param position pozycja dymku
	* @param mySpeech tekst do wyświetlenia w dymku
	* @param nazwa pliku z teksturą
	*/
	SpeechBalloon(sf::Vector2f position,sf::String mySpeech, const char* textureFile);

	/**
	* fillBallooon
	* @param written tekst do wyświetlenia w dymku
	* @param startPos pozycja początkowa tekstu
	*/
	void fillBalloon(sf::String written, sf::Vector2f startPos);

	/**
	* Metoda służacą do wyrysowania obiektu
	* @param target obiekt na którym ma być narysowany obiekt
	* @param state stan obiektu do narysowania
	*/
	void draw(sf::RenderTarget& window, sf::RenderStates state)const;
};
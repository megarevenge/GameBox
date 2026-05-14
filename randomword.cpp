#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include <ctime>


using namespace std;

void createWordsFile()
{
    ifstream checkFile("words.txt");

    if (checkFile.is_open())
    {
        checkFile.close();
        return;
    }

    ofstream file("words.txt");

    file <<
        "APPLE\n"
        "GRAPE\n"
        "TABLE\n"
        "CHAIR\n"
        "SMILE\n"
        "BREAD\n"
        "STONE\n"
        "LIGHT\n"
        "MOUSE\n"
        "WATER\n"
        "PLANT\n"
        "GREEN\n"
        "BROWN\n"
        "BLACK\n"
        "WHITE\n"
        "HOUSE\n"
        "HAPPY\n"
        "LAUGH\n"
        "WORLD\n"
        "DREAM\n"
        "OCEAN\n"
        "RIVER\n"
        "CLOUD\n"
        "STORM\n"
        "FLAME\n"
        "EARTH\n"
        "HEART\n"
        "PIANO\n"
        "MUSIC\n"
        "DANCE\n"
        "SUGAR\n"
        "SWEET\n"
        "SALAD\n"
        "PIZZA\n"
        "JUICE\n"
        "MANGO\n"
        "PEACH\n"
        "MELON\n"
        "BERRY\n"
        "LEMON\n"
        "CANDY\n"
        "ZEBRA\n"
        "TIGER\n"
        "HORSE\n"
        "SHEEP\n"
        "EAGLE\n"
        "SHARK\n"
        "SNAKE\n"
        "WHALE\n"
        "CROWN\n"
        "SWORD\n"
        "SHIELD\n"
        "ROBOT\n"
        "ALIEN\n"
        "SPACE\n"
        "VENUS\n"
        "EARTH\n"
        "TOWER\n"
        "BEACH\n"
        "HOTEL\n"
        "TRAIN\n"
        "TRUCK\n"
        "PLANE\n"
        "BRUSH\n"
        "PAINT\n"
        "COLOR\n"
        "PHOTO\n"
        "VIDEO\n"
        "RADIO\n"
        "PHONE\n"
        "WATCH\n"
        "CLOCK\n"
        "MONEY\n"
        "COINS\n"
        "BANKS\n"
        "SHIRT\n"
        "PANTS\n"
        "SHOES\n"
        "SOCKS\n"
        "GLOVE\n"
        "DRINK\n"
        "SNACK\n"
        "SLEEP\n"
        "AWAKE\n"
        "SOUND\n"
        "VOICE\n"
        "QUIET\n"
        "MAGIC\n"
        "WITCH\n"
        "GHOST\n"
        "ANGEL\n"
        "DEVIL\n"
        "CABIN\n"
        "WOODS\n"
        "FIELD\n"
        "GRASS\n"
        "BLOOM\n"
        "TULIP\n"
        "ROSES\n"
        "CAMEL\n"
        "PANDA\n"
        "KOALA\n"
        "RAVEN\n";

    file.close();
}

string getRandomWord()
{
    ifstream file("words.txt");

    vector<string> words;
    string word;

    while (file >> word)
    {
        words.push_back(word);
    }

    file.close();

    int index = rand() % words.size();

    return words[index];
}



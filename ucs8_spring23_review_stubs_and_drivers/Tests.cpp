//
// Created by Dave R. Smith on 1/12/23.
//

#include "Tests.h"
#include "Hangman.h"

void testWord() {
    Word word;
    word.setString("apple");
    //show dashes
    std::cout << word << std::endl;
    word.replaceDash('p');
    std::cout << word << std::endl;

}
void wordBankDriver()
{
    Wordbank wordbank("words.txt");
    char ans;
    do
    {
        while(wordbank.hasWords())
        {
            try
            {
                std::cout << wordbank.getWord() << std::endl;
            }
            catch(NoWordException e)
            {
                std::cout << e.what();
            }
        }
        int num;
        std::cout << "How many words would you like to enter? ";
        std::cin >> num;
        std::cin.ignore();
        for(int i=0; i<num; i++)
        {
            std::string word;
            std::cout << "Enter word: ";
            getline(std::cin, word);
//            std::cin.ignore();
            wordbank.addWord(word);
        }

        std::cout << "go again?" << std::endl;
        std::cin >> ans;
    }
    while(tolower(ans) != 'n');
}

void testBoard()
{
    Visuals board;
    for(int i = 1; i < 7; i++)
    {
        std::cout << board;
        board.updateBoard(i);
    }



}

void testGame()
{
    Opening opening;
    opening.menu();
}

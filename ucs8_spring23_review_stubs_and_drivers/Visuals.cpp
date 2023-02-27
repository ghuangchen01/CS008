//
// Created by Dave R. Smith on 1/10/23.
//

#include "Visuals.h"

void Visuals::updateBoard(int accuracy)
{
    switch (accuracy)
    {
        case 1:
            board[30] = 'O';
            break;
        case 2:
            board[44] = '|';
            break;
        case 3:
            board[43] = '/';
            break;
        case 4:
            board[45] = '\\';
            break;
        case 5:
            board[57]= '/';
            break;
        case 6:
            board[59] = '\\';
            break;
        default:
            break;
    }
}

std::ostream &operator<<(std::ostream &os, const Visuals &visual)
{
    os << visual.board;
    return os;
}
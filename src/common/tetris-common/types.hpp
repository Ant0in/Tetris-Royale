#pragma once

#include <vector>

struct Position2D {
    int x;
    int y;
};

enum PieceType {
    O,
    L,
    J,
    I,
    Z,
    S,
    T,
    Single
};

enum Action {
    None,
    MoveLeft,
    MoveRight,
    MoveDown,
    RotateLeft,
    RotateRight,
    InstantFall,
    UseBag,
    Malus,
    Bonus
};

enum TypePowerUps {
    inverted_command,
    block_command,
    thunder_strike,
    fast_falling_pieces,
    darkMode,
    
    blocs_1x1,
    slow_falling_pieces
};

std::vector<TypePowerUps> malusVector = {block_command, inverted_command, thunder_strike, darkMode};
std::vector<TypePowerUps> bonusVector = {blocs_1x1, slow_falling_pieces};

// test avec inverseCommand : rajouter les autres malus une fois le reste implementé
// fast_falling_piece

using tetroMat = std::vector<std::vector<int>>;
using pieceVec = std::vector<PieceType>;
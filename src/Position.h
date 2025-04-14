#ifndef POSITION
#define POSITION

#include<string>

#include"CommonTypes.h"

class Position {
    
    public:

    static const int total_squares = 64;
    static const int total_piece_types = 12;

    enum PIECE_TYPE {
        BLACK_PAWN,
        BLACK_KNIGHT,
        BLACK_BISHOP,
        BLACK_ROOK,
        BLACK_QUEEN,
        BLACK_KING,
        WHITE_PAWN,
        WHITE_KNIGHT,
        WHITE_BISHOP,
        WHITE_ROOK,
        WHITE_QUEEN,
        WHITE_KING
    };

    private:

    ull pieces_bitboard[total_piece_types];
    int pieces_count[total_piece_types];
    bool white_turn;
    byte castle_rights;
    ull passant_target;
    byte half_moves;
    int full_moves;

    public:

    Position(std::string _fen);

    private:

    void ClearBoard();
    void ParseFen(std::string _fen);

};

#endif
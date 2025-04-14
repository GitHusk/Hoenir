#ifndef MOVE
#define MOVE

#include<string>

#include"CommonTypes.h"

class Move {
    
    private:
    
    byte moved_piece;
    byte captured_piece;
    byte promoted_piece;
    ull move_from;
    ull move_to;
    byte previous_castle_rights;
    ull previous_passant_target;
    byte previous_half_moves;
    
    public:

Move(
        const byte& _moved_piece, 
        const byte& _captured_piece,
        const byte& _promoted_piece,
        const ull& _move_from,
        const ull& _move_to,
        const byte& _previous_castle_rights,
        const ull _previous_passant_target,
        const byte& _previous_half_moves
    );
    
    byte GetMovedPiece();
    byte GetCapturedPiece();
    byte GetPromotedPiece();
    ull GetMoveFrom();
    ull GetMoveTo();
    byte GetPreviousCastleRights();
    ull GetPreviousPassantTarget();
    byte GetPreviousHalfMoves();

    std::string ToString(); 
};

#endif
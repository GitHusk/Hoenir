#include"Move.h"

Move::Move(
        const byte& _moved_piece, 
        const byte& _captured_piece,
        const byte& _promoted_piece,
        const ull& _move_from,
        const ull& _move_to,
        const byte& _previous_castle_rights,
        const ull _previous_passant_target,
        const byte& _previous_half_moves
    ) {
        moved_piece = _moved_piece;
        captured_piece = _captured_piece;
        promoted_piece = _promoted_piece;
        move_from = _move_from;
        move_to = _move_to;
        previous_castle_rights = _previous_castle_rights;
        previous_passant_target = _previous_passant_target;
        previous_half_moves = _previous_half_moves;
    }

byte Move::GetMovedPiece() {
    return moved_piece;
}

byte Move::GetCapturedPiece() {
    return captured_piece;
}

byte Move::GetPromotedPiece() {
    return promoted_piece;
}

ull Move::GetMoveFrom() {
    return move_from;
}

ull Move::GetMoveTo() {
    return move_to;
}

byte Move::GetPreviousCastleRights() {
    return previous_castle_rights;
}

ull Move::GetPreviousPassantTarget() {
    return previous_passant_target;
}

byte Move::GetPreviousHalfMoves() {
    return previous_half_moves;
}
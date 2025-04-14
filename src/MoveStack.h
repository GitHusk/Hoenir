#ifndef MOVESTACK
#define MOVESTACK

#include<string>

#include"CommonTypes.h"
#include"Move.h"

class MoveStack {

    public:
    static const int MAX_MOVES_POSITION = 218;
    static const int MAX_MOVES_FULL_GAME = 1200;

    private:
    
    Move* list;
    int length;
    int max_length;

    public:

    MoveStack();
    MoveStack(int _max_length);

    ~MoveStack();

    int GetLength() const;
    int GetMaxLength() const;
    void Add(
        const byte& _moved_piece, 
        const byte& _captured_piece,
        const byte& _promoted_piece,
        const ull& _move_from,
        const ull& _move_to,
        const byte& _previous_castle_rights,
        const ull _previous_passant_target,
        const byte& _previous_half_moves
   );

   void Add(const Move& _move);
   Move* Get(int in_index);
   Move* Peak();
   Move* Pop();
   void Remove(int in_remove_length);

   std::string ToString();

};

#endif
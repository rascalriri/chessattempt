#include <iostream>
#include <string>

using namespace std;

class Square
{
public:
   enum status;
{
none, 
white,
black
};
  enum piecetype;  // ID would look like [index](status, piecetype) = [i](0,0) 
{none, 
pawn, 
knight, 
bishop, 
queen, 
king, 
rook, 
pikeman,  
fanatic, 
skeleton,
hero
};

void board(){
Square Squares[64];
for (i = 0; i < 16; i++); // setting white and black//
Squares[i].status = 1
  
for (i = 48; i < 64; i++);
Squares[i].status = 2

for (i = 8; i < 16; i++);
Squares[i].
  // set square value of starting position 


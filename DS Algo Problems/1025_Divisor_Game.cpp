/*1025. Divisor Game


Alice and Bob take turns playing a game, with Alice starting first.

Initially, there is a number n on the chalkboard. On each player's turn, that player makes a move consisting of:

Choosing any x with 0 < x < n and n % x == 0.
Replacing the number n on the chalkboard with n - x.
Also, if a player cannot make a move, they lose the game.

Return true if and only if Alice wins the game, assuming both players play optimally.

 

Example 1:

Input: n = 2
Output: true
Explanation: Alice chooses 1, and Bob has no more moves.
Example 2:

Input: n = 3
Output: false

*/

//Explanation: Alice chooses 1, Bob chooses 1, and Alice has no more moves.
// the first move the player will take optimally is 1
// alice starts the game first, let's take alice's move as 0 and bob's move as 1
// this while loop will continue switching between alice and bob as long as there is a possible move
// it will break if the player is unable to make any more moves, if bob is the last player (i.e. 1)
// it will return 1 since alice has won
// if alice is the last player and breaks out of the loop, it will return 0 since alice has lost
		
		
//code::			
		
class Solution {
public:
    bool divisorGame(int n) {
     return n%2==0;
    }
};

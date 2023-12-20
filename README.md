Dice Game Project
Overview
This C++ project implements a simple dice game involving a stack and a queue. Players take turns rolling dice, and their scores are calculated based on the outcomes of the dice rolls. The game uses a stack to keep track of player scores, and a queue to simulate the rolling of dice.

Classes
1. node
Represents a node in the stack.
Each node contains the player's name, score, and a pointer to the next node.
Provides methods for setting and getting the name, score, and next node.
2. stack
Represents a stack data structure for managing player scores.
Keeps track of the number of elements (noe), the head of the stack (head), and the maximum size (size).
Provides methods for checking if the stack is empty or full, pushing a new node onto the stack, and popping a node from the stack.
3. queue
Represents a circular queue data structure for simulating dice rolls.
Keeps track of the number of elements (noe), front and rear indices, the number of dice faces (nov_d), and an array (arr) to store dice values.
Provides methods for checking if the queue is empty or full, enqueuing a new dice value, dequeuing a dice value, and getting a random dice value.
Main Functionality
Initialization:

The user inputs the number of players (n_o_p) and the total number of faces on the dice (n).
Dice Game:

Each player takes turns rolling the dice.
The game uses a queue to simulate the rolling of dice for each player.
The player's score is calculated based on the sum of the dice values.
The player's name and score are pushed onto the stack.
Results Display:

After all players have taken their turns, the stack is popped to display each player's name and score.
Usage
Compile and run the C++ program.
Enter the number of players and the total number of faces on the dice.
Follow the prompts to input player names and play the game.
The program will display the results, showing each player's name and score.
Note
This project is a console-based dice game, and it serves as a basic demonstration of using a stack and a queue in a C++ program.
It includes error checks for full or empty stack/queue scenarios.

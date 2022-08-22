# push_swap

### [C]

### Sorting algorithm of two stacks

In this project, I had to make a algoritim to sort a set of numbers using two stacks `A` and `B` with limited moves. All numbers are on stack `A` at the begining of the program. 

The average number of moves for 500 numbers was 5350 - 5600 moves. To get a full 100/100 grade, the algorithm sould allways perform under 5500 moves.

## Allowed moves

- **sa** (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.

- **sb** (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.

- **ss** : sa and sb at the same time.

- **pa** (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.

- **pb** (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.

- **ra** (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one.

- **rb** (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one.

- **rr** : ra and rb at the same time.

- **rra** (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.

- **rrb** (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.

- **rrr** : rra and rrb at the same time.

## Usage

Build the program using `make all`. Lauch the program `push_swap` with the set of numbers as arguments.

You can also visualise the algorithm with `python3 pyviz.py $(ruby -e "puts (-200..200).to_a.shuffle.join(' ')"\)`

## Gained skills

Sorting algorithim knowledge.

![alt text](https://i.imgur.com/nJWji6W.png "Final grade 97/100")

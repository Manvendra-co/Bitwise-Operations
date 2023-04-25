# Bitwise-Operation
The bitwise operators are the operators used to perform the operations on the data at the bit-level. When we perform the bitwise operations, then it is also known as bit-level programming. It consists of two digits, either 0 or 1. It is mainly used in numerical computations to make the calculations faster.
![image](https://user-images.githubusercontent.com/76811184/234400455-13bed6df-9d01-4670-9d7b-66c677770547.png)

# Bitwise AND operator
Bitwise AND operator is denoted by the single ampersand sign (&). Two integer operands are written on both sides of the (&) operator. If the corresponding bits of both the operands are 1, then the output of the bitwise AND operation is 1; otherwise, the output would be 0.

# Bitwise OR operator
The bitwise OR operator is represented by a single vertical sign (|). Two integer operands are written on both sides of the (|) symbol. If the bit value of any of the operand is 1, then the output would be 1, otherwise 0.

# Bitwise exclusive OR operator
Bitwise exclusive OR operator is denoted by (^) symbol. Two operands are written on both sides of the exclusive OR operator. If the corresponding bit of any of the operand is 1 then the output would be 1, otherwise 0.

# Bitwise shift operators
Two types of bitwise shift operators exist in C programming. The bitwise shift operators will shift the bits either on the left-side or right-side. Therefore, we can say that the bitwise shift operator is divided into two categories:

Left-shift operator 

Right-shift operator



--Left-shift operator--

It is an operator that shifts the number of bits to the left-side.

Syntax of the left-shift operator is given below:

Operand << n  

Where,

Operand is an integer expression on which we apply the left-shift operation.

n is the number of bits to be shifted.


--Right-shift operator--

It is an operator that shifts the number of bits to the right side.

Syntax of the right-shift operator is given below:

Operand >> n;  

Where,

Operand is an integer expression on which we apply the right-shift operation.

N is the number of bits to be shifted.


In the case of the right-shift operator, 'n' bits will be shifted on the right-side. The 'n' bits on the right-side will be popped out, and 'n' bits on the left-side are filled with 0.

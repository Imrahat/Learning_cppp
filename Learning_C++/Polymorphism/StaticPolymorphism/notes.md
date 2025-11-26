Types of Operator Overloading
Operator overloading can be implemented in two main ways:
1. Based on HOW operators are overloaded
  1. Member Function Overloading
The operator is overloaded as a member function of the class. The left operand becomes the current object (this pointer).

  2. Non-Member (Friend) Function Overloading
The operator is overloaded as a standalone function, often declared as a friend to access private members.

2. Based on the TYPE of operator overloaded
  1. Unary Operator Overloading

Only one operand.

Examples:

++ (increment)

-- (decrement)

- (negation)

! (not)

~ (bitwise not)

Unary operators don't take parameter

  2. Binary Operator Overloading

Works on two operands.

Examples:

+ - * /

< > == !=

& | ^

<< >>

Binary operators require:Member function (1 parameter) and Friend function (2 parameters)




--Which Operators Can Be Overloaded?--

✅ Overloadable Operators
Most operators can be overloaded. Here are the main categories:

1. Arithmetic Operators
+, -, *, /, %

++ (prefix and postfix), -- (prefix and postfix)

2. Comparison/Relational Operators
==, !=, <, >, <=, >=

3. Assignment Operators
=, +=, -=, *=, /=, %=

4. Bitwise Operators
&, |, ^, ~, <<, >>

5. Subscript and Function Call
[] (subscript)

() (function call)

6. Memory Management (C++)
new, new[], delete, delete[]

7. Other
<<, >> (stream insertion/extraction)

-> (member access)

, (comma)

& (address-of)

* (dereference)

❌ Operators That CANNOT Be Overloaded
1. Scope Resolution Operator
:: (Cannot be overloaded)

2. Member Access/Dereference Operators
. (dot operator)

.* (pointer to member)

3. Ternary Conditional Operator
?: (Cannot be overloaded)

4. sizeof Operator
sizeof (Cannot be overloaded)

5. Type Identification
typeid (C++) (Cannot be overloaded)

6. Preprocessor Operators
# (stringizing)

## (token pasting)
# Topic  - INTRODUCTION TO RECURSION

- `Recursion` is a process in which a function calls itself directly or indirectly using helper function and the corresponding function/helper function is called a recursive function.

![Screenshot 2023-11-10 230959](https://github.com/teche74/Daily-Programming-Challenges/assets/129526047/a3264ab6-e484-4d8b-b394-35214c68f652)

## `Direct Recursion`
- `Direct Recursion` is the type of recursion in which a function directly calls itself within its own block of code.

## Advantages and Disadvantages of Direct Recursion

| **Advantages of Direct Recursion** | **Disadvantages of Direct Recursion** |
|------------------------------------|--------------------------------------|
| Simplicity in writing and understanding functions | Difficulty in debugging due to large call stack |
| Clear definition of base case and recursive case within the same function | Increased complexity in tracing function execution |
| Potential for improved efficiency by avoiding additional function calls | Memory consumption concerns if recursion is not terminated properly |

## `Indirect Recursion`

- `Indirect Recursion` is a type of recursion in which function calls another function which then calls the first function again.
- The recursion ends when the base case is met, at this point, the process stops.

## `Advantages and Disadvantages of Indirect Recursion`

| **Advantages of Indirect Recursion** | **Disadvantages of Indirect Recursion** |
|--------------------------------------|----------------------------------------|
| Easier to understand and debug, as base case and recursive case are in separate functions | More complex to write and understand, as logic is split between two functions |
| Potential for improved efficiency by allowing a more modular structure | Increased memory consumption in some cases due to additional function calls |
|                                      | Need for careful evaluation of complexity, efficiency, and modularity in decision-making |



## `Differences Between Direct and Indirect Recursion`

| **Basis for Comparison**                     | **Direct Recursion**                                   | **Indirect Recursion**                                 |
|----------------------------------------------|--------------------------------------------------------|--------------------------------------------------------|
| **Mode of handling base/recursive case**     | The base case and the recursive case are defined within the same function. | The base case and the recursive case are defined in separate functions. |
| **Initiation of recursion**                  | Recursion is initiated by the function calling itself directly within its own body. | Recursion is initiated by one function calling another function, which then calls the first function again. |
| **Advantage**                                | Simplicity and efficiency                               | Modularity and ease of debugging                         |




## `Things Must Know ..`

- `Recursion` is used in case when bigger and complex Problem is given and we can solve it by using small problem of same type.

![image](https://github.com/teche74/Daily-Programming-Challenges/assets/129526047/e0dfd059-9acf-4558-ba3d-62a92cf05f41)

- `Misconception : ` What we think is, In recursion our focus is to make problem smaller , which is not our primary task.

## Understanding Flow of Recursion
  - Make Input smaller ? Why ?
  - When Use Recursion (Indetify ) ?
  - Recursive Tree (Most Important).
  - Steps to Solve any Recursion Problem.


### `Why Input Smaller 😲💭💭`

- First thing We have to know that is we never make input smaller, it automattically gets smaller. We never intentionally and despirately make input smaller.

**What we actually do ??**

![image](https://github.com/teche74/Daily-Programming-Challenges/assets/129526047/95a8c966-4933-43ac-9a00-30bd041ca23c)

**`Overall our main focus is to make correct decison, and based on those decisions our imput get smaller...`**


### `How To Identify When To use Recursion ?`

- Whenever our problem statement revolves around taking `decision or choices taking codition`. Best approach is to use `Recursion`.

![image](https://github.com/teche74/Daily-Programming-Challenges/assets/129526047/74f1aa7d-b337-4f83-b2ed-b3a8d9a6125a)



### `Recursive Tree 🌳. What it is and Why we are focusing on it 🎓`

- `Recursive Tree` is used for manual design of recursion problem conditions to make decision taking conditions easier.
- How Actually to tackle a Problem is  :  `Read Problem Statement` ---> `Create Recursive Tree` ---> `Code it out`.


- There are multiple Ways of creating Decisive Tree.

- Using Input/Output Method.
  - We create tree for each possible decision we can make on the basis of node. Our node has two parts `input`( Current input ) and `output`(Current Output).
  - Lets think of it using Subset problem (Suppose a string is Given a you have to  print out all the subsets of the given string).
    - If You think of it , then you might get that you have a statement where you had to make some choices and decison which satifies the codition of `Recursion`.
    - However Decision Tree for this Problem might be bigger and complex for larger inputs but for just an intution idea of how to create it, I had figured it for you below for input **"abcd"** . 

<image src = "https://github.com/teche74/Daily-Programming-Challenges/assets/129526047/b6db5f99-26c5-40c6-990a-85837612660f" height =500 width = 1000>

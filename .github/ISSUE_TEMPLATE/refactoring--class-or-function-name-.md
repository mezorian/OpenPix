---
name: Refactoring <CLASS-OR-FUNCTION-NAME>
about: Refactoring documentation and programming style of <CLASS-OR-FUNCTION-NAME>
  based on the rules of docs/CPP_Styleguide.md
title: ''
labels: documentation
assignees: ''

---

# Refactoring <CLASS-OR-FUNCTION-NAME>
Please ensure that <CLASS-OR-FUNCTION-NAME> matches all requirements from the style-guide which can be found in the following check-list.

## Naming of identifiers
- [ ] Identifiers have to depend on the purpose the variable, function, constant, ... has to serve. Always choose a longer identifier, which describes the purpose better, than a short and easy to use identifier that does not show the clear purpose.
- [ ] Every new word in an identifier, except for the first, is starting with a capital letter (except for names of constants).
- [ ] Identifiers never contain a _ , except for the very last letter in parameters (and except for names of constants).
- [ ] Names of functions, variables, and parameters always start with a small letter
- [ ] Names of Classes, Enums, Structs, Contructors and Destructors always start with a capital letter
- [ ] Parameters do always end with a _
- [ ] Every letter of a name of a constant is capital, every word is seperated by a _

## Functions
- [ ] Functions are ordered by use.
- [ ] The structure of order has two layers. The first layer is encapsulated by block-comments ** /* --- layer1 --- */ ** . The second layer is started by line-comments ** // layer 1.1 **
- [ ] The ordering of the functions in the header file and the sources-file are the same
- [ ] getters and setters are always the very last functions

## Declaration and implementation
- [ ] Every class, with all its functions and attributes is declared in a header-file
- [ ] All functions except for getters and setters must be implemented in a *.cpp - file
- [ ] If structs and constants do not directly belong to a class define them in the Types.h - file

## OOP (object - oriented - programming)
- [ ] Every class attribute must be private, do only use public class attributes if you have a really good reason for doing this
- [ ] Class attributes are only read and modified by getters and setters. No private class attribute is read or modified directly
- [ ] Every function, that is used only within the class has to be private

## Documentation
- [ ] Every file is documented by a ccDoc - comment (=java-doc) at the beginning of the file 
- [ ] Every class is documented by a ccDoc - comment (=java-doc) directly in front of the declaration of the class in the header-file 
- [ ] Every function is documented by a ccDoc - comment (=java-doc) directly in front of the implementation of the function.
- [ ] The code has to be documented by inline-comments. Use as much documentation as possible. But do not write more documentation than code.

## Testing
- [ ] Every function needs a Unit-Test.
- [ ] Every bug needs a Unit-Test.

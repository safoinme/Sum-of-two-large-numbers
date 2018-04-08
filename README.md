# Sum-of-two-large-numbers
C Program To Sum Two Large Number the two numbers given as string
# why this program
C is a powerful programmin language but there is shortcoming , and one of it is in mathematics operation 
c can not deal with very large numbers so this program can add two huge numbers by given as strings not as
integer or float and thene turned into integer as result of the sum .
# how it's work
We traverse both strings from end, To simplify the process, we do following:
1) Reverse both strings.
2) Keep adding digits one by one from 0’th index (in reversed strings) to end of smaller string.
3) Finally reverse the result.

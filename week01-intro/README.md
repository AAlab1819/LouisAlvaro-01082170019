Weekly Submission 1

(Mentored by HerbieSinadia-01082170022)

854A-FRACTIONS http://codeforces.com/contest/854/submission/42487126
Explanation : the problem asks us to create a program to input an integer in which the output sum is a fraction of the numerator and denominator equals to the number that we inserted in the program and the numerator and denominator must be a coprime numbers. first i declared two variables and set the value of both variables as 100 for placeholder. then we enter through an if-else statement depending the inserted number is odd or even. if the number is even, we get the numerator by dividing the original number by 2 and then subtracting it by 1. the denominator is obtained by dividing the number by 2 and then adding it with 1. but here we are looking for coprime numbers, so another operation for the numerator and denominator was added to if-else statement. the program will execute the "if" statement if the numerator is added by 1. as for odd numbers, it's much more simple because we got the numerator divided by 2.

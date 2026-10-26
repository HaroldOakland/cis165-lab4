# cis165-lab4

Plan

average.cpp
Variables - 28, 32, 37, 24, 33. Name them a through e, and store as a double. 
Calculations - sum the five variables – 28 + 32 + 37 + 24 + 33. Store value as sum.
		Divide the sum by 5 to arrive at average.
		Expected output: sum = 154; average = 30.8

ocean_levels.cpp
Annual rate of sea level rise is 1.5 millimeters. Intervals of measure in years: 5, 7, and 10. Each value should be multiplied by 1.5 giving an expected output of  7.5, 10.5, and 15 millimeters respectively. 
		Millimeter stored as constant float 1.5
		Each year stored as a float
		Each multiplied by 1.5. i.e const float X * a

Outputs
average.cpp - calculation matches the expected value of 30.8
ocean_levels.cpp - calculation matches the expected values of 7.5, 10.5, and 15




Average — assigned values
28, 32, 37, 24, 33
sum = 154
ave = 30.8
Matches expected results
n/a
Average — changed values
1,3,5,7,11
sum = 27
Ave = 5.4
Matches expected results
n/a
Ocean — assigned rate
1.5
7.5, 10.5,
15
Matches expected results
n/a
Ocean — changed rate
2.5
12.5, 17.5, 
25 
Matches expected results
n/a


Questions

Why should the five values and the average use the double data type?
The double data type provides greater precision for floating point numbers. This reduces rounding errors. 
Trace the assigned values through sum and average.
Sum variables a through e → summed value is divided by the total number of variables (sum_variables/num_variables_summed) → output gives the average of the summed variables
Why should the average calculation divide the completed sum rather than only the final value?
Dividing the completed sum gives a value that can be compared to other data sets, regardless of how many numbers are within the data set.
Explain how the ocean-level calculations use the annual rate and number of years.
Number of years is used to input the annual rate for any given amount of years.
Why is the annual ocean-level rate a good candidate for a named constant?
The code is easier to read and is self-documenting, helping to eliminate errors. The rate of increase in ocean level is a variable that will not be changed in the program, and will always have a definite value. 
Why does the assignment require calculations to be stored before using cout?
Beyond being concise, it allows for flexibility. If a raw calculation is made in cout, and later needs to be changed, every value in the calculation would need to be reentered. By storing calculated outputs in variables, the input variables can be easily changed while preserving the calculation variable. In cout, simply calling the calculation variable performs the calculation, regardless of input variable. 


Instructions for use

These programs were written and executed at https://www.onlinegdb.com.
To do the same, upload one file using the upload button to the left of the green run button, and then press the green run button.
Caution - it will give you an error if you have two files with "main" sections. Either copy paste the code to the default file (main.cpp), or upload a file and erase the contents of main.cpp. If both programs need to be ran, it is suggested to open a tab with a new instance of the website, to avoid the problem just mentioned. 



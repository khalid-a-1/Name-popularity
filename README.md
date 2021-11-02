# CS 173: Intermediate Computer Science

## Project 1 - Data Analytic Application on Name Popularity**

### Overview

You can access the name popularity ranking information from [http://www.ssa.gov/oact/babynames.](http://www.ssa.gov/oact/babynames.)
In this project, you will analyze ten-years name popularity stored in files named
babynamesranking2001.txt, babynamesranking2002.txt, ..., and babynamesranking2010.txt.
Each file contains one thousand lines. Each line contains a ranking, a boy’s name, number for
the boy’s name, a girl’s name, and the number for the girl’s name.


This is a group of two students project.

#### Details

Your program presents to users at least three options.

***In the first option***, the user can search the rank of a specific name. You will write a program that
prompts the user to enter the year, gender, followed by a name, and displays the ranking and
count of the name for the year. Your program should not be case sensitive while searching the
name in the file

Enter a name: Ashley
Enter a gender: F
Enter a year-interval from: 2001
to: 2003

Ranking result for Ashley between 2001 and 2003
2001: #4. 16522
2002: #6. 15335
2003: #8 14506
Total : 46,363 people have Ashley name.

***In the second option***, the user enters a year and program displays and save the names that are
used for both genders in that year in commonname#year#.txt with the following format.


Enter a year for finding common names: 2001

69 names are used for both boys and girls:
*refer to Hw3-NamePopularity.pdf*

***In the third option*** , your program displays the most popular three girl and boy names starting
with a letter.

Enter a letter to see most popular three names starts with : j
Enter a year: 2010

Girls:
1 Julia
2 Jasmine
3 Jocelyn

Boys:
1 Jacob
2 Jayden
3 Joshua

***(Optional)*** For extra points, you can add the fourth option to your program. You can get
maximum +25 points based on the level of your option’s complexity.

You will present all these options to users under a menu as below.

#### Data Analytic Application on Name Popularity

Choose one of the options...

1. Ranking of the name for the year
2. Displays the names that are used for both genders
3. Display the most popular three names starting with a letter
4. Additional option
5. Exit
Enter an option number>>

# For more information, read Hw3-NamePopularity.pdf



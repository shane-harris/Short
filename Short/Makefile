# This Target will compile ShortMain.cpp

#Shane Harris
#CISP 400 - Mon Wed 3:00 pm
#Project 2
#Feb 17, 2016

CPL=g++ -pedantic

all:	main

main:	ShortMain.o Short.o
	$(CPL) -Wall ShortMain.o Short.o -o main

ShortMain.o:	ShortMain.cpp Short.o
	$(CPL) -c -Wall ShortMain.cpp

Short.o:	Short.cpp

clear:
	rm -rf *o main

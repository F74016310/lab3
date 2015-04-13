all: lab3_b 

lab3_b: lab3_b.o Clock.o
	g++ -o lab3_b lab3_b.o Clock.o
Clock.o:
	g++ -c Clock.cpp
lab3_b.o:
	g++ -c lab3_b.cpp
clear:
	rm Clock.o
	rm lab3_b.o
	


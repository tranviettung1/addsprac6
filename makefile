
all : Individual.o BitFlip.o BitFlipProb.o Rearrange.o main.cpp
	g++ Individual.o BitFlip.o BitFlipProb.o Rearrange.o main.cpp

Individual.o : Individual.cpp Individual.h
	g++ -c Individual.cpp -o Individual.o

BitFlip.o : BitFlip.cpp BitFlip.h Mutator.h
	g++ -c BitFlip.cpp -o BitFlip.o

BitFlipProb.o : BitFlipProb.cpp BitFlipProb.h Mutator.h
	g++ -c BitFlipProb.cpp -o BitFlipProb.o

Rearrange.o : Rearrange.cpp Rearrange.h Mutator.h
	g++ -c Rearrange.cpp -o Rearrange.o

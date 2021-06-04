CC = g++
MAIN = main
FILE = CommissionEmployee

main: $(MAIN).cpp $(FILE).o
	$(CC) $(MAIN).cpp $(FILE).o -o main

$(FILE).o: $(FILE).cpp
	$(CC) -c $(FILE).cpp

clean:
	rm *.o main
CC = g++
MAIN = main
FILE = CommissionEmployee
FILE1 = BasePlusCommissionEmployee

main: $(MAIN).cpp $(FILE).o $(FILE1).o
	$(CC) $(MAIN).cpp $(FILE).o $(FILE1).o -o main

$(FILE).o: $(FILE).cpp
	$(CC) -c $(FILE).cpp

$(FILE1).o: $(FILE1).cpp
	$(CC) -c $(FILE1).cpp

clean:
	rm *.o main
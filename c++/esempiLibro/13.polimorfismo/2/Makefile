CC = g++
MAIN = main
FILE = CommissionEmployee
FILE1 = BasePlusCommissionEmployee
FILE2 = Employee
FILE3 = HourlyEmployee
FILE4 = SalariedEmployee

main: $(MAIN).cpp $(FILE).o $(FILE1).o $(FILE2).o $(FILE3).o $(FILE4).o 
	$(CC) $(MAIN).cpp $(FILE).o $(FILE1).o $(FILE2).o $(FILE3).o $(FILE4).o -o main

$(FILE).o: $(FILE).cpp
	$(CC) -c $(FILE).cpp

$(FILE1).o: $(FILE1).cpp
	$(CC) -c $(FILE1).cpp

$(FILE2).o: $(FILE2).cpp
	$(CC) -c $(FILE2).cpp

$(FILE3).o: $(FILE3).cpp
	$(CC) -c $(FILE3).cpp

$(FILE4).o: $(FILE4).cpp
	$(CC) -c $(FILE4).cpp

clean:
	rm *.o main
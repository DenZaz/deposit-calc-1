CF=g++ -Wall -Werror
SRC=src/main.cpp src/deposit.cpp
OBJ=build/main.o build/deposit.o
EXE=bin/deposit-calc

all: $(EXE) $(SRC)

$(EXE): $(OBJ)
	$(CF) $(OBJ) -o $@

build/deposit.o: src/deposit.cpp
	$(CF) src/deposit.cpp -c -o $@

build/main.o: src/main.cpp src/deposit.h
	$(CF) src/main.cpp -c -o $@

.PHONY: clean
clean:
	rm -rf build/* bin/*


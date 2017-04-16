CF := -Wall -Werror

OBJ_DIR := build
SRC_DIR := src

EXE := bin/deposit-calc
SRC := $(wildcard $(SRC_DIR)/*.cpp)
OBJ := $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC))
DEP := $(OBJ:.o=.d)

-include $(DEP)

.PHONY: all clean

all: build/ bin/ $(EXE) $(SRC)

build/ bin/:
	mkdir $@

$(EXE): $(OBJ)
	g++ $(CF) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	g++ $(CF) $^ -c -o $@
	g++ $(CF) $^ -MM > $(OBJ_DIR)/$*.d

clean:
	rm -rf build bin


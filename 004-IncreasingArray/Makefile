CXX       = clang++
CXXFLAGS  = -std=c++20
CXXFLAGS += -g -Wsign-compare
SRC       = $(shell ls *.cpp)
DATASET   = input
APP       = app.out

default: clean fmt execute

execute: build
	@if [ -d "$(DATASET)" ]; then       \
		for input in $(DATASET)/*.txt; do \
			./$(APP) < $$input;             \
		done;                             \
	else                                \
		./$(APP);                         \
	fi

build: $(SRC)
	@$(CXX) $(CXXFLAGS) -o $(APP) $?

clean:
	@rm -f *.out

fmt: 
	@clang-format -i -style=file $(SRC)

.PHONY: default execute build clean fmt 

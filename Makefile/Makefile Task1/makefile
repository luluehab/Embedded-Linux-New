
# Define Include, Source, bin and build Directories
INC= include/
SRC= src/
BIN= bin/
EXECUTE=build/app.out

# Define compiler 
cc= gcc


# Define Include Flage
INCS= -I ./$(INC)%.h


# Define source and object files 
src=$(wildcard:$(SRC)*.c)
#src=$(SRC)%.c
objects=$(foreach obj,$(src),$(patsubst src ,$(BIN)%.o ,$(obj)))



# Define default target
all: $(EXECUTE)

# compile source files
$(BIN)%.o: $(SRC)%.c
	@$(CC) $(INCS) -c  $< -o $@

# link object files
$(EXECUTE): $(objects)
	@$(CC) $(INCS) $^ -o $@

.PHONY:clean 
clean:
	@rm $(BIN)*.o
	@rm $(EXECUTE)

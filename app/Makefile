FLAGS = -Wall -Wextra -g
OUTPUT = circuit
SRC = main.cc Qubit.cc Flags.cc PauliX.cc Circuit.cc 
OBJS = $(SRC:.cc=.o)

all: $(OUTPUT)

$(OUTPUT): $(OBJS)
	g++ $(OBJS) -o $(OUTPUT) -lboost_program_options

%.o: %.cc
	g++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OUTPUT)
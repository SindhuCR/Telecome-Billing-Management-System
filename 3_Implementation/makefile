PROJECT_NAME = TelecomBillingManagementSystem

BUILD = build

SRC = main.c\
src/telecom.c

TEST_OUTPUT = $(BUILD)/TEST_$(PROJECT_NAME).out

INC = -Iinc

PROJECT_OUTPUT =$(BUILD)/$(PROJECT_NAME).out

DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test  doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out

run: $(PROJECT_OUTPUT)
	./$(PROJECT_OUTPUT).out

doc:
	make -C ./documentation

test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT).OUT
	
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)
	
$(BUILD):
		mkdir build

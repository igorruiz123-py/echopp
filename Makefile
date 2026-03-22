RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
RESET = \033[0m

PREFIX = /usr/local

SCRIPT_PATH = scripts

CC = gcc

CFLAGS = -Iinclude

ECHO_PATH = bin

OBJ_PATH = obj

SRC_PATH = src

FILES_OBJ = $(OBJ_PATH)/funcs.o $(OBJ_PATH)/main.o

TARGET = $(ECHO_PATH)/echo++

MAIN_OBJ = $(OBJ_PATH)/main.o

FUNCS_OBJ = $(OBJ_PATH)/funcs.o

MAIN_SRC = $(SRC_PATH)/main.c

FUNCS_SRC = $(SRC_PATH)/funcs.c

$(TARGET): $(FILES_OBJ)
	$(CC) $(FILES_OBJ) -o $(TARGET)

$(FUNCS_OBJ): $(FUNCS_SRC)
	$(CC) $(CFLAGS) -c $(FUNCS_SRC) -o $(FUNCS_OBJ)

$(MAIN_OBJ): $(MAIN_SRC)
	$(CC) $(CFLAGS) -c $(MAIN_SRC) -o $(MAIN_OBJ)

.PHONY: compile remove install uninstall build

compile:
	@printf "$(YELLOW) [INFO] compiling source code... $(RESET) \n"
	$(MAKE) $(TARGET)
	@printf "$(GREEN) [OK] compilation done. $(RESET) \n"

install:
	bash $(SCRIPT_PATH)/install.sh

uninstall:
	bash $(SCRIPT_PATH)/uninstall.sh

remove:
	bash $(SCRIPT_PATH)/remove.sh

build:
	bash $(SCRIPT_PATH)/build.sh
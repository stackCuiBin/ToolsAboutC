
CC := gcc
RM := rm -rf
LD := ld

TARGET := test.out
SRC := $(TARGET:.out=.c)
OBJ := $(TARGET:.out=.o)
LDS := $(TARGET:.out=.lds)

.PHONY : rebuid clean all

$(TARGET) : $(OBJ) $(LDS)
	$(LD) -static -m elf_i386 -T $(LDS) -o $@ $<
	@echo "Target => $@"
	
$(OBJ) : $(SRC)
	$(CC) -fno-builtin -m32 -o $@ -c $^
	
rebuild : clean all

all : $(TARGET)

clean :
	$(RM) $(TARGET) $(OBJ)


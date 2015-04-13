# Libname
LIBNAME=ezutil.a

# Archiver
AR=ar
ARARGS=cvq

# Compiler
CC=g++
CFLAGS=-std=c++11

# Include dir
INC=-I. -I..

# Obj dir
OBJDIR=obj

# Tests dir
TSTDIR=tests

# Sources
SRC=$(wildcard *.cpp)
TSTSRC=$(wildcard $(TSTDIR)/*.cpp)

# Objects
OBJ=$(patsubst %.cpp,$(OBJDIR)/%.o,$(SRC))

# Dependencies
DEP=$(wildcard *.h)

$(LIBNAME): $(OBJDIR) $(OBJ)
	rm -f $(LIBNAME)
	$(AR) $(ARARGS) $(LIBNAME) $(OBJ)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: %.cpp $(DEP)
	rm -f $@
	$(CC) -c -o $@ $< $(CFLAGS) $(INC)

.PHONY: tests
	
tests: $(LIBNAME)
	$(CC) -o $(TSTDIR)/$@.out $(TSTSRC) $(LIBNAME) $(INC) $(CFLAGS)

clean:
	rm -f $(OBJDIR)/*.o
	rm -f $(LIBNAME)
	
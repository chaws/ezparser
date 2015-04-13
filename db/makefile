# Libname
LIBNAME=ezdb.a

# Archiver
AR=ar
ARARGS=cvq

# Compiler
CC=g++
CFLAGS=-lpq

# Include dir
INC=-I. -I../util -I..

# Modules it depends on
MODULES = ../util/ezutil.a

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

$(LIBNAME): $(OBJDIR) $(OBJ) $(MODULES)
	rm -f $(LIBNAME)
	$(AR) $(ARARGS) $(LIBNAME) $(MODULES) $(OBJ)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: %.cpp $(DEP)
	rm -f $@
	$(CC) -c -o $@ $< $(CFLAGS) $(INC)

$(MODULES): 
	cd $(dir $@) && make

.PHONY: tests
	
tests: $(LIBNAME)
	$(CC) -o $(TSTDIR)/$@.out $(TSTSRC) $(LIBNAME) $(MODULES) $(INC) $(CFLAGS)

clean:
	rm -f $(OBJDIR)/*.o
	rm -f $(LIBNAME)

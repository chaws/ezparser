# Libname
LIBNAME=ezrule.a

# Which .a libs the actual lib depends on ?
LIBDEP=../ast/ezast.a ../../util/ezutil.a

# Archiver
AR=ar
ARARGS=cvq

# Compiler
CC=g++
CFLAGS=-std=c++11

# Include dir
INCDIR=$(patsubst %, -I%, . ../../ $(dir $(LIBDEP)))

# Obj dir
OBJDIR=obj

# Tests dir
TSTDIR=tests
TSTSRC=$(wildcard $(TSTDIR)/*.cpp)

# Sources
SRC=$(filter-out $(TSTSRC), $(wildcard */*.cpp) $(wildcard *.cpp))

# Objects
OBJ=$(patsubst %.cpp, $(OBJDIR)/%.o, $(SRC))

# Dependencies
DEP=$(wildcard *.h)

$(LIBNAME): $(LIBDEP) $(OBJDIR) $(OBJ)
	rm -f $(LIBNAME)
	$(AR) $(ARARGS) $(LIBNAME) $(OBJ) 

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: %.cpp $(DEP)
	mkdir -p $(dir $@)
	rm -f $@
	$(CC) -c -o $@ $(LIBDEP) $< $(CFLAGS) $(INCDIR)

$(LIBDEP):
	cd $(dir $@) && make

tests: $(LIBNAME)
	$(CC) -o $(TSTDIR)/$@.out $(TSTSRC) $(LIBNAME) $(LIBDEP) $(LIBNAME) $(INCDIR) $(CFLAGS)

clean:
	find $(OBJDIR) -name *.o -exec rm -f {} \;
	rm -f $(LIBNAME)
	
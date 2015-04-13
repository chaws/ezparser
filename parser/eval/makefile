# Libname
LIBNAME=ezeval.a

# Which .a libs the actual lib depends on ?
LIBDEP=../ast/ezast.a ../../util/ezutil.a ../rule/ezrule.a ../../db/ezdb.a

# Archiver
AR=ar
ARARGS=cvq

# Compiler
CC=g++
CFLAGS=-std=c++11

# Include dir
INCDIR=$(patsubst %, -I%, ./ ../../ $(dir $(LIBDEP)))

# Obj dir
OBJDIR=obj

# Sources
SRC=$(wildcard *.cpp)

# Objects
OBJ=$(patsubst %.cpp,$(OBJDIR)/%.o,$(SRC))

# Dependencies
DEP=$(wildcard *.h)

$(LIBNAME): $(OBJDIR) $(OBJ)
	rm -f $(LIBNAME)
	$(AR) $(ARARGS) $(LIBNAME) $(OBJ)

$(OBJDIR)/%.o: %.cpp $(DEP)
	rm -f $@
	$(CC) -c -o $@ $< $(CFLAGS) $(INCDIR)

$(OBJDIR):
	mkdir -p $(OBJDIR)

tests: $(LIBNAME)

clean:
	rm -f $(OBJDIR)/*.o
	rm -f $(LIBNAME)
	
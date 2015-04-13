# Libname
LIBNAME=ezast.a

LIBDEP=../../util/ezutil.a

# Archiver
AR=ar
ARARGS=cvq

# Compiler
CC=g++
CFLAGS=

# Include dir
INCDIR= $(patsubst %, -I%, . ../.. $(dir $(LIBDEP)))

# Obj dir
OBJDIR=obj

# Sources
SRC=$(wildcard *.cpp)

# Objects
OBJ=$(patsubst %.cpp, $(OBJDIR)/%.o, $(SRC))

# Dependencies
DEP=$(wildcard *.h) 

$(LIBNAME): $(OBJDIR) $(OBJ)
	rm -f $(LIBNAME)
	$(AR) $(ARARGS) $(LIBNAME) $(LIBDEP) $(OBJ)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: %.cpp $(DEP)
	rm -f $@
	$(CC) -c -o $@ $< $(CFLAGS) $(INCDIR)

clean:
	rm -f $(OBJDIR)/*.o
	rm -f $(LIBNAME)
	
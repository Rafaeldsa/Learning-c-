CPP    = g++
RM     = rm -f
OBJS   = main.o \
         pessoa.o \
         empregado.o \
         vendedor.o \
         operario.o \
         fornecedor.o \
         cliente.o \
         administrador.o \
         NovoArquivo.o

LIBS   =
CFLAGS =

.PHONY: Projeto.exe clean clean-after

all: Projeto.exe

clean:
	$(RM) $(OBJS) Projeto.exe

clean-after:
	$(RM) $(OBJS)

Projeto.exe: $(OBJS)
	$(CPP) -Wall -s -o $@ $(OBJS) $(LIBS)

main.o: main.cpp
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

pessoa.o: pessoa.cpp pessoa.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

empregado.o: empregado.cpp empregado.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

vendedor.o: vendedor.cpp vendedor.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

operario.o: operario.cpp operario.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

fornecedor.o: fornecedor.cpp forncecedor.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

cliente.o: cliente.cpp cliente.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

administrador.o: administrador.cpp administrador.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

NovoArquivo.o: NovoArquivo.cpp
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)


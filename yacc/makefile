PROG_lex = lex.yy.c
PROG_yacc = y.tab.c

all:		$(PROG_lex) $(PROG_yacc)
		gcc $(PROG_lex) $(PROG_yacc) -ly -o calc

$(PROG_lex):	b093040069.l
		flex b0093040069.l

$(PROG_yacc):	b093040069.y
		bison -y -d b093040069.y

clean:
		rm calc $(PROG_lex) $(PROG_yacc)

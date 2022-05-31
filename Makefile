all : essai_lexique

essai_lexique : essai_lexique.o analyse_lexicale.o lecture_caracteres.o
	gcc -g -Wall -c essai_lexique.o analyse_lexicale.o lecture_caracteres.o

lecture_caracteres.o : lecture_caracteres.c lecture_caracteres.h
	gcc -g -Wall -c lecture_caracteres.c

analyse_lexicale.o: analyse_lexicale.c analyse_lexicale.h lecture_caracteres.h
	gcc -g -Wall -c analyse_lexicale.c

essai_lexique.o : analyse_lexicale.h
	gcc -g -Wall -c essai_lexique.c

clean:
	rm -f *.o essai_lexique
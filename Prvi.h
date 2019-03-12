#ifndef HEADER_H
#define HEADER_H

typedef struct tocka {	//tocke sadrze koordinate//
	float x;
	float y;
}TOCKA;
typedef struct trokut {	//trokuti sadrze mem lokacije tocaka//
	TOCKA *t1;
	TOCKA *t2;
	TOCKA *t3;
}TROKUTI;

#endif // HEADER_H

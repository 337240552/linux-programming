#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HASHSIZE 101

struct nlist {
	struct nlist *next;
	char *name;
	char *defn;
};

static struct nlist *hashtab[HASHSIZE];

struct nlist *install(const char *name, const char *defn);
struct nlist *lookup(const char *);
char *strdup(const char *s);
unsigned hash(const char *s);


int main(int argc, char const *argv[])
{
	install("humingchun", "mingchunhu");
	install("rachel", "mingyuanli");

	struct nlist *elm = lookup("rachel");
	printf("%p\n", elm);
	if (elm != NULL)
		printf("name:%s\n", elm->name);
	return 0;
}

struct nlist *install(const char *name, const char *defn)
{
	struct nlist *np;
	unsigned hashval;

	if ((np = lookup(name)) == NULL)
	{
		np = (struct nlist *) malloc(sizeof(*np));
		
		if (np == NULL || (np->name = strdup(name)) == NULL)
			return NULL;

		hashval= hash(name);
		np->next = hashtab[hashval];//头插法
		hashtab[hashval] = np;
	}
	else
		free((void *) np->defn);

	if ((np->defn = strdup(defn)) == NULL)
		return NULL;
	printf("installed %s\n", name);
	return np;
}

unsigned hash(const char *s)
{
	unsigned hashval;

	for (hashval = 0; *s != '\0'; s++)
		hashval = *s + 31 * hashval;

	return hashval % HASHSIZE;
}

nlist *lookup(const char *s)
{
	struct nlist *np;

	for (np = hashtab[hash(s)]; np != NULL; np = np->next)
		if (strcmp(s, np->name) == 0)
			return np;

	return NULL;
}

char *strdup(const char *s)
{
	char *p ;
	p = (char *) malloc(strlen(s) + 1);
	if (p != NULL)
		strcpy(p, s);
	return p;
}
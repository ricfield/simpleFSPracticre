typedef struct tableOfContents
{
   fileHeader *files[20000]; 
} TOC;

typedef struct file
{
   char name[255];
   chunk *startOfData;
} fileHeader;

typedef struct fileChunk
{
   unsigned int data;
   fileChunk *prev;
   fileChunk *next;
} chunk;


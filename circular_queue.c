#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void enqueue(char *, char *){
    FILE *fp;
    fp = fopen("./queue.txt", "a");
    fprintf(fp, "%s\n", str);
    fclose(fp);
}
void dequeue(char *){
    FILE *fp;
    fp = fopen("./queue.txt", "r");
    fscanf(fp, "%s", str);
    fclose(fp);
}
void display(char *);

void main() {

}
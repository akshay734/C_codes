#include<stdio.h>

typedef struct person{
  char* name;
  int* age;
  char* designation;
  int* height;
  int* weight;
};

int main(int* argc ,char* argv[]){
  person p;
  p.name=argv[1];
  p.age=argv[2];
  p.designation=argv[3];
  p.height=argv[4];
  p.weight=argv[5];
  
}

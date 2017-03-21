#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"
#include "parser.h"

int main(int argc, char **argv) {

  screen s;
  struct matrix * edges;
  struct matrix * transform;

  edges = new_matrix(4, 4);
  transform = new_matrix(4, 4);

  //print_matrix(make_rotY(30));
  //printf("%s\n", argv[1]);
  //printf("%d\n", argc);
  argc = 2;
  argv[1] = "script";
  if ( argc == 2 ){
    printf("made it");
    parse_file( argv[1], transform, edges, s );
  }
  else
    parse_file( "stdin", transform, edges, s );
  
  
  free_matrix( edges );
  free_matrix( transform );
}  

//linked list 
//http://www.learn-c.org/en/Linked_lists
typedef struct node {
    int val_x;
    int val_y;
    struct node * next;
} node_t;

void setNextNode(node_t ** next_node, int x, int y);

//bucket algorithim
//Third try to implement
//stack overflow problems
void bucket(int x, int y, char fillColor, char clickColor, int pattern){
}

//set next node
void setNextNode(node_t ** next_node, int x, int y) {
  node_t *node;
  node = (node_t*) malloc(sizeof(node_t));
  node->val_x = x;
  node->val_y = y;
  node->next = NULL;
  (*next_node)->next = node;
  *next_node = (*next_node)->next;
}


//SPRAY TOOL
void paintSpray(int x, int y, int color, int width) {
  delay(5);
  if ( y > y1_Draw) {
    putPixel(x - rand()%width, y-rand()%width, color);
  }
}

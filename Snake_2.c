void setup(){
  system("cls");
  snake.length = 3;
  snake.body[0].x = WIDTH / 2;
  snake.body[0].y = HEIGHT / 2;
  snake.dir = RIGHT;

  for(int i = 1; i < snake.length; i++){
    snake.body[i].x = snake.body[0].x - i;
    snake.body[i].y = snake.body[0].y;
  }

  food.x = rand() % WIDTH;
  food.y = rand() % HEIGHT;

  powerup.x = rand() % WIDTH;
  powerup.y = rand() % HEIGHT;

  load_highscore();
}

void input(){
  if(_kbhit()){
    char key = _getch();
    switch(key){

      case 'w':
      case 'W':
      if(snake.dir != DOWN){
        snake.dir = UP;
      }
      break;

      case 'a':
      case 'A':
      if(snake.dir != RIGHT){
        snake.dir = LEFT;
      }
      break;

      case 'd':
      case 'D':
      if(snake.dir != LEFT){
        snake.dir = RIGHT;
      }
      break;

      case 's':
      case 'S':
      if(snake.dir != UP){
        snake.dir = DOWN;
      }
      break;
    }
  }
}

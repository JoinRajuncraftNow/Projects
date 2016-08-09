using namespace std; //All combat-related stuff
extern killcount, x, y, z, health, magic, helm, chest, leggings, boots, quest, enemyid, ehealth, ehelm, echest, eleggings, eboots, damage, primary, secondary, raceid;
extern map[100][100][5];
void combat() //This is where the combat will be.
{
  enemyid=gen(1, 5);
  switch(enemyid)
  {
  case 1:
    enemy="Bandit"
    break;
  case 2:
    enemy="Giant Spider"
    break;
  case 3:
    enemy="Skeleton"
    break;
  case 4:
    enemy="Undead Bandit"
    break;
  case 5:
    enemy="Wolf"
    break;
  default: 
    enemy="LOLOLOLOLOLcgyagryGAYGCYRGYGCYGygrwykqgnywgcifrrqgyoqog4qugyrtfnrygqryg48265gqi4g7BFg"
    break;
  }
}

int adamage()
{
  switch(primary)
  {
  case 1:
    damage=gen(10, 20);
    break;
  case 2:
    damage=gen(20, 40);
    break;
  case 3:
    damage=gen(2, 10);
    break;
  case 4:
    damage=gen(5, 25);
    break;
  default: 
    damage=gen(1, 5);
    break;
  }
}
void death()
{
  
}
void combat()
{
  
}
void damage(int& damage, int& health)
{
  health-=damage;
}
//Spells:
int fireball() //Deals medium damage and has a chance of lighting the enemy on fire.
{
  
}
int freeze() //Deals medium damage and has a chance of freezing the enemy.
{
  
}
int godwrath() //Deals large amounts of damage, but will rebound and damage the caster.
{
  
}
int vampire() //Deals no damage, but just sucks a small amount of life out of enemies.
{
  
}
//Going to consult with creative people for more.

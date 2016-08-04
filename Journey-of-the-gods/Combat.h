using namespace std; //All combat-related stuff
void attack(string name, char raceid, string race, int& z, int& x, int& y, int& health, int& helm, int& chest, int& leggings, int& boots, int& ehealth, int& ehelm, int& echest, int& eleggings, int& eboots, int& damage, char primary, char secondary)
{
  
}
int adamage(int primary, int secondary, int attacktype)
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

// Game::RotateToward @ 004199d4  size=273

float __thiscall Game::RotateToward(Game *this,float target,float cur,float rate)

{
  float local_8;
  
  local_8 = target + 3.14;
  if (3.14 <= local_8) {
    local_8 = local_8 - 6.28;
  }
  if (local_8 < target) {
    if (target <= cur || cur <= local_8) {
      local_8 = cur - rate * this->dt;
    }
    else {
      local_8 = rate * this->dt + cur;
    }
  }
  else if (cur < target || local_8 < cur) {
    local_8 = rate * this->dt + cur;
  }
  else {
    local_8 = cur - rate * this->dt;
  }
  return local_8;
}


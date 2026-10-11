// Player::Motion_42dfc0 @ 0042dfc0  size=2573

void __thiscall Player::Motion_42dfc0(Player *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    _memset(this->keys[local_8].pose,0,this->model->numBones * 0x18);
  }
  if (this->charId == 3) {
    this->keys->duration = 0.083359;
  }
  else if (this->charId == 4) {
    this->keys->duration = 0.148549;
  }
  else {
    this->keys->duration = 0.117084;
  }
  this->keys->speed = 14.888232;
  (this->keys->pose->trans).y = 1.100839;
  (this->keys->pose->rot).x = -0.283815;
  if (this->charId != 3) {
    this->keys->pose[2].rot.x = 0.217219;
  }
  if (this->charId == 0) {
    this->keys->pose[5].rot.x = -0.181995;
  }
  else if (this->charId == 2 || this->charId == 4) {
    this->keys->pose[5].rot.x = -0.217763;
  }
  else if (this->charId == 3) {
    this->keys->pose[5].rot.x = -0.500573;
  }
  else {
    this->keys->pose[5].rot.x = -0.750178;
  }
  this->keys->pose[6].rot.x = -0.719238;
  this->keys->pose[6].rot.z = -0.217878;
  this->keys->pose[7].rot.x = 1.653238;
  this->keys->pose[7].rot.y = 0.334102;
  this->keys->pose[9].rot.x = -0.717407;
  this->keys->pose[9].rot.z = 0.217345;
  this->keys->pose[10].rot.x = 1.651105;
  this->keys->pose[10].rot.y = -0.333391;
  this->keys->pose[0xc].rot.x = 0.95267;
  this->keys->pose[0xd].rot.x = -1.181807;
  this->keys->pose[0xe].rot.x = 0.2807;
  this->keys->pose[0xf].rot.x = 0.952337;
  this->keys->pose[0x10].rot.x = -1.234798;
  this->keys->pose[0x11].rot.x = 0.450432;
  this->keys->pose[0x12].rot.x = -1.635679;
  if (this->charId == 3) {
    this->keys[1].duration = 0.183728;
    this->keys[1].speed = 17.553625;
  }
  else if (this->charId == 4) {
    this->keys[1].duration = 0.25051;
    this->keys[1].speed = 13.119122;
  }
  else {
    this->keys[1].duration = 0.200656;
    this->keys[1].speed = 13.119122;
  }
  ((this->keys[1].pose)->trans).y = -0.3;
  ((this->keys[1].pose)->rot).x = -0.283815;
  this->keys[1].pose[1].rot.y = 0.833433;
  if (this->charId == 3) {
    this->keys[1].pose[2].rot.x = 0.316729;
    this->keys[1].pose[2].rot.y = -0.800249;
  }
  else {
    this->keys[1].pose[2].rot.x = 0.217219;
    this->keys[1].pose[2].rot.y = -0.483761;
  }
  if (this->charId == 0) {
    this->keys[1].pose[5].rot.x = 0.150545;
    this->keys[1].pose[5].rot.z = -0.280781;
  }
  else if (this->charId == 1 || this->charId == 5) {
    this->keys[1].pose[5].rot.x = -0.716634;
    this->keys[1].pose[5].rot.z = -0.948828;
  }
  else if (this->charId == 3) {
    this->keys[1].pose[5].rot.z = 0.166675;
  }
  this->keys[1].pose[6].rot.x = 0.434024;
  this->keys[1].pose[6].rot.z = -0.217345;
  this->keys[1].pose[7].rot.x = 1.651105;
  this->keys[1].pose[7].rot.y = 0.333391;
  if (this->charId == 0) {
    this->keys[1].pose[9].rot.y = -0.31707;
  }
  this->keys[1].pose[9].rot.z = -0.716709;
  if (0 < this->charId) {
    this->keys[1].pose[10].rot.x = 0.750532;
  }
  this->keys[1].pose[0xc].rot.x = -1.066958;
  this->keys[1].pose[0xd].rot.x = -0.398038;
  this->keys[1].pose[0xe].rot.x = 0.03293;
  this->keys[1].pose[0xf].rot.x = 1.154916;
  this->keys[1].pose[0x10].rot.x = -0.732234;
  this->keys[1].pose[0x11].rot.x = -0.150622;
  this->keys[1].pose[0x12].rot.x = -1.635679;
  if (this->charId == 3) {
    this->keys[2].duration = 0.083359;
  }
  else if (this->charId == 4) {
    this->keys[2].duration = 0.148549;
  }
  else {
    this->keys[2].duration = 0.117084;
  }
  this->keys[2].speed = 14.888232;
  ((this->keys[2].pose)->trans).y = 1.100839;
  ((this->keys[2].pose)->rot).x = -0.283815;
  if (this->charId != 3) {
    this->keys[2].pose[2].rot.x = 0.217219;
  }
  if (this->charId == 0) {
    this->keys[2].pose[5].rot.x = -0.282201;
  }
  else if (this->charId == 2 || this->charId == 4) {
    this->keys[2].pose[5].rot.x = -0.217763;
  }
  else if (this->charId == 3) {
    this->keys[2].pose[5].rot.x = -0.500573;
  }
  else {
    this->keys[2].pose[5].rot.x = -0.282201;
  }
  this->keys[2].pose[6].rot.x = -0.717407;
  this->keys[2].pose[6].rot.z = -0.217345;
  this->keys[2].pose[7].rot.x = 1.651105;
  this->keys[2].pose[7].rot.y = 0.333391;
  this->keys[2].pose[9].rot.x = -0.719238;
  this->keys[2].pose[9].rot.z = 0.217878;
  this->keys[2].pose[10].rot.x = 1.653238;
  this->keys[2].pose[10].rot.y = -0.334102;
  this->keys[2].pose[0xc].rot.x = 0.952337;
  this->keys[2].pose[0xd].rot.x = -1.234798;
  this->keys[2].pose[0xe].rot.x = 0.450432;
  this->keys[2].pose[0xf].rot.x = 0.95267;
  this->keys[2].pose[0x10].rot.x = -1.181807;
  this->keys[2].pose[0x11].rot.x = 0.2807;
  this->keys[2].pose[0x12].rot.x = -1.635679;
  if (this->charId == 3) {
    this->keys[3].duration = 0.183728;
    this->keys[3].speed = 17.553625;
  }
  else if (this->charId == 4) {
    this->keys[3].duration = 0.25051;
    this->keys[3].speed = 13.119122;
  }
  else {
    this->keys[3].duration = 0.200656;
    this->keys[3].speed = 13.119122;
  }
  ((this->keys[3].pose)->trans).y = -0.3;
  ((this->keys[3].pose)->rot).x = -0.283815;
  this->keys[3].pose[1].rot.y = -0.833433;
  if (this->charId == 3) {
    this->keys[3].pose[2].rot.x = 0.316729;
    this->keys[3].pose[2].rot.y = 0.800249;
  }
  else {
    this->keys[3].pose[2].rot.x = 0.217219;
    this->keys[3].pose[2].rot.y = 0.483761;
  }
  if (this->charId == 0) {
    this->keys[3].pose[5].rot.x = 0.150545;
    this->keys[3].pose[5].rot.z = 0.280781;
    this->keys[3].pose[6].rot.y = 0.31707;
  }
  else if (this->charId == 1 || this->charId == 5) {
    this->keys[3].pose[5].rot.x = -0.716634;
    this->keys[3].pose[5].rot.z = 0.948828;
  }
  else if (this->charId == 3) {
    this->keys[3].pose[5].rot.z = -0.166675;
  }
  this->keys[3].pose[6].rot.z = 0.716709;
  if (0 < this->charId) {
    this->keys[3].pose[7].rot.x = 0.750532;
  }
  this->keys[3].pose[9].rot.x = 0.434024;
  this->keys[3].pose[9].rot.z = 0.217345;
  this->keys[3].pose[10].rot.x = 1.651105;
  this->keys[3].pose[10].rot.y = -0.333391;
  this->keys[3].pose[0xc].rot.x = 1.154916;
  this->keys[3].pose[0xd].rot.x = -0.732234;
  this->keys[3].pose[0xe].rot.x = -0.150622;
  this->keys[3].pose[0xf].rot.x = -1.066958;
  this->keys[3].pose[0x10].rot.x = -0.398038;
  this->keys[3].pose[0x11].rot.x = 0.03293;
  this->keys[3].pose[0x12].rot.x = -1.635679;
  this->keys[4].duration = 0.0;
  return;
}


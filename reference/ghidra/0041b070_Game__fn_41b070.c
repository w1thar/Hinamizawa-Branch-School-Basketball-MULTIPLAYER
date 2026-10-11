// Game::fn_41b070 @ 0041b070  size=13363

void __thiscall Game::fn_41b070(Game *this)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  undefined4 extraout_ECX_14;
  undefined4 extraout_ECX_15;
  undefined4 extraout_ECX_16;
  undefined4 extraout_ECX_17;
  undefined4 extraout_ECX_18;
  undefined4 extraout_ECX_19;
  undefined4 extraout_ECX_20;
  undefined4 extraout_ECX_21;
  undefined4 extraout_ECX_22;
  undefined4 extraout_ECX_23;
  undefined4 extraout_ECX_24;
  undefined4 extraout_ECX_25;
  undefined4 extraout_ECX_26;
  undefined4 extraout_ECX_27;
  undefined4 extraout_ECX_28;
  undefined4 extraout_ECX_29;
  undefined4 extraout_ECX_30;
  undefined4 extraout_ECX_31;
  undefined4 extraout_ECX_32;
  undefined4 extraout_ECX_33;
  undefined4 extraout_ECX_34;
  undefined4 extraout_ECX_35;
  longlong lVar3;
  longlong lVar4;
  int local_8;
  
  if ((this->state == 2 && 1.0 <= this->f390) && this->f390 < 2.0) {
    sprintf(this->text,&DAT_0045362c);
    lVar3 = __ftol();
    iVar2 = (int)lVar3;
    lVar3 = __ftol();
    iVar1 = (int)lVar3;
    lVar3 = __ftol();
    DrawText(this,this->text,0x1c,0xcf,0xe6,(int)lVar3,iVar1,iVar2);
  }
  if ((this->state == 2 && 2.0 <= this->f390) && this->f390 < 4.0) {
    sprintf(this->text,&DAT_00453640);
    DrawText(this,this->text,0x1c,0xcf,0xe6,0xff,0xff,0xff);
  }
  if ((this->state == 2 && 4.0 <= this->f390) && this->f390 < 5.0) {
    sprintf(this->text,&DAT_00453654);
    lVar3 = __ftol();
    iVar2 = (int)lVar3;
    lVar3 = __ftol();
    iVar1 = (int)lVar3;
    lVar3 = __ftol();
    DrawText(this,this->text,0x1c,0xcf,0xe6,(int)lVar3,iVar1,iVar2);
  }
  if ((this->state == 2 && 6.0 <= this->f390) && this->f390 < 7.0) {
    sprintf(this->text,&DAT_00453668);
    lVar3 = __ftol();
    iVar2 = (int)lVar3;
    lVar3 = __ftol();
    iVar1 = (int)lVar3;
    lVar3 = __ftol();
    DrawText(this,this->text,0x1c,0xdf,0xe6,(int)lVar3,iVar1,iVar2);
  }
  if ((this->state == 2 && 7.0 <= this->f390) && this->f390 < 9.0) {
    sprintf(this->text,&DAT_00453678);
    DrawText(this,this->text,0x1c,0xdf,0xe6,0xff,0xff,0xff);
  }
  if ((this->state == 2 && 9.0 <= this->f390) && this->f390 < 10.0) {
    sprintf(this->text,&DAT_00453688);
    lVar3 = __ftol();
    iVar2 = (int)lVar3;
    lVar3 = __ftol();
    iVar1 = (int)lVar3;
    lVar3 = __ftol();
    DrawText(this,this->text,0x1c,0xdf,0xe6,(int)lVar3,iVar1,iVar2);
  }
  if ((this->state == 2 && 32.0 <= this->f390) && this->f390 < 135.0) {
    sprintf(this->text,&DAT_00453698);
    thunk_FUN_00404960(extraout_ECX);
    lVar3 = __ftol();
    iVar2 = (int)lVar3;
    thunk_FUN_00404960(extraout_ECX_00);
    lVar3 = __ftol();
    iVar1 = (int)lVar3;
    thunk_FUN_00404960(this);
    lVar3 = __ftol();
    DrawText(this,this->text,0x18,0xc0,0xc0,(int)lVar3,iVar1,iVar2);
    sprintf(this->text,&DAT_004536b0);
    DrawText(this,this->text,0xc,0x173,0x1cc,0x32,0x32,0x32);
  }
  if ((this->state == 3 & this->b39a) != 0) {
    sprintf(this->text,&DAT_004536dc);
    thunk_FUN_00404960(this);
    lVar3 = __ftol();
    iVar2 = (int)lVar3;
    thunk_FUN_00404960(extraout_ECX_01);
    lVar3 = __ftol();
    iVar1 = (int)lVar3;
    thunk_FUN_00404960(extraout_ECX_02);
    lVar3 = __ftol();
    DrawText(this,this->text,0x18,0x8c,0xc0,(int)lVar3,iVar1,iVar2);
    sprintf(this->text,&DAT_004536fc);
    DrawText(this,this->text,0x1c,0xf5,0x151,0,0,0);
    sprintf(this->text,&DAT_0045370c);
    DrawText(this,this->text,0x1c,0xf5,0x178,0,0,0);
    sprintf(this->text,&DAT_0045371c);
    DrawText(this,this->text,0x1c,0xf5,0x1b1,0,0,0);
    if (this->i3b0 == 0) {
      sprintf(this->text,&DAT_0045372c);
      DrawText(this,this->text,0x1c,0xf3,0x14f,0xff,0,0);
      sprintf(this->text,&DAT_0045373c);
      DrawText(this,this->text,0x1c,0xf3,0x176,0xff,0xff,0xff);
      sprintf(this->text,&DAT_0045374c);
      DrawText(this,this->text,0x1c,0xf3,0x1af,0xff,0xff,0xff);
    }
    if (this->i3b0 == 1) {
      sprintf(this->text,&DAT_0045375c);
      DrawText(this,this->text,0x1c,0xf3,0x14f,0xff,0xff,0xff);
      sprintf(this->text,&DAT_0045376c);
      DrawText(this,this->text,0x1c,0xf3,0x176,0xff,0,0);
      sprintf(this->text,&DAT_0045377c);
      DrawText(this,this->text,0x1c,0xf3,0x1af,0xff,0xff,0xff);
    }
    if (this->i3b0 == 2) {
      sprintf(this->text,&DAT_0045378c);
      DrawText(this,this->text,0x1c,0xf3,0x14f,0xff,0xff,0xff);
      sprintf(this->text,&DAT_0045379c);
      DrawText(this,this->text,0x1c,0xf3,0x176,0xff,0xff,0xff);
      sprintf(this->text,&DAT_004537ac);
      DrawText(this,this->text,0x1c,0xf3,0x1af,0xff,0,0);
    }
    sprintf(this->text,&DAT_004537bc);
    DrawText(this,this->text,0xc,499,0x1cc,0xff,0xfa,0x96);
  }
  if (this->state == 4 && this->i3b8 < 3) {
    sprintf(this->text,&DAT_004537d4);
    thunk_FUN_00404960(extraout_ECX_03);
    lVar3 = __ftol();
    iVar2 = (int)lVar3;
    thunk_FUN_00404960(this);
    lVar3 = __ftol();
    iVar1 = (int)lVar3;
    thunk_FUN_00404960(extraout_ECX_04);
    lVar3 = __ftol();
    DrawText(this,this->text,0x1c,0xf3,0x18,(int)lVar3,iVar1,iVar2);
    sprintf(this->text,&DAT_004537e0);
    DrawText(this,this->text,0x18,0x22,0x4a,0,0,0);
    DrawText(this,this->text,0x18,0x20,0x48,0xff,0xff,0xff);
    if (this->i3b4 == 0) {
      sprintf(this->text,&DAT_00453814);
      DrawText(this,this->text,0x24,0x18e,0xc2,0,0,0);
      DrawText(this,this->text,0x24,0x18c,0xc0,0xff,0xff,0xb4);
      sprintf(this->text,&DAT_00453820);
      DrawText(this,this->text,0x10,0x160,0x108,0xff,0xff,0xff);
      sprintf(this->text,&DAT_00453840);
      DrawText(this,this->text,0x10,0x160,0x120,0xff,0xff,0xff);
      sprintf(this->text,&DAT_00453860);
      DrawText(this,this->text,0x10,0x160,0x137,0xff,0xff,0xff);
      sprintf(this->text,&DAT_00453878);
      DrawText(this,this->text,0x10,0x160,0x14f,0xff,0xff,0xff);
      sprintf(this->text,&DAT_00453898);
      DrawText(this,this->text,0x10,0x160,0x176,0xff,0xb4,0xb4);
    }
    if (this->i3b4 == 1) {
      sprintf(this->text,&DAT_004538bc);
      DrawText(this,this->text,0x24,0x18e,0xc2,0,0,0);
      DrawText(this,this->text,0x24,0x18c,0xc0,0xff,0xff,0xb4);
      sprintf(this->text,&DAT_004538c8);
      DrawText(this,this->text,0x10,0x160,0x108,0xff,0xff,0xff);
      sprintf(this->text,&DAT_004538e8);
      DrawText(this,this->text,0x10,0x160,0x120,0xff,0xff,0xff);
      sprintf(this->text,&DAT_0045390c);
      DrawText(this,this->text,0x10,0x160,0x137,0xff,0xff,0xff);
      sprintf(this->text,&DAT_0045392c);
      DrawText(this,this->text,0x10,0x160,0x14f,0xff,0xff,0xff);
      sprintf(this->text,&DAT_00453950);
      DrawText(this,this->text,0x10,0x160,0x176,0xff,0xb4,0xb4);
    }
    if (this->i3b4 == 2) {
      sprintf(this->text,&DAT_0045396c);
      DrawText(this,this->text,0x24,0x18e,0xc2,0,0,0);
      DrawText(this,this->text,0x24,0x18c,0xc0,0xff,0xff,0xb4);
      sprintf(this->text,&DAT_00453978);
      DrawText(this,this->text,0x10,0x160,0x108,0xff,0xff,0xff);
      sprintf(this->text,&DAT_00453998);
      DrawText(this,this->text,0x10,0x160,0x120,0xff,0xff,0xff);
      sprintf(this->text,&DAT_004539bc);
      DrawText(this,this->text,0x10,0x160,0x137,0xff,0xff,0xff);
      sprintf(this->text,&DAT_004539dc);
      DrawText(this,this->text,0x10,0x160,0x14f,0xff,0xff,0xff);
      sprintf(this->text,&DAT_00453a00);
      DrawText(this,this->text,0x10,0x160,0x176,0xff,0xb4,0xb4);
    }
    if (this->i3b4 == 3) {
      sprintf(this->text,&DAT_00453a20);
      DrawText(this,this->text,0x24,0x17b,0xc2,0,0,0);
      DrawText(this,this->text,0x24,0x179,0xc0,0xff,0xff,0xb4);
      sprintf(this->text,&DAT_00453a30);
      DrawText(this,this->text,0x10,0x160,0x108,0xff,0xff,0xff);
      sprintf(this->text,&DAT_00453a58);
      DrawText(this,this->text,0x10,0x160,0x120,0xff,0xff,0xff);
      sprintf(this->text,&DAT_00453a7c);
      DrawText(this,this->text,0x10,0x160,0x137,0xff,0xff,0xff);
      sprintf(this->text,&DAT_00453a9c);
      DrawText(this,this->text,0x10,0x160,0x14f,0xff,0xff,0xff);
      sprintf(this->text,&DAT_00453ac0);
      DrawText(this,this->text,0x10,0x160,0x176,0xff,0xb4,0xb4);
    }
    if (this->i3b4 == 4) {
      sprintf(this->text,&DAT_00453ae4);
      DrawText(this,this->text,0x24,0x18e,0xc2,0,0,0);
      DrawText(this,this->text,0x24,0x18c,0xc0,0xff,0xff,0xb4);
      sprintf(this->text,&DAT_00453af0);
      DrawText(this,this->text,0x10,0x160,0x108,0xff,0xff,0xff);
      sprintf(this->text,&DAT_00453b14);
      DrawText(this,this->text,0x10,0x160,0x120,0xff,0xff,0xff);
      sprintf(this->text,&DAT_00453b38);
      DrawText(this,this->text,0x10,0x160,0x137,0xff,0xff,0xff);
      sprintf(this->text,&DAT_00453b58);
      DrawText(this,this->text,0x10,0x160,0x14f,0xff,0xff,0xff);
      sprintf(this->text,&DAT_00453b70);
      DrawText(this,this->text,0x10,0x160,0x176,0xff,0xb4,0xb4);
    }
    if (this->i3b4 == 5) {
      sprintf(this->text,&DAT_00453b90);
      DrawText(this,this->text,0x24,0x18e,0xc2,0,0,0);
      DrawText(this,this->text,0x24,0x18c,0xc0,0xff,0xff,0xb4);
      sprintf(this->text,&DAT_00453b9c);
      DrawText(this,this->text,0x10,0x160,0x108,0xff,0xff,0xff);
      sprintf(this->text,&DAT_00453bbc);
      DrawText(this,this->text,0x10,0x160,0x120,0xff,0xff,0xff);
      sprintf(this->text,&DAT_00453be0);
      DrawText(this,this->text,0x10,0x160,0x137,0xff,0xff,0xff);
      sprintf(this->text,&DAT_00453bf8);
      DrawText(this,this->text,0x10,0x160,0x14f,0xff,0xff,0xff);
      sprintf(this->text,&DAT_00453c14);
      DrawText(this,this->text,0x10,0x160,0x176,0xff,0xb4,0xb4);
    }
  }
  if ((this->state == 4 && -20.0 < (this->camPos).z) && this->i3b8 < 5) {
    sprintf(this->text,&DAT_00453c34);
    thunk_FUN_00404960(this);
    lVar3 = __ftol();
    iVar2 = (int)lVar3;
    thunk_FUN_00404960(extraout_ECX_05);
    lVar3 = __ftol();
    iVar1 = (int)lVar3;
    thunk_FUN_00404960(extraout_ECX_06);
    lVar3 = __ftol();
    DrawText(this,this->text,0x1c,0x80,0xa7,(int)lVar3,iVar1,iVar2);
    sprintf(this->text,&DAT_00453c54);
    DrawText(this,this->text,0x1c,0x4c,4,0xff,0xff,0);
    sprintf(this->text,&DAT_00453c5c);
    DrawText(this,this->text,0x1c,0x1e0,4,0xff,0xff,0);
    if (this->i3b0 == 0) {
      sprintf(this->text,&DAT_00453c64);
      DrawText(this,this->text,0x18,0xdf,0x3e,0xff,0xff,0xff);
    }
    else if (this->i3b0 == 1) {
      sprintf(this->text,&DAT_00453c78);
      DrawText(this,this->text,0x18,0xdf,0x3e,0xff,0xff,0xff);
    }
    else {
      sprintf(this->text,&DAT_00453c88);
      DrawText(this,this->text,0x18,0xdf,0x3e,0xff,0xff,0xff);
    }
    if (this->i3b8 == 3) {
      sprintf(this->text,&DAT_00453c98);
      DrawText(this,this->text,0x24,0x121,0xf2,0,0,0);
      DrawText(this,this->text,0x24,0x11f,0xf0,0xff,0,0);
      sprintf(this->text,&DAT_00453ca0);
      DrawText(this,this->text,0x1c,0x11b,0x139,0,0,0);
      DrawText(this,this->text,0x1c,0x119,0x137,0x9b,0x9b,0x9b);
    }
    else {
      sprintf(this->text,&DAT_00453ca8);
      DrawText(this,this->text,0x1c,0x12e,0xf2,0,0,0);
      DrawText(this,this->text,0x1c,300,0xf0,0x9b,0x9b,0x9b);
      sprintf(this->text,&DAT_00453cb0);
      DrawText(this,this->text,0x24,0x115,0x139,0,0,0);
      DrawText(this,this->text,0x24,0x113,0x137,0xff,0,0);
    }
  }
  if (this->state == 5 && this->i3b8 < 5 || this->state == 6) {
    if (this->b3a6 == '\0') {
      sprintf(this->text,&DAT_00453cdc);
      DrawText(this,this->text,0x1c,0x4c,4,0xff,0xff,0);
      sprintf(this->text,&DAT_00453ce4);
      DrawText(this,this->text,0x1c,0x1e0,4,0xff,0xff,0);
      sprintf(this->text,&DAT_00453cec);
      DrawText(this,this->text,0x30,0xa3,0x1f,0xff,0xff,0xff);
      sprintf(this->text,&DAT_00453cf0);
      DrawText(this,this->text,0x30,0x191,0x1f,0xff,0xff,0xff);
      sprintf(this->text,(byte *)s_<<__Goal_00453cf4);
      DrawText(this,this->text,0x10,0x121,0x49,0,0,0);
      thunk_FUN_00404900(this);
      lVar3 = __ftol();
      iVar2 = (int)lVar3;
      thunk_FUN_00404900(extraout_ECX_09);
      lVar3 = __ftol();
      DrawText(this,this->text,0x10,0x11f,0x48,0xff,(int)lVar3,iVar2);
    }
    else {
      sprintf(this->text,&DAT_00453cb8);
      DrawText(this,this->text,0x1c,0x4c,4,0xff,0xff,0);
      sprintf(this->text,&DAT_00453cc0);
      DrawText(this,this->text,0x1c,0x1e0,4,0xff,0xff,0);
      sprintf(this->text,&DAT_00453cc8);
      DrawText(this,this->text,0x30,0xa3,0x1f,0xff,0xff,0xff);
      sprintf(this->text,&DAT_00453ccc);
      DrawText(this,this->text,0x30,0x191,0x1f,0xff,0xff,0xff);
      sprintf(this->text,(byte *)s_Goal__>>_00453cd0);
      DrawText(this,this->text,0x10,0x121,0x49,0,0,0);
      thunk_FUN_00404900(extraout_ECX_07);
      lVar3 = __ftol();
      iVar2 = (int)lVar3;
      thunk_FUN_00404900(extraout_ECX_08);
      lVar3 = __ftol();
      DrawText(this,this->text,0x10,0x11f,0x48,0xff,(int)lVar3,iVar2);
    }
    sprintf(this->text,&DAT_00453d00);
    DrawText(this,this->text,0x18,0x126,0,0xff,0xff,0xff);
    if (this->f3e0 <= 90.0) {
      lVar3 = __ftol();
      local_8 = (int)lVar3;
    }
    else {
      local_8 = 0xff;
    }
    __ftol();
    __ftol();
    __ftol();
    sprintf(this->text,(byte *)s__d___2d_00453d08);
    DrawText(this,this->text,0x24,0x11c,0x1f,0xff,local_8,local_8);
    lVar3 = __ftol();
    lVar4 = __ftol();
    if ((int)lVar3 + (int)lVar4 * -0x3c < 10) {
      sprintf(this->text,&DAT_00453d10);
      DrawText(this,this->text,0x24,0x140,0x1f,0xff,local_8,local_8);
    }
    if (this->f41c < 3.0 && 0.01 < this->f41c) {
      __ftol();
      sprintf(this->text,&DAT_00453d14);
      lVar3 = __ftol();
      iVar2 = (int)lVar3 * 0x55;
      lVar3 = __ftol();
      DrawText(this,this->text,0x1c,0x139,0x6e,0xff,(int)lVar3 * 0x55,iVar2);
    }
    if (this->f41c < 9.5 && 6.5 < this->f41c) {
      __ftol();
      sprintf(this->text,&DAT_00453d18);
      lVar3 = __ftol();
      iVar2 = (int)lVar3 * 0x55;
      lVar3 = __ftol();
      DrawText(this,this->text,0x30,0x136,0x14f,0xff,(int)lVar3 * 0x55,iVar2);
    }
    if (30.0 < (this->camPos).y && this->state == 5) {
      if (this->b3a6 == '\0') {
        sprintf(this->text,&DAT_00453d24);
        thunk_FUN_00404960(this);
        lVar3 = __ftol();
        iVar2 = (int)lVar3;
        thunk_FUN_00404960(extraout_ECX_12);
        lVar3 = __ftol();
        iVar1 = (int)lVar3;
        thunk_FUN_00404960(extraout_ECX_13);
        lVar3 = __ftol();
        DrawText(this,this->text,0x30,0x100,0xe1,(int)lVar3,iVar1,iVar2);
      }
      else {
        sprintf(this->text,&DAT_00453d1c);
        thunk_FUN_00404960(extraout_ECX_10);
        lVar3 = __ftol();
        iVar2 = (int)lVar3;
        thunk_FUN_00404960(extraout_ECX_11);
        lVar3 = __ftol();
        iVar1 = (int)lVar3;
        thunk_FUN_00404960(this);
        lVar3 = __ftol();
        DrawText(this,this->text,0x30,0x100,0xe1,(int)lVar3,iVar1,iVar2);
      }
    }
    if (((this->camPos).y <= 5.0 && this->f390 < 0.8) && this->state == 5) {
      sprintf(this->text,&DAT_00453d2c);
      thunk_FUN_00404960(extraout_ECX_14);
      lVar3 = __ftol();
      iVar2 = (int)lVar3;
      thunk_FUN_00404960(extraout_ECX_15);
      lVar3 = __ftol();
      iVar1 = (int)lVar3;
      thunk_FUN_00404960(this);
      lVar3 = __ftol();
      DrawText(this,this->text,0x30,0xdf,0xe1,(int)lVar3,iVar1,iVar2);
    }
    if (this->i3b8 == 5) {
      if (this->b3a6 == '\0') {
        sprintf(this->text,&DAT_00453d44);
        thunk_FUN_00404960(extraout_ECX_18);
        lVar3 = __ftol();
        iVar2 = (int)lVar3;
        thunk_FUN_00404960(this);
        lVar3 = __ftol();
        iVar1 = (int)lVar3;
        thunk_FUN_00404960(extraout_ECX_19);
        lVar3 = __ftol();
        DrawText(this,this->text,0x30,0xb9,0xe1,(int)lVar3,iVar1,iVar2);
      }
      else {
        sprintf(this->text,&DAT_00453d38);
        thunk_FUN_00404960(this);
        lVar3 = __ftol();
        iVar2 = (int)lVar3;
        thunk_FUN_00404960(extraout_ECX_16);
        lVar3 = __ftol();
        iVar1 = (int)lVar3;
        thunk_FUN_00404960(extraout_ECX_17);
        lVar3 = __ftol();
        DrawText(this,this->text,0x30,0xec,0xe1,(int)lVar3,iVar1,iVar2);
      }
    }
    else if (this->b414 != '\0') {
      if (this->i418 == 5) {
        sprintf(this->text,&DAT_00453d54);
        thunk_FUN_00404960(extraout_ECX_20);
        lVar3 = __ftol();
        iVar2 = (int)lVar3;
        thunk_FUN_00404960(extraout_ECX_21);
        lVar3 = __ftol();
        iVar1 = (int)lVar3;
        thunk_FUN_00404960(this);
        lVar3 = __ftol();
        DrawText(this,this->text,0x30,0xdf,0xe1,(int)lVar3,iVar1,iVar2);
      }
      else {
        sprintf(this->text,&DAT_00453d60);
        thunk_FUN_00404960(this);
        lVar3 = __ftol();
        iVar2 = (int)lVar3;
        thunk_FUN_00404960(extraout_ECX_22);
        lVar3 = __ftol();
        iVar1 = (int)lVar3;
        thunk_FUN_00404960(extraout_ECX_23);
        lVar3 = __ftol();
        DrawText(this,this->text,0x30,0xcc,0xe1,(int)lVar3,iVar1,iVar2);
      }
    }
    if (this->i3b0 == 2) {
      if (this->b3a6 == '\0') {
        sprintf(this->text,&DAT_00453d70);
        DrawText(this,this->text,0xc,0x20,0x198,0xff,0xff,0xff);
        sprintf(this->text,&DAT_00453d84);
        DrawText(this,this->text,0xc,0x20,0x1a6,0xff,0xff,0xff);
        sprintf(this->text,&DAT_00453d98);
        DrawText(this,this->text,0xc,0x20,0x1b4,0xff,0xff,0xff);
        sprintf(this->text,&DAT_00453da8);
        DrawText(this,this->text,0xc,0x20,0x1c3,0xff,0xff,0xff);
        sprintf(this->text,&DAT_00453db8);
        DrawText(this,this->text,0xc,0x19f,0x198,0xff,0xff,0xff);
        sprintf(this->text,&DAT_00453dc8);
        DrawText(this,this->text,0xc,0x19f,0x1a6,0xff,0xff,0xff);
        sprintf(this->text,&DAT_00453dec);
        DrawText(this,this->text,0xc,0x19f,0x1b4,0xff,0xff,0xff);
        sprintf(this->text,&DAT_00453e10);
        DrawText(this,this->text,0xc,0x19f,0x1c3,0xff,0xff,0xff);
        sprintf(this->text,&DAT_00453e34);
        DrawText(this,this->text,0xc,0xcc,0x1d1,0xff,0xff,0xff);
      }
      else {
        sprintf(this->text,&DAT_00453e64);
        DrawText(this,this->text,0xc,0xdf,0x1d1,0xff,0xff,0xff);
      }
    }
  }
  if (this->state == 7 && this->i3b8 == 2) {
    sprintf(this->text,&DAT_00453ea8);
    DrawText(this,this->text,0x1c,0x4c,4,0xff,0xff,0);
    sprintf(this->text,&DAT_00453eb0);
    DrawText(this,this->text,0x1c,0x1e0,4,0xff,0xff,0);
    sprintf(this->text,&DAT_00453eb8);
    DrawText(this,this->text,0x30,0xa3,0x1f,0xff,0xff,0xff);
    sprintf(this->text,&DAT_00453ebc);
    DrawText(this,this->text,0x30,0x191,0x1f,0xff,0xff,0xff);
    sprintf(this->text,&DAT_00453ec0);
    DrawText(this,this->text,0x18,0x126,0,0xff,0xff,0xff);
    sprintf(this->text,&DAT_00453ec8);
    thunk_FUN_00404960(extraout_ECX_24);
    lVar3 = __ftol();
    iVar2 = (int)lVar3;
    thunk_FUN_00404960(extraout_ECX_25);
    lVar3 = __ftol();
    iVar1 = (int)lVar3;
    thunk_FUN_00404960(this);
    lVar3 = __ftol();
    DrawText(this,this->text,0x18,0x11c,0x23,(int)lVar3,iVar1,iVar2);
    sprintf(this->text,&DAT_00453ed0);
    DrawText(this,this->text,0x12,0x4c,0x56,0xff,0xff,0xff);
  }
  if (this->state == 8) {
    if (this->i3b8 < 4) {
      sprintf(this->text,&DAT_00453f08);
      DrawText(this,this->text,0x1c,0x4c,4,0xff,0xff,0);
      sprintf(this->text,&DAT_00453f10);
      DrawText(this,this->text,0x1c,0x1e0,4,0xff,0xff,0);
      sprintf(this->text,&DAT_00453f18);
      DrawText(this,this->text,0x30,0xa3,0x1f,0xff,0xff,0xff);
      sprintf(this->text,&DAT_00453f1c);
      DrawText(this,this->text,0x30,0x191,0x1f,0xff,0xff,0xff);
      sprintf(this->text,&DAT_00453f20);
      DrawText(this,this->text,0x18,0x126,0,0xff,0xff,0xff);
      sprintf(this->text,&DAT_00453f28);
      DrawText(this,this->text,0x1c,0x123,0x21,0xff,0,0);
    }
    if (this->i3b8 == 1) {
      sprintf(this->text,&DAT_00453f30);
      thunk_FUN_00404960(this);
      lVar3 = __ftol();
      iVar2 = (int)lVar3;
      thunk_FUN_00404960(extraout_ECX_26);
      lVar3 = __ftol();
      iVar1 = (int)lVar3;
      thunk_FUN_00404960(extraout_ECX_27);
      lVar3 = __ftol();
      DrawText(this,this->text,0x30,0xec,0xe1,(int)lVar3,iVar1,iVar2);
    }
    if (this->i3b8 == 3) {
      if (this->i3dc < this->i3d8) {
        sprintf(this->text,&DAT_00453f3c);
        thunk_FUN_00404960(this);
        lVar3 = __ftol();
        iVar2 = (int)lVar3;
        thunk_FUN_00404960(extraout_ECX_28);
        lVar3 = __ftol();
        iVar1 = (int)lVar3;
        thunk_FUN_00404960(extraout_ECX_29);
        lVar3 = __ftol();
        DrawText(this,this->text,0x48,0x20,0xe1,(int)lVar3,iVar1,iVar2);
      }
      else if (this->i3d8 < this->i3dc) {
        sprintf(this->text,&DAT_00453f50);
        thunk_FUN_00404960(extraout_ECX_30);
        lVar3 = __ftol();
        iVar2 = (int)lVar3;
        thunk_FUN_00404960(this);
        lVar3 = __ftol();
        iVar1 = (int)lVar3;
        thunk_FUN_00404960(extraout_ECX_31);
        lVar3 = __ftol();
        DrawText(this,this->text,0x48,0x20,0xe1,(int)lVar3,iVar1,iVar2);
      }
      else {
        sprintf(this->text,&DAT_00453f64);
        thunk_FUN_00404960(extraout_ECX_32);
        lVar3 = __ftol();
        iVar2 = (int)lVar3;
        thunk_FUN_00404960(extraout_ECX_33);
        lVar3 = __ftol();
        iVar1 = (int)lVar3;
        thunk_FUN_00404960(this);
        lVar3 = __ftol();
        DrawText(this,this->text,0x48,0xc0,0xe1,(int)lVar3,iVar1,iVar2);
      }
    }
    if (this->i3b8 == 6) {
      sprintf(this->text,&DAT_00453f70);
      thunk_FUN_00404960(extraout_ECX_34);
      lVar3 = __ftol();
      iVar2 = (int)lVar3;
      thunk_FUN_00404960(extraout_ECX_35);
      lVar3 = __ftol();
      iVar1 = (int)lVar3;
      thunk_FUN_00404960(this);
      lVar3 = __ftol();
      DrawText(this,this->text,0x30,0x66,0xe1,(int)lVar3,iVar1,iVar2);
    }
  }
  if (this->state == 9) {
    sprintf(this->text,(byte *)s_Nice_Play___00453f84);
    DrawText(this,this->text,0xc,0x140,0x18,0xff,0xff,0xff);
    sprintf(this->text,(byte *)s_Thank_you_for_your_playing___00453f90);
    DrawText(this,this->text,0xc,0x140,0x30,0xff,0xff,0xff);
    sprintf(this->text,(byte *)s_And_Thanks_for__07th_Storming_Pa_00453fb0);
    DrawText(this,this->text,0xc,0x140,0x3e,0xff,0xff,0xff);
    sprintf(this->text,(byte *)s_wonderful_story_of__HIGURASHI_NO_00453fe4);
    DrawText(this,this->text,0xc,0x140,0x4c,0xff,0xff,0xff);
    sprintf(this->text,(byte *)s_We_are_looking_forward_to__MEAKA_00454014);
    DrawText(this,this->text,0xc,0x140,100,0xff,0xff,0xff);
    sprintf(this->text,(byte *)s_from_a_Mionist____00454044);
    DrawText(this,this->text,0xc,0x206,0x78,0xff,0xff,0xff);
  }
  return;
}


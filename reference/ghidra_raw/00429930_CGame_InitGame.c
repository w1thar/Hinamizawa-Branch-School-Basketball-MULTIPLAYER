// CGame_InitGame @ 00429930  size=2342

void __fastcall CGame_InitGame(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  float10 fVar2;
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  int local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044cd4d;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  *(undefined4 *)((int)param_1 + 0x26c) = 1;
  *(undefined4 *)((int)param_1 + 0x21c) = 0;
  *(undefined4 *)((int)param_1 + 0x220) = 0;
  *(undefined4 *)((int)param_1 + 0x224) = 0;
  *(undefined4 *)((int)param_1 + 0x228) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x22c) = 0;
  *(undefined4 *)((int)param_1 + 0x230) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x240) = 0;
  *(undefined4 *)((int)param_1 + 0x244) = 0x40c00000;
  *(undefined4 *)((int)param_1 + 0x248) = 0;
  *(undefined4 *)((int)param_1 + 0x24c) = 0;
  *(undefined4 *)((int)param_1 + 0x250) = 0x40c00000;
  *(undefined4 *)((int)param_1 + 0x254) = 0;
  *(undefined4 *)((int)param_1 + 0x260) = 0;
  *(undefined4 *)((int)param_1 + 0x264) = 0;
  *(undefined4 *)((int)param_1 + 600) = 0;
  *(undefined4 *)((int)param_1 + 0x25c) = 0;
  *(undefined4 *)((int)param_1 + 0x268) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x370) = 0;
  *(undefined4 *)((int)param_1 + 0x374) = 0;
  *(undefined4 *)((int)param_1 + 0x378) = 0;
  *(undefined4 *)((int)param_1 + 0x234) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x238) = 0xbf800000;
  *(undefined4 *)((int)param_1 + 0x23c) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x37c) = 0;
  *(undefined4 *)((int)param_1 + 0x380) = 0;
  *(undefined4 *)((int)param_1 + 900) = 0;
  *(undefined4 *)((int)param_1 + 0x390) = 0;
  *(undefined4 *)((int)param_1 + 0x394) = 0x3f800000;
  *(undefined1 *)((int)param_1 + 0x398) = 0;
  *(undefined1 *)((int)param_1 + 0x399) = 0;
  *(undefined1 *)((int)param_1 + 0x39a) = 0;
  *(undefined1 *)((int)param_1 + 0x3a4) = 0;
  *(undefined1 *)((int)param_1 + 0x3a5) = 0;
  *(undefined1 *)((int)param_1 + 0x3a6) = 0;
  *(undefined1 *)((int)param_1 + 0x3a7) = 0;
  *(undefined4 *)((int)param_1 + 0x3ac) = 0;
  *(undefined4 *)((int)param_1 + 0x3b8) = 0;
  *(undefined4 *)((int)param_1 + 0x3bc) = 0;
  *(undefined4 *)((int)param_1 + 0x39c) = 0;
  *(undefined4 *)((int)param_1 + 0x3a0) = 0xbf800000;
  *(undefined4 *)((int)param_1 + 0x3b0) = 0;
  *(undefined4 *)((int)param_1 + 0x3b4) = 0;
  *(undefined4 *)((int)param_1 + 0x3e0) = 0x43960000;
  *(undefined4 *)((int)param_1 + 0x3d8) = 0;
  *(undefined4 *)((int)param_1 + 0x3dc) = 0;
  *(undefined4 *)((int)param_1 + 0x400) = 0x40800000;
  *(undefined4 *)((int)param_1 + 0x40c) = 0;
  *(undefined1 *)((int)param_1 + 0x414) = 0;
  *(undefined4 *)((int)param_1 + 0x418) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x41c) = 0;
  puVar1 = (undefined4 *)operator_new(0x4c);
  local_8 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    local_54 = (undefined4 *)0x0;
  }
  else {
    local_54 = thunk_FUN_00408110(puVar1);
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)param_1 + 0xc0) = local_54;
  (**(code **)(**(int **)((int)param_1 + 0x3c) + 0x94))(*(undefined4 *)((int)param_1 + 0x3c),0,5,2);
  (**(code **)(**(int **)((int)param_1 + 0x3c) + 0x50))(*(undefined4 *)((int)param_1 + 0x3c),0x1b,1)
  ;
  (**(code **)(**(int **)((int)param_1 + 0x3c) + 0x50))(*(undefined4 *)((int)param_1 + 0x3c),0x13,5)
  ;
  (**(code **)(**(int **)((int)param_1 + 0x3c) + 0x50))(*(undefined4 *)((int)param_1 + 0x3c),0x14,6)
  ;
  Texture_Load(s_basket_clouds_bmp_004541ac,0,0);
  Texture_Load(s_basket_cloud2_bmp_004541c0,0,0);
  Texture_Load(s_basket_court_tga_004541d4,0,0);
  Texture_Load(s_basket_efect_tga_004541e8,0,0);
  puVar1 = (undefined4 *)operator_new(0x24);
  local_8 = 1;
  if (puVar1 == (undefined4 *)0x0) {
    local_58 = (undefined4 *)0x0;
  }
  else {
    local_58 = CMesh_ctor(puVar1);
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)param_1 + 0xc4) = local_58;
  CMesh_LoadX(s_basket_court_x_004541fc);
  CMesh_Scale(*(void **)((int)param_1 + 0xc4),2.5);
  puVar1 = (undefined4 *)operator_new(0x24);
  local_8 = 2;
  if (puVar1 == (undefined4 *)0x0) {
    local_5c = (undefined4 *)0x0;
  }
  else {
    local_5c = CMesh_ctor(puVar1);
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)param_1 + 200) = local_5c;
  CMesh_LoadX(s_basket_build_x_0045420c);
  CMesh_Scale(*(void **)((int)param_1 + 200),2.5);
  puVar1 = (undefined4 *)operator_new(0x24);
  local_8 = 3;
  if (puVar1 == (undefined4 *)0x0) {
    local_60 = (undefined4 *)0x0;
  }
  else {
    local_60 = CMesh_ctor(puVar1);
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)param_1 + 0xcc) = local_60;
  CMesh_LoadX(s_basket_goal_x_0045421c);
  CMesh_Scale(*(void **)((int)param_1 + 0xcc),2.5);
  puVar1 = (undefined4 *)operator_new(0x24);
  local_8 = 4;
  if (puVar1 == (undefined4 *)0x0) {
    local_64 = (undefined4 *)0x0;
  }
  else {
    local_64 = CMesh_ctor(puVar1);
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)param_1 + 0xd0) = local_64;
  CMesh_LoadX(s_basket_ball_x_0045422c);
  CMesh_Scale(*(void **)((int)param_1 + 0xd0),2.5);
  puVar1 = (undefined4 *)operator_new(0x24);
  local_8 = 5;
  if (puVar1 == (undefined4 *)0x0) {
    local_68 = (undefined4 *)0x0;
  }
  else {
    local_68 = CMesh_ctor(puVar1);
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)param_1 + 0xd4) = local_68;
  CMesh_LoadX(s_basket_corn_x_0045423c);
  CMesh_Scale(*(void **)((int)param_1 + 0xd4),2.5);
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    puVar1 = (undefined4 *)operator_new(0x19c);
    local_8 = 6;
    if (puVar1 == (undefined4 *)0x0) {
      local_6c = (undefined4 *)0x0;
    }
    else {
      local_6c = CPlayer_ctor(puVar1);
    }
    local_8 = 0xffffffff;
    *(undefined4 **)((int)param_1 + local_14 * 4 + 0xd8) = local_6c;
    CPlayer_Load(*(void **)((int)param_1 + local_14 * 4 + 0xd8),*(undefined4 *)((int)param_1 + 0x3c)
                 ,local_14);
  }
  thunk_FUN_0042b0bb(param_1,0);
  _memset((void *)((int)param_1 + 0x134),0,0x68);
  *(undefined4 *)((int)param_1 + 0x134) = 3;
  *(undefined4 *)((int)param_1 + 0x174) = *(undefined4 *)((int)param_1 + 0x234);
  *(undefined4 *)((int)param_1 + 0x178) = *(undefined4 *)((int)param_1 + 0x238);
  *(undefined4 *)((int)param_1 + 0x17c) = *(undefined4 *)((int)param_1 + 0x23c);
  *(undefined4 *)((int)param_1 + 0x138) = 0x3f4ccccd;
  *(undefined4 *)((int)param_1 + 0x13c) = 0x3f4ccccd;
  *(undefined4 *)((int)param_1 + 0x140) = 0x3f4ccccd;
  *(undefined4 *)((int)param_1 + 0x158) = 0x3f000000;
  *(undefined4 *)((int)param_1 + 0x15c) = 0x3f000000;
  *(undefined4 *)((int)param_1 + 0x160) = 0x3f000000;
  *(undefined4 *)((int)param_1 + 0x148) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x14c) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x150) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x188) = 0x3f800000;
  fVar2 = (float10)FUN_00433c84(param_1);
  *(float *)((int)param_1 + 0x180) = (float)fVar2;
  (**(code **)(**(int **)((int)param_1 + 0x3c) + 0xb0))(*(undefined4 *)((int)param_1 + 0x3c),0,1);
  _memset((void *)((int)param_1 + 0xf0),0,0x44);
  *(undefined4 *)((int)param_1 + 0xf0) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0xf4) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0xf8) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0xfc) = 0x3f000000;
  *(undefined4 *)((int)param_1 + 0x100) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x104) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x108) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x10c) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x110) = 0;
  *(undefined4 *)((int)param_1 + 0x114) = 0;
  *(undefined4 *)((int)param_1 + 0x118) = 0;
  *(undefined4 *)((int)param_1 + 0x11c) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x120) = 0;
  *(undefined4 *)((int)param_1 + 0x124) = 0;
  *(undefined4 *)((int)param_1 + 0x128) = 0;
  *(undefined4 *)((int)param_1 + 0x130) = 0;
  *(undefined4 *)((int)param_1 + 0x1dc) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x1e0) = 0;
  *(undefined4 *)((int)param_1 + 0x1e4) = 0;
  *(undefined4 *)((int)param_1 + 0x1e8) = 0;
  *(float *)((int)param_1 + 0x1ec) =
       -*(float *)((int)param_1 + 0x234) / *(float *)((int)param_1 + 0x238);
  *(undefined4 *)((int)param_1 + 0x1f0) = 0;
  *(float *)((int)param_1 + 500) =
       -*(float *)((int)param_1 + 0x23c) / *(float *)((int)param_1 + 0x238);
  *(undefined4 *)((int)param_1 + 0x1f8) = 0;
  *(undefined4 *)((int)param_1 + 0x1fc) = 0;
  *(undefined4 *)((int)param_1 + 0x200) = 0;
  *(undefined4 *)((int)param_1 + 0x204) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x208) = 0;
  *(undefined4 *)((int)param_1 + 0x20c) = 0;
  *(undefined4 *)((int)param_1 + 0x210) = 0x3d4ccccd;
  *(undefined4 *)((int)param_1 + 0x214) = 0;
  *(undefined4 *)((int)param_1 + 0x218) = 0x3f800000;
  thunk_FUN_004067db(*(int **)((int)param_1 + 0x3c));
  *unaff_FS_OFFSET = local_10;
  return;
}


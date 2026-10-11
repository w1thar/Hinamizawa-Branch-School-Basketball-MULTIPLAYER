// Game::InitD3D @ 00401daa  size=1249

bool __thiscall Game::InitD3D(Game *this)

{
  bool bVar1;
  int iVar2;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_58;
  Mat4 local_44;
  
  iVar2 = (*(code *)**(undefined4 **)this->ddraw)(this->ddraw,&DAT_0044fcd8,&this->d3d);
  if (iVar2 < 0) {
    MessageBoxA((HWND)0x0,&DAT_00452e64,&DAT_00457cc4,0);
    bVar1 = false;
  }
  else {
    _memset(this->zbufFormat,0,0x20);
    this->zbufFormat[0] = ' ';
    this->zbufFormat[1] = '\0';
    this->zbufFormat[2] = '\0';
    this->zbufFormat[3] = '\0';
    this->zbufFormat[4] = '\0';
    this->zbufFormat[5] = '\x04';
    this->zbufFormat[6] = '\0';
    this->zbufFormat[7] = '\0';
    (**(code **)(*(int *)this->d3d + 0x18))(this->d3d,&DAT_0044fc68,FUN_0040228b,this->zbufFormat);
    if (g_zbufFound == '\0') {
      (**(code **)(*(int *)this->d3d + 0x18))(this->d3d,&DAT_0044fca8,FUN_0040228b,this->zbufFormat)
      ;
      if (g_zbufFound == '\0') {
        (**(code **)(*(int *)this->d3d + 0x18))
                  (this->d3d,&DAT_0044fc98,FUN_0040228b,this->zbufFormat);
        if (g_zbufFound == '\0') {
          (**(code **)(*(int *)this->d3d + 0x18))
                    (this->d3d,&DAT_0044fcb8,FUN_0040228b,this->zbufFormat);
          if (g_zbufFound != '\0') {
            this->devType = '\x04';
          }
        }
        else {
          this->devType = '\x03';
        }
      }
      else {
        this->devType = '\x02';
      }
    }
    else {
      this->devType = '\x01';
    }
    _memset(&local_c0,0,0x7c);
    local_c0 = 0x7c;
    local_bc = 0x1007;
    if (this->devType < '\x03') {
      local_58 = 0x24000;
    }
    else {
      local_58 = 0x20800;
    }
    local_b4 = 0x280;
    local_b8 = 0x1e0;
    local_78 = 0x20;
    local_74 = 0x400;
    FUN_004334a0(&local_78,(undefined4 *)this->zbufFormat,0x20);
    iVar2 = (**(code **)(*(int *)this->ddraw + 0x18))(this->ddraw,&local_c0,&this->zbuffer,0);
    if (iVar2 == 0) {
      (*this->backbuf->lpVtbl->AddAttachedSurface)(this->backbuf,this->zbuffer);
      iVar2 = (**(code **)(*(int *)this->d3d + 0x10))
                        (this->d3d,&DAT_0044fc68,this->backbuf,&this->device);
      if ((((iVar2 != 0) &&
           (iVar2 = (**(code **)(*(int *)this->d3d + 0x10))
                              (this->d3d,&DAT_0044fca8,this->backbuf,&this->device), iVar2 != 0)) &&
          (iVar2 = (**(code **)(*(int *)this->d3d + 0x10))
                             (this->d3d,&DAT_0044fc98,this->backbuf,&this->device), iVar2 != 0)) &&
         (iVar2 = (**(code **)(*(int *)this->d3d + 0x10))
                            (this->d3d,&DAT_0044fcb8,this->backbuf,&this->device), iVar2 != 0)) {
        MessageBoxA((HWND)0x0,&DAT_00452e90,&DAT_00457ccc,0);
        return false;
      }
      local_d8 = 0;
      local_d4 = 0;
      local_d0 = 0x280;
      local_cc = 0x1e0;
      local_c8 = 0;
      local_c4 = 0x3f800000;
      iVar2 = (*this->device->lpVtbl->SetViewport)(this->device,&local_d8);
      if (iVar2 == 0) {
        thunk_FUN_00403880(&local_44);
        D3DUtil_SetProjectionMatrix(&local_44,0.785,0.785,1.0,2000.0);
        (*this->device->lpVtbl->SetTransform)(this->device,3,&local_44);
        (*this->device->lpVtbl->SetRenderState)(this->device,0x89,1);
        (*this->device->lpVtbl->SetTextureStageState)(this->device,0,0x10,2);
        (*this->device->lpVtbl->SetTextureStageState)(this->device,1,0x10,2);
        (*this->device->lpVtbl->SetRenderState)(this->device,7,1);
        bVar1 = true;
      }
      else {
        MessageBoxA((HWND)0x0,&DAT_00452ea8,&DAT_00457cd0,0);
        bVar1 = false;
      }
    }
    else {
      MessageBoxA((HWND)0x0,&DAT_00452e7c,&DAT_00457cc8,0);
      bVar1 = false;
    }
  }
  return bVar1;
}


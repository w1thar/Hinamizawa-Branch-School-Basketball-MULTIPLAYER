// Game::RenderObjects @ 0042a8fa  size=1985

void __thiscall Game::RenderObjects(Game *this)

{
  void *tex;
  Mat4 local_84;
  Mat4 local_44;
  
  thunk_FUN_00403880(&local_44);
  thunk_FUN_00403880(&local_84);
  (this->mtl).diffuse.r = 1.0;
  (this->mtl).diffuse.g = 1.0;
  (this->mtl).diffuse.b = 1.0;
  (this->mtl).diffuse.a = 0.5;
  (this->mtl).ambient.r = 1.0;
  (this->mtl).ambient.g = 1.0;
  (this->mtl).ambient.b = 1.0;
  (*this->device->lpVtbl->SetMaterial)(this->device,&this->mtl);
  tex = D3DTextr_GetSurface(s_basket_efect_tga_00454260);
  (*this->device->lpVtbl->SetTexture)(this->device,0,tex);
  D3DUtil_SetRotateXMatrix(&local_44,this->f264);
  D3DUtil_SetRotateYMatrix(&local_84,this->f260);
  D3DMath_MatrixMultiply(&local_44,&local_44,&local_84);
  if ((this->v24c).y <= 0.7) {
    SetTranslateMatrix(&local_84,(this->v24c).x,0.7,(this->v24c).z);
  }
  else {
    SetTranslateMatrix(&local_84,(this->v24c).x,(this->v24c).y,(this->v24c).z);
  }
  D3DMath_MatrixMultiply(&local_44,&local_44,&local_84);
  (*this->device->lpVtbl->SetTransform)(this->device,1,&local_44);
  StaticMesh::Render((StaticMesh *)this->meshBall,this->device);
  SetTranslateMatrix(&local_44,35.0,0.0,0.0);
  (*this->device->lpVtbl->SetTransform)(this->device,1,&local_44);
  StaticMesh::Render((StaticMesh *)this->meshGoal,this->device);
  D3DUtil_SetRotateYMatrix(&local_84,3.14);
  SetTranslateMatrix(&local_44,-35.0,0.0,0.0);
  D3DMath_MatrixMultiply(&local_44,&local_84,&local_44);
  (*this->device->lpVtbl->SetTransform)(this->device,1,&local_44);
  StaticMesh::Render((StaticMesh *)this->meshGoal,this->device);
  if (0 < this->i3ac) {
    if (this->i3ac == 1) {
      (this->mtl).diffuse.r = 0.0;
      (this->mtl).diffuse.g = 0.0;
      (this->mtl).diffuse.b = 1.0;
      (this->mtl).ambient.r = 0.0;
      (this->mtl).ambient.g = 0.0;
      (this->mtl).ambient.b = 1.0;
    }
    else if (this->i3ac == 2) {
      (this->mtl).diffuse.r = 0.0;
      (this->mtl).diffuse.g = 1.0;
      (this->mtl).diffuse.b = 0.0;
      (this->mtl).ambient.r = 0.0;
      (this->mtl).ambient.g = 1.0;
      (this->mtl).ambient.b = 0.0;
    }
    else {
      (this->mtl).diffuse.r = 1.0;
      (this->mtl).diffuse.g = 0.0;
      (this->mtl).diffuse.b = 0.0;
      (this->mtl).ambient.r = 1.0;
      (this->mtl).ambient.g = 0.0;
      (this->mtl).ambient.b = 0.0;
    }
    (*this->device->lpVtbl->SetMaterial)(this->device,&this->mtl);
    D3DUtil_SetRotateYMatrix(&local_84,this->f3e0);
    SetTranslateMatrix(&local_44,(this->v240).x,(this->v240).y,(this->v240).z);
    D3DMath_MatrixMultiply(&local_44,&local_84,&local_44);
    (*this->device->lpVtbl->SetTransform)(this->device,1,&local_44);
    StaticMesh::Render((StaticMesh *)this->meshCone,this->device);
    D3DUtil_SetRotateYMatrix(&local_84,3.14);
    SetTranslateMatrix(&local_44,-35.0,0.0,0.0);
    D3DMath_MatrixMultiply(&local_44,&local_84,&local_44);
  }
  (*this->device->lpVtbl->SetTextureStageState)(this->device,0,5,0);
  (this->mtl).diffuse.r = 0.0;
  (this->mtl).diffuse.g = 0.0;
  (this->mtl).diffuse.b = 0.0;
  (this->mtl).ambient.r = 0.0;
  (this->mtl).ambient.g = 0.0;
  (this->mtl).ambient.b = 0.0;
  (*this->device->lpVtbl->SetMaterial)(this->device,&this->mtl);
  D3DMath_MatrixMultiply(&local_44,&local_44,&this->matShadow);
  (*this->device->lpVtbl->SetTransform)(this->device,1,&local_44);
  StaticMesh::Render((StaticMesh *)this->meshGoal,this->device);
  SetTranslateMatrix(&local_44,35.0,0.0,0.0);
  D3DMath_MatrixMultiply(&local_44,&local_44,&this->matShadow);
  (*this->device->lpVtbl->SetTransform)(this->device,1,&local_44);
  StaticMesh::Render((StaticMesh *)this->meshGoal,this->device);
  if ((this->v24c).y <= 0.7) {
    SetTranslateMatrix(&local_44,(this->v24c).x,0.7,(this->v24c).z);
  }
  else {
    SetTranslateMatrix(&local_44,(this->v24c).x,(this->v24c).y,(this->v24c).z);
  }
  D3DMath_MatrixMultiply(&local_44,&local_44,&this->matShadow);
  (*this->device->lpVtbl->SetTransform)(this->device,1,&local_44);
  StaticMesh::Render((StaticMesh *)this->meshBall,this->device);
  (*this->device->lpVtbl->SetTransform)(this->device,1,&this->matShadow);
  StaticMesh::Render((StaticMesh *)this->meshBuild,this->device);
  (*this->device->lpVtbl->SetTextureStageState)(this->device,0,5,2);
  D3DUtil_SetIdentityMatrix(&local_44);
  (*this->device->lpVtbl->SetTransform)(this->device,1,&local_44);
  return;
}


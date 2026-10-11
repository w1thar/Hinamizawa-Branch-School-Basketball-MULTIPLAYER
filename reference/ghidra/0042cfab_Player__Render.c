// Player::Render @ 0042cfab  size=387

void __thiscall Player::Render(Player *this,IDirect3DDevice7 *dev,Mat4 shadow)

{
  void *tex;
  Mat4 local_44;
  
  thunk_FUN_00403880(&local_44);
  (this->mtl).diffuse.r = 0.6;
  (this->mtl).diffuse.g = 0.6;
  (this->mtl).diffuse.b = 0.6;
  (this->mtl).ambient.r = 0.9;
  (this->mtl).ambient.g = 0.9;
  (this->mtl).ambient.b = 0.9;
  (*dev->lpVtbl->SetMaterial)(dev,&this->mtl);
  (*dev->lpVtbl->SetTextureStageState)(dev,0,5,2);
  (*dev->lpVtbl->SetRenderState)(dev,0x13,5);
  (*dev->lpVtbl->SetRenderState)(dev,0x14,6);
  tex = D3DTextr_GetSurface(this->texName);
  (*dev->lpVtbl->SetTexture)(dev,0,tex);
  SkinModel::Render(this->model,dev);
  (*dev->lpVtbl->SetTextureStageState)(dev,0,5,0);
  (this->mtl).diffuse.r = 0.0;
  (this->mtl).diffuse.g = 0.0;
  (this->mtl).diffuse.b = 0.0;
  (this->mtl).ambient.r = 0.0;
  (this->mtl).ambient.g = 0.0;
  (this->mtl).ambient.b = 0.0;
  (*dev->lpVtbl->SetMaterial)(dev,&this->mtl);
  (*dev->lpVtbl->SetTransform)(dev,1,&shadow);
  SkinModel::Render(this->model,dev);
  (*dev->lpVtbl->SetTextureStageState)(dev,0,5,2);
  D3DUtil_SetIdentityMatrix(&local_44);
  (*dev->lpVtbl->SetTransform)(dev,1,&local_44);
  return;
}


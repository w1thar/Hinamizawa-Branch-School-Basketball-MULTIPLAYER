// Game::RenderCourt @ 0042a829  size=209

void __thiscall Game::RenderCourt(Game *this)

{
  void *tex;
  
  (this->mtl).diffuse.r = 1.0;
  (this->mtl).diffuse.g = 1.0;
  (this->mtl).diffuse.b = 1.0;
  (this->mtl).diffuse.a = 0.5;
  (this->mtl).ambient.r = 1.0;
  (this->mtl).ambient.g = 1.0;
  (this->mtl).ambient.b = 1.0;
  (*this->device->lpVtbl->SetMaterial)(this->device,&this->mtl);
  tex = D3DTextr_GetSurface(s_basket_court_tga_0045424c);
  (*this->device->lpVtbl->SetTexture)(this->device,0,tex);
  StaticMesh::Render(this->meshCourt,this->device);
  StaticMesh::Render((StaticMesh *)this->meshBuild,this->device);
  return;
}


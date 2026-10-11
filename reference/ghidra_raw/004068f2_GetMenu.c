// GetMenu @ 004068f2  size=52

/* Library Function - Single Match
    struct HMENU__ * __cdecl GetMenu(struct HWND__ *)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

HMENU__ * __cdecl GetMenu(HWND__ *param_1)

{
  undefined4 *puVar1;
  HMENU__ *local_c;
  
  puVar1 = FUN_00406679((LPCSTR)param_1);
  if (puVar1 == (undefined4 *)0x0) {
    local_c = (HMENU__ *)0x0;
  }
  else {
    local_c = (HMENU__ *)puVar1[0x1b];
  }
  return local_c;
}


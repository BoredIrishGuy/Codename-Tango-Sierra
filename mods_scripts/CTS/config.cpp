#define _ARMA_

class CfgPatches
{
  class CTS
  {
      requiredAddons[] = { "namalsk_survival" };
  }
}

class CfgMods
{
  class CTS
  {
      type = "mod";
      
      class defs
      {
        class worldScriptModule
        {
          value = "";
          files[] = {"mods/mods_scripts/CTS/WorldScripts"};
        }
      }
  }
}
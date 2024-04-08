#include "IniFile.h"

using namespace std;

int main() {
    IniFile sec("cfg.ini");
    IniFile prim("config.ini");

    sec.writeString("Game", "Crowd", "Max");
    prim.writeDouble("Game", "HP", 22.2);
    sec.writeInt("Game", "HP", 121212);

    IniFile merged = IniFile::merge(prim, sec, "merged.ini");
    
    prim.writeInt("Game", "HP", 60);
    prim.writeInt("Graphics", "width", 8);

    return 0;
}
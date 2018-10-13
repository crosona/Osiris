#include "xorstr.hpp"

#include "Config.h"
#include "GUI.h"
#include "Hooks.h"
#include "Interfaces.h"
#include "Memory.h"

Config config{ xorstr("Osiris.json").crypt_get() };
Interfaces interfaces;
Memory memory;
Hooks hooks;
GUI gui;

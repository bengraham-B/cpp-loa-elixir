#ifndef LUA_H
#define LUA_H

#include <iostream>
#include <lua.hpp> // Adjust the path as per your Lua installation

void LuaH(const char* script) {
    lua_State* L = luaL_newstate(); // Create a new Lua state
    luaL_openlibs(L); // Open Lua standard libraries

    // Load and execute a Lua script
    if (luaL_loadfile(L, script) || lua_pcall(L, 0, 0, 0)) {
        const char* errorMessage = lua_tostring(L, -1);
        std::cerr << "Error running script: " << errorMessage << std::endl;
        lua_pop(L, 1); // Pop error message from the stack
    }

    lua_close(L); // Close Lua state
}

#endif 

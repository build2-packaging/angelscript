#include <angelscript.h>
#include <angelscript/angelscript.h>
#include <angelscript/scriptarray/scriptarray.h>
#include <scriptarray/scriptarray.h>

#undef NDEBUG
#include <cassert>

int main() {
  asIScriptEngine *engine = asCreateScriptEngine();
  assert(engine != nullptr);
  RegisterScriptArray(engine, true);
  engine->ShutDownAndRelease();
}

#include <add_on/scriptarray/scriptarray.h>
#include <angelscript.h>

#undef NDEBUG
#include <cassert>

int main() {
  asIScriptEngine *engine = asCreateScriptEngine();
  assert(engine != nullptr);
  RegisterScriptArray(engine, true);
  engine->ShutDownAndRelease();
}

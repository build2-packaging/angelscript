#include <angelscript.h>

#undef NDEBUG
#include <cassert>

int main ()
{
  asIScriptEngine* engine = asCreateScriptEngine ();
  assert (engine != nullptr);
  engine->ShutDownAndRelease ();
}

#include <Aor.h>

class Sandbox : public Aor::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Aor::Application* Aor::CreateApplication()
{
	return new Sandbox();
}
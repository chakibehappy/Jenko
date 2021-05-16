#include <Jenko.h>

class Sandbox : public Jenko::Application
{

public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Jenko::Application* Jenko::CreateApplication()
{
	return new Sandbox();
}
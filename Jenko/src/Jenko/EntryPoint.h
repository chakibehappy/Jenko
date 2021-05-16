#pragma once

#ifdef JK_PLATFORM_WINDOWS

extern Jenko::Application* Jenko::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Jenko::CreateApplication();
	app->Run();
	delete app;
}

#endif



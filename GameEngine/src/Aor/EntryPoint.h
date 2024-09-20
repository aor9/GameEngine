#pragma once

#ifdef AOR_PLATFORM_WINDOWS

extern Aor::Application* Aor::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Aor::CreateApplication(); 
	app->Run();
	delete app;
}

#endif
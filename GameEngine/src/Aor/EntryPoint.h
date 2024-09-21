#pragma once

#ifdef AOR_PLATFORM_WINDOWS

extern Aor::Application* Aor::CreateApplication();

int main(int argc, char** argv)
{
	Aor::Log::Init();
	AOR_CORE_WARN("Init Log!!");
	int a = 5;
	AOR_INFO("Hello!! Var={0}", a);

	auto app = Aor::CreateApplication(); 
	app->Run();
	delete app;
}

#endif
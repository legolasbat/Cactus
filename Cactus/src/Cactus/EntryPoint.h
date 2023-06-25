#pragma once

#ifdef CT_PLATFORM_WINDOWS

extern Cactus::Application* Cactus::CreateApplication();

int main(int argc, char** argv)
{
	Cactus::Log::Init();
	CACTUS_CORE_WARN("Initialized Log");
	int a = 5;
	CACTUS_INFO("Hello! Var={0}", a);

	auto app = Cactus::CreateApplication();
	app->Run();
	delete app;
}

#endif

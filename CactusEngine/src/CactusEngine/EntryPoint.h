#pragma once

#ifdef CE_PLATFORM_WINDOWS

extern CE::Application* CE::CreateApplication();

int main(int argc, char** argv) {
	CE::Log::Init();
	CE_CORE_WARN("Initialized Log");
	CE_INFO("Blau");

	auto app = CE::CreateApplication();
	app->Run();
	delete app;
}

#endif
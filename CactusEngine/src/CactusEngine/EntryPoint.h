#pragma once

#ifdef CE_PLATFORM_WINDOWS

extern CE::Application* CE::CreateApplication();

int main(int argc, char** argv) {
	auto app = CE::CreateApplication();
	app->Run();
	delete app;
}

#endif
#include <CactusEngine.h>

class TestRoomApp : public CE::Application {

public:
	TestRoomApp() {

	}

	~TestRoomApp() {

	}

};

CE::Application* CE::CreateApplication() {
	return new TestRoomApp();
}
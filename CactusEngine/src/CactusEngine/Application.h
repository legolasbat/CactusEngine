#pragma once

#include "Core.h"

namespace CE {

	class CE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();

}

